/**
 * Created by nicolas on 13/04/17.
 */
'use strict';

angular.module('myApp.homeMenu', ['ngRoute', 'myApp.dataFactory'])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/homeMenu', {
      templateUrl: 'homeMenu/homeMenu.html',
      controller: 'homeMenuCtrl'
    });
  }])
  
  .controller('homeMenuCtrl', ["$scope", "$http", "$rootScope", "dataFactory", '$compile', function($scope, $http, $rootScope, dataFactory, $compile) {

	  $scope.configName = '';
	  $scope.save = function() {
          	$scope.configName = '';
			$('#overlaySave').css('display', 'block');
	  };

	  $scope.saveAs = function() {
		  
		  $http.post('/data?config=' + $scope.configName, dataFactory.getData()).success(function(data, status) {
			  
			  if (status == 200) {
				  
				  alert('configuration sauvegardée sur le serveur');
				  
			  } else {
				  
				  alert('erreur du serveur : configuration non sauvegardée');
			  }
			  
			  $('#overlaySave').css('display', 'none');
			  
          }).error(function(data, status) {
			  
			  if (status == 401) {
				  
				  alert(status + ' : authentification requise');  
			  
			  } else {
				  
				  alert(status + ' : ' + data);
			  }
			  
			  $('#overlaySave').css('display', 'none');
		  });
	  };

	  function createConfigBalise(name) {
		var nameSansExt = name.replace(".json", "");
		var highlight = "\"highlight('"+nameSansExt+"')\"";
	  	var text = "<button id='id"+ nameSansExt +"' class='configButton' ng-click="+highlight+">"+ nameSansExt +" </button>";
	  	return text;
	  }
	  
	  
	  $scope.load = function() {
	  
	  	var overlayToFill = $("#selectorConfig");
	  	overlayToFill.innerHTML = "";
	  	
	  	var configs = [];
		var selector = $("#selectorConfig");
	    var newHtml = '<section ng-controller="homeMenuCtrl">';
		
	    $http.get('/configs').success(function(data, status) {
			
			if (status = 200) {
				
				configs = data;
				console.log(configs);	
				
				for(var i = 0; i < configs.length; i++) {
					
					newHtml += createConfigBalise(configs[i]);
				}

				newHtml += "<button class='configValidateButton' ng-click='chooseConfig()'>Valider</button>";
				newHtml += " <button style='margin-left: 40%;' class=\"configValidateButton\" onclick=\"$('#overlayLoad').css('display', 'none')\">Annuler</button>";
				newHtml += "</section>";
				var compiledContent = $compile(newHtml)($scope);
				selector.html(compiledContent);
				$("#overlayLoad").css("display", "block");			
			}
			
		}).error(function(data, status) {
			
			if (status == 401) {
				  
				alert(status + ' : authentification requise');  
			  
			} else {
				  
				alert(status + ' : ' + data);
			}
		});
		
			/**
			//simulate an input of type file
			var newElem = document.createElement('input');
			newElem.hidden = true;
			newElem.id = 'fileSelecter';
			newElem.setAttribute("type", "file")
			//add it
			document.body.appendChild(newElem);
			//set interaction
			var loadButton = $('#fileSelecter');
			//console.log(loadButton);//Debug Log
			loadButton.change(function (evt) {
				console.log("fichier detecté");
				var file = evt.target.files[0];
				var reader = new FileReader();
				
				//defining callback
				reader.onload = function (finished_event) {
					data = JSON.parse(finished_event.target.result);
					console.log(data);
					//TODO AJAX CALL TO SAVE INSIDE config.json.
					//upload to server 1st attempt
					var url = "/service/uploadConfig";
					var responsePromise = $http.post(url,data);
					responsePromise.success(function(data, status, headers, config) {
							console.log("upload successful !");
					});
					responsePromise.error(function(data, status, headers, config) {
							console.log("upload error : AJAX failed !");
					});
			
				};
				reader.readAsText(file);
			});
			//simulate a click
			newElem.click();
			//remove it
			setTimeout(function() {
				document.body.removeChild(newElem);
			}, 0);	*/
	
	  };
	  
	  $scope.generate = function() {
		  console.log("Generate Pressed");
		  
		  var xhr = getXMLHttpRequest();
		  
  	    	xhr.onreadystatechange = function() {

				if (xhr.readyState == 4 && (xhr.status == 200 || xhr.status == 0)) {
				
					alert(xhr.responseText); // C'est bon \o/       	
				}
			};
			
			xhr.open('GET', '/generate', true);
			xhr.send();  
	  };
	
		$scope.lastHighLighted = "";
		$scope.highlight = function(name) {
			console.log('Highlight '+name);
			console.log($("#id"+$scope.lastHighLighted));
			$("#id"+$scope.lastHighLighted).removeAttr('selected');
			$scope.lastHighLighted = name;
			$("#id"+$scope.lastHighLighted).attr('selected', true);
			
			
		};
		
		$scope.chooseConfig = function() {
			
			if($scope.lastHighLighted === '') {
				
				alert('Veuillez choisir une configuration');
				
			}else {
				
				var fileName = $scope.lastHighLighted+".json";
			
				$http.get('/data?config=' + $scope.lastHighLighted).success(function(data, status) {

					if (status == 200 || status == 0) {
					
						dataFactory.setData(data);
						console.log(dataFactory.getData());
						alert('Configuration Chargée'); // C'est bon \o/	
						$('#overlayLoad').css('display', 'none');
						$("#id"+$scope.lastHighLighted).removeAttr('selected');
						$scope.lastHighLighted = '';
						
						$http.post('/data', dataFactory.getData());
					
					} else {
						
						alert(status + ' : erreur du serveur')
					}
					
				}).error(function(data, status) {
					
					if (status == 404) {
						
						alert(status + ' : configuration inconnue du serveur');
					
					} else if (status == 401) {
						
						alert(status + ' : authentification requise');
					}
				});
			}	
		};		
  }]);
  
  
