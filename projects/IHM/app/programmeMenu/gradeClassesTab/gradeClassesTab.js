'use strict';

angular.module('myApp.gradeClassesTab', ['ngRoute'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/gradeClassesTab', {
      templateUrl: 'gradeClassesTab/gradeClassesTab.html',
      controller: 'gradeClassesTabCtrl'
    });
  }])

  .controller('gradeClassesTabCtrl', ['$scope', function($scope) {

    $scope.grades = [{name:'3eme', classes:['3eme A', '3eme B']}, {name:'4eme', classes:['4eme B']}]

    $scope.openTab = function(nom) {

      console.log("gradeClassesTab");


  }]);