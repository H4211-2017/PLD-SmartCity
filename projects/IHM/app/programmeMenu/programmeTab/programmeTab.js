'use strict';

angular.module('myApp.programmeTab', ['ngRoute'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/programmeTab', {
      templateUrl: 'programmeTab/programmeTab.html',
      controller: 'programmeTabCtrl'
    });
  }])

  .controller('programmeTabCtrl', ['$scope', function($scope) {

    $scope.openTab = function(nom) {

      $scope.page = nom;
      console.log("changement page "+$scope.page);
    };
  }]);