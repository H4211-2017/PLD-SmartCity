'use strict';

angular.module('myApp.gradeClassesTab', ['ngRoute'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/gradeClassesTab', {
      templateUrl: 'gradeClassesTab/gradeClassesTab.html',
      controller: 'gradeClassesTabCtrl'
    });
  }])

  .controller('gradeClassesTabCtrl', ['$scope', function($scope) {

    $scope.openTab = function(nom) {

      $scope.page = nom;
      console.log("changement page "+$scope.page);
    };
  }]);