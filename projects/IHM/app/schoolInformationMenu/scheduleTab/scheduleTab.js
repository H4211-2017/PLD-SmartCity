'use strict';

angular.module('myApp.scheduleTab', ['ngRoute'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/scheduleTab', {
      templateUrl: 'schoolInformationMenu/scheduleTab/scheduleTab.html',
      controller: 'scheduleTabCtrl'
    });
  }])

  .controller('scheduleTabCtrl', [function() {

    console.log("sceduleTab");
  }]);
