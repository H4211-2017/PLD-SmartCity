'use strict';

angular.module('myApp.roomTab', ['ngRoute'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/roomTab', {
      templateUrl: 'roomTab/roomTab.html',
      controller: 'roomTabCtrl'
    });
  }])

  .controller('roomTabCtrl', [function () {

  }]);