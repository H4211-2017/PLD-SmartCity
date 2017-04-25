'use strict';

angular.module('myApp.gradeClassesTab', ['ngRoute'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/gradeClassesTab', {
      templateUrl: 'gradeClassesTab/gradeClassesTab.html',
      controller: 'gradeClassesTabCtrl'
    });
  }])

  .controller('gradeClassesTabCtrl', ['$scope', function($scope) {

      console.log("gradeClassesTab");

  }]);