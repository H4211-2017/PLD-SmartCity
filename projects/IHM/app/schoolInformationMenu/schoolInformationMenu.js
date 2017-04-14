'use strict';

angular.module('myApp.schoolInformationMenu', ['ngRoute'])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/schoolInformationMenu', {
      templateUrl: 'schoolInformationMenu/schoolInformationMenu.html',
      controller: 'schoolInformationMenuCtrl'
    });
  }])
  
  .controller('schoolInformationMenuCtrl', ['$scope', function($scope) {

      $scope.openTab = function(nom) {

        $scope.page = nom;
        console.log("changement page "+$scope.page);
      };
  }]);