'use strict';

angular.module('myApp.roomTab', ['ngRoute'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/roomTab', {
      templateUrl: 'schoolInformationMenu/roomTab/roomTab.html',
      controller: 'roomTabCtrl'
    });
  }])

  .controller('roomTabCtrl', ['$scope', function ($scope) {
      $scope.rooms = [{
          roomName: "B213",
          roomType: "TP physiquess"
      }];

      $scope.roomTypes = [
              {
                  roomType: "TP physique"
              },
              {
                  roomType: "TP chimie"
              },
              {
                  roomType: "salle normale"
              }
          ];

  }]);