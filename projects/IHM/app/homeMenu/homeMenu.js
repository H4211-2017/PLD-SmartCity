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
	  
	  // Setup the file listener.
		var loadButton = $('#fileUploader');
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
	  //
	  $scope.save = function() {
			console.log("Save Pressed")
	  };
	  
	  $scope.load = function() {
			console.log("Load Pressed")
	  };
  }]);
  
  



