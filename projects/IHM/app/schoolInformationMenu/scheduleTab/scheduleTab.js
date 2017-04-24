'use strict';

angular.module('myApp.scheduleTab', ['ngRoute', 'myApp.dataFactory'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/scheduleTab', {
      templateUrl: 'schoolInformationMenu/scheduleTab/scheduleTab.html',
      controller: 'scheduleTabCtrl'
    });
  }])

  .controller('scheduleTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {

    $scope.scheduleArray = dataFactory.getSchedule();

    $scope.addHourSlot = function (row) {
      $scope.scheduleArray[row].hours.push({
        start: "",
        end: ""
      });
    }

    $scope.copyFirstLineHourSlot = function() {
      for (var i = 1; i < $scope.scheduleArray.length; i++) {
        $scope.scheduleArray[i].hours = [];
        for (var j = 0; j < $scope.scheduleArray[0].hours.length; j++) {
          $scope.scheduleArray[i].hours.push({
            start: $scope.scheduleArray[0].hours[j].start,
            end: $scope.scheduleArray[0].hours[j].end
          });
        }
      }
    }
  }]);
