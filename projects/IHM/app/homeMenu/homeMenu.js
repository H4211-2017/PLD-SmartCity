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
				  
				  $scope.displayQuietMessage('Configuration sauvegardée sur le serveur', 4000, 'blue');
				  
			  } else {
				  
				  $scope.displayQuietMessage('Erreur du serveur : Configuration non sauvegardée', 4000, 'red');
			  }
			  
			  $('#overlaySave').css('display', 'none');
			  
          }).error(function(data, status) {
			  
			  if (status == 401) {
				  
				  $scope.displayQuietMessage(status + ' : Authentification requise', 4000, 'red');  
			  
			  } else {
				  
				  $scope.displayQuietMessage(status + ' : ' + data, 4000, 'red');
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
			
			if (status = 200 || status == 0) {
				
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
				  
				$scope.displayQuietMessage(status + ' : Authentification requise', 4000, 'red');  
			  
			} else {
				  
				$scope.displayQuietMessage(status + ' : ' + data, 4000, 'red');
			}
		});
	  };
	  
		$scope.generate = function() {
			console.log("Generate Pressed");

			//$("#overlayWait").css("display", "block");
			$http.post('/generate', dataFactory.getData()).success(function(data, status) {
				
				if (status == 201 || status == 200 ||  status == 0) {
					
					$http.get('/display').success(function(data, status) {
						
						if (status == 200 ||  status == 0) {
				
							window.open(data, "_blank");
						}
						
					}).error(function(data, status) {
						
						if (status == 500) {
							
							$scope.displayQuietMessage(status + ' : Erreur interne du serveur', 4000, 'red');
						}
					});
				}
				
				//$("#overlayWait").css("display", "none");
			}).error(function(data, status) {
				
				$scope.displayQuietMessage(status + 'Erreur interne du serveur', 4000, 'red');
				
				//$("#overlayWait").css("display", "none");
			});
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
				
				$scope.displayQuietMessage('Veuillez choisir une configuration', 4000, 'red');
				
			}else {
				
				var fileName = $scope.lastHighLighted+".json";
			
				$http.get('/data?config=' + $scope.lastHighLighted).success(function(data, status) {

					if (status == 200 || status == 0) {
					
						dataFactory.setData(data);
						console.log(dataFactory.getData());
						$scope.displayQuietMessage('Configuration chargée', 4000, 'blue'); // C'est bon \o/	
						$('#overlayLoad').css('display', 'none');
						$("#id"+$scope.lastHighLighted).removeAttr('selected');
						$scope.lastHighLighted = '';
					
					} else {
						
						$scope.displayQuietMessage(status + ' : Erreur du serveur', 4000, 'red');
					}
					
				}).error(function(data, status) {
					
					if (status == 404) {
						
						$scope.displayQuietMessage(status + ' : Configuration inconnue du serveur', 4000, 'red');
					
					} else if (status == 401) {
						
						$scope.displayQuietMessage(status + ' : Authentification requise', 4000, 'red');
					}
				});
			}	
		};		
  }]);
  
  
