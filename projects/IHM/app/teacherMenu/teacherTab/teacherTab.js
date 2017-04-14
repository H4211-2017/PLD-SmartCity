'use strict';
  
  angular.module('myApp.teacherMenu.teacherTab', ['ngRoute'])
    
    .config(['$routeProvider', function ($routeProvider) {
      $routeProvider.when('/teacherMenu/teacherTab', {
        templateUrl: 'teacherMenu/teacherTab/teacherTab.html',
        controller: 'teacherTabCtrl'
      });
    }])
    
    .controller('teacherTabCtrl', ['$scope', function ($scope) {
      $scope.loadXML = function () {
        $scope.teachers = jsonObjectEntry.toString();
        $scope.cours = "something";
      };
    }]);
