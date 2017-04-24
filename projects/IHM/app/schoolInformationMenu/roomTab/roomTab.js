'use strict';

angular.module('myApp.roomTab', ['ngRoute', 'myApp.dataFactory'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/roomTab', {
      templateUrl: 'schoolInformationMenu/roomTab/roomTab.html',
      controller: 'roomTabCtrl'
    });
  }])

  .controller('roomTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {
    var formatRoomTypesArray = function(roomTypesArray) {
      var result = [];
      for (var i = 0; i < roomTypesArray.length; i++) {
        result.push({
          id: i,
          label: roomTypesArray[i]
        });
      }
      return result;
    };

    $scope.roomsArray = dataFactory.getRoomArray();
    $scope.roomTypesArray = formatRoomTypesArray(dataFactory.getRoomTypeArray());
    $scope.roomTypesSelected = [];
    $scope.roomCapacity = dataFactory.getRoomCapacity();

    printObjectCaracteristic($scope.roomTypesArray);

    $scope.addRoom = function () {

      if ($scope.roomNameInputValue && $scope.roomNameInputValue.trim() && $scope.roomTypesSelected.length > 0) {
        $scope.roomNameInputValue = $scope.roomNameInputValue.trim();

        var isDuplicate = false;
        for (var i = 0; i < $scope.roomsArray.length; i++) {
          if ($scope.roomsArray[i].name === $scope.roomNameInputValue) {
            isDuplicate = true;
            break;
          }
        }

        if (!isDuplicate) {
          $scope.roomsArray.unshift({
            name: $scope.roomNameInputValue,
            roomTypes: $scope.roomTypesSelected,
            roomCapacity: $scope.roomCapacity
          });
          $scope.roomNameInputValue = "";
          $scope.roomTypesSelected = [];
          $scope.roomCapacity = 1;
        } else {
          alert("Une salle avec le même nom existe déjà")
        }
      }
    };

    $scope.removeRoom = function (rowToDelete) {
      $scope.roomsArray.splice(rowToDelete, 1);
    };

    $scope.keyPress = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        $scope.addRoom();
      }
    };



  }]);