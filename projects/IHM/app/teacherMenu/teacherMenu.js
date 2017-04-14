'use strict';

angular.module('myApp.teacherMenu', [
  'ngRoute',
  'myApp.teacherMenu.teacherTab'
])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/teacherMenu', {
      templateUrl: 'teacherMenu/teacherMenu.html',
      controller: 'teacherMenuCtrl'
    });
  }])
  
  .controller('teacherMenuCtrl', [function() {
  
  }]);