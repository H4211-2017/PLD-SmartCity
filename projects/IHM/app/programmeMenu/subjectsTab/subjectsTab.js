'use strict';

angular.module('myApp.subjectsTab', ['ngRoute'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/subjectsTab', {
      templateUrl: 'subjectsTab/subjectsTab.html',
      controller: 'subjectsTabCtrl'
    });
  }])

  .controller('subjectsTabCtrl', ['$scope', function($scope) {

    $scope.openTab = function(nom) {

      $scope.page = nom;
      console.log("changement page "+$scope.page);
    };
  }]);