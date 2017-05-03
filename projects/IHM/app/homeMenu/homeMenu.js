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
		
	  $scope.save = function() {
			console.log("Save Pressed")//test for development
			//simulates an anchor and a click on it
			var anchor = document.createElement('a');
			if (window.navigator.msSaveOrOpenBlob){//In case of IE10-
				alert("Veuillez selectionner un navigateur plus récent");
			}
			else{//If browser supports download attr
				anchor.href = "resources/config.json";
				anchor.target = "config.json";
				anchor.download = "config.json";
				console.log(anchor.toString());
				document.body.appendChild(anchor);
				anchor.click();
				setTimeout(function() {
					document.body.removeChild(anchor);
				}, 0);
			}
			
			
			
		/*
		//TODO test this stub to support download with IE10
		var a = document.createElement("a"),
			file = new Blob([data], {type: type});
		if (window.navigator.msSaveOrOpenBlob) // IE10+
			window.navigator.msSaveOrOpenBlob(file, filename);
		*/
		
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
	  	
	  	var xhrGetConfig = getXMLHttpRequest();
	  	var configs = [];
		var selector = $("#selectorConfig");
	    var newHtml = '<section ng-controller="homeMenuCtrl">';
		
	    xhrGetConfig.onreadystatechange = function() {

			if (xhrGetConfig.readyState == 4 && (xhrGetConfig.status == 200 || xhrGetConfig.status == 0)) {
			
				configs = JSON.parse(xhrGetConfig.responseText);
				console.log(configs);	

				 for(var i=0; i<configs.length; i++) {
					console.log(i);
					newHtml += createConfigBalise(configs[i]);
				}

				newHtml += "<button class='configValidateButton' ng-click='chooseConfig()'>Valider</button>";
				newHtml += "</section>";
				var compiledContent = $compile(newHtml)($scope);
				selector.html(compiledContent);
				$("#overlayLoad").css("display", "block");
				
			}
		};
		    
		xhrGetConfig.open('GET', '/configs', true);
		xhrGetConfig.send();
				
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
	  
 	function getXMLHttpRequest() {
		var xhr = null;
		if (window.XMLHttpRequest || window.ActiveXObject) {
			if (window.ActiveXObject) {
				try {
				    xhr = new ActiveXObject("Msxml2.XMLHTTP");
				} catch(e) {
				    xhr = new ActiveXObject("Microsoft.XMLHTTP");
				}
			} else {
				xhr = new XMLHttpRequest(); 
			}
		} else {
			alert("Votre navigateur ne supporte pas l'objet XMLHTTPRequest...");
			return null;
		}
		return xhr;
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
		  
				var xhr = getXMLHttpRequest();
			
				xhr.onreadystatechange = function() {

					if (xhr.readyState == 4 && (xhr.status == 200 || xhr.status == 0)) {
					
						dataFactory.setData(JSON.parse(xhr.responseText));
						console.log(dataFactory.getData());
						alert('Configuration Chargée'); // C'est bon \o/	
						$('#overlayLoad').css('display', 'none');
						$("#id"+$scope.lastHighLighted).removeAttr('selected');
						$scope.lastHighLighted = '';
						
						$http.post('/data', dataFactory.getData());
					}
				};
					
				xhr.open('GET', '/resources/lycee_don_bosco' + "/" + fileName, true);
				xhr.send();				
			}	
		};		
  }]);
  
  
