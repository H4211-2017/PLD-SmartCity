'use strict';

angular.module('myApp.roomTab', ['ngRoute', 'myApp.dataFactory'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/roomTab', {
      templateUrl: 'schoolInformationMenu/roomTab/roomTab.html',
      controller: 'roomTabCtrl'
    });
  }])

  .controller('roomTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {
    $scope.roomsArray = dataFactory.getRoomArray();
    $scope.roomTypesArray = dataFactory.getRoomTypeArray();

    $scope.addRoom = function () {
      $scope.roomNameInputValue = $scope.roomNameInputValue.trim();
      if ($scope.roomNameInputValue && $scope.roomTypes) {
        var isDuplicate = false;

        for (var i = 0; i < $scope.roomsArray.length; i++) {
          if ($scope.roomsArray[i].Name === $scope.roomNameInputValue) {
            isDuplicate = true;
            break;
          }
        }

        if (!isDuplicate) {
          $scope.roomsArray.unshift({
            Name: $scope.roomNameInputValue,
            RoomTypes: $scope.roomTypes
          });
        } else {
          alert("Une salle avec le même nom existe déjà")
        }
      }
      printObjectCaracteristic($scope.roomsArray);
    };

    $scope.removeRoom = function (rowToDelete) {

    };

    $scope.keyPress = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        addRoom();
      }
    }
  }]);