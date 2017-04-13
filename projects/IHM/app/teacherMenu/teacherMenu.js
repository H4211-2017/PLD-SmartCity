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
    // $scope.selectedTemplate = {
    //   "path":"teacherMenu/teacherTab/teacherTab.html"
    // };
  }])
  
  .controller('teacherMenuCtrl', [function() {
  
  }]);