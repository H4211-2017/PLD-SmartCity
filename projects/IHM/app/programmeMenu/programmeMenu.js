'use strict';

angular.module('myApp.programmeMenu', ['ngRoute'])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/programmeMenu', {
      templateUrl: 'programmeMenu/programmeMenu.html',
      controller: 'programmeMenuCtrl'
    });
  }])
  
  .controller('programmeMenuCtrl', [function() {
  
  }]);