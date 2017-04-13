/**
 * Created by nicolas on 13/04/17.
 */
'use strict';

angular.module('myApp.homeMenu', ['ngRoute'])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/homeMenu', {
      templateUrl: 'homeMenu/homeMenu.html',
      controller: 'homeMenuCtrl'
    });
  }])
  
  .controller('homeMenuCtrl', [function() {
  
  }]);