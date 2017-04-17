/**
 * Created by nicolas on 13/04/17.
 */
'use strict';
// Check for the various File API support.
if (window.File && window.FileReader && window.FileList && window.Blob) {
  console.log("File API support enabled on this browser")
} else {
  alert('The File APIs are not fully supported in this browser.');
}
//
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
			
			
			// Function to download data to a file
		/*
		//TODO test this stub to support IE10
		var a = document.createElement("a"),
			file = new Blob([data], {type: type});
		if (window.navigator.msSaveOrOpenBlob) // IE10+
			window.navigator.msSaveOrOpenBlob(file, filename);
		*/
		
	  };
	  
	  $scope.load = function() {
			console.log("Load Pressed")
			//simulate an input of type file
			var newElem = document.createElement('input');
			newElem.id = 'fileSelecter';
			newElem.setAttribute("type", "file")
			//add it
			document.body.appendChild(newElem);
			//set interaction
			var loadButton = $('#fileSelecter');
			console.log(loadButton)
			loadButton.change(function (evt) {
				console.log("fichier detecté");
				var file = evt.target.files[0];
				var reader = new FileReader();
				
				//defining callback
				reader.onload = function (finished_event) {
					console.log(finished_event.target.result)
					//TODO do things with caught file on the server
				};
				reader.readAsText(file)
			});
			//simulate a click
			newElem.click()
			//remove it
			setTimeout(function() {
				document.body.removeChild(newElem);
			}, 0);
			
			
	  };
  }]);
  
  