/**
 * Created by nicolas on 13/04/17.
 */
'use strict';


var config;//TODO initialise higher and make it read config.json
//TODO AJAX CALL TO INITIALISE config

angular.module('myApp.homeMenu', ['ngRoute'])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/homeMenu', {
      templateUrl: 'homeMenu/homeMenu.html',
      controller: 'homeMenuCtrl'
    });
  }])
  
  .controller('homeMenuCtrl', ["$scope", function($scope) {
	  

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
	  
	  $scope.load = function() {
			console.log("Load Pressed")//Test for development
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
					config = JSON.parse(finished_event.target.result);
					console.log(config.stringify());
					//TODO AJAX CALL TO SAVE INSIDE config.json.
				};
				reader.readAsText(file);
			});
			//simulate a click
			newElem.click();
			//remove it
			setTimeout(function() {
				document.body.removeChild(newElem);
			}, 0);			
	  };
	  
	  $scope.generate = function() {
		  console.log("Generate Pressed");//Test for development
	  };
	  
	  
  }]);
  
  