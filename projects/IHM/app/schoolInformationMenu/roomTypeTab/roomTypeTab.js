'use strict';

angular.module('myApp.roomTypeTab', ['ngRoute', 'myApp.dataFactory'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/roomTypeTab', {
      templateUrl: 'schoolInformationMenu/roomTypeTab/roomTypeTab.html',
      controller: 'roomTypeTabCtrl'
    });
  }])
  
  .controller('roomTypeTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {
    $scope.roomTypesArray = dataFactory.getRoomTypeArray();

    $scope.addRoomType = function () {
      var isDuplicate = false;
      $scope.inputValue = $scope.inputValue.trim();

      //checking that the field isn't empty
      if ($scope.inputValue !== null && $scope.inputValue !== "") {
        //looking if the type of room already exists, isn't case sensitive
        for (var i = 0; i < $scope.roomTypesArray.length; i++) {
          if ($scope.roomTypesArray[i].toUpperCase() === $scope.inputValue.toUpperCase()) {
            isDuplicate = true;
            break;
          }
        }

        if (isDuplicate === false) {
          var roomType = $scope.inputValue;
          $scope.roomTypesArray.unshift(roomType);

          $scope.inputValue = null;
        }
        else {
          $scope.inputValue = "";
          alert("Ce type de salle existe déjà");
        }

      }
    };

    $scope.removeRoomType = function (rowToDelete) {
      //Splice behaves weirdly on end of array, so we use pop instead.
      if (rowToDelete === $scope.roomTypesArray.length) {
        $scope.roomTypesArray.pop();
      }
      else {
        $scope.roomTypesArray.splice(rowToDelete, 1);
      }
    };

    $scope.pressKeyInput = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        $scope.addRoomType();
        return false;
      }
      else {
        return true;
      }
    };

  }]);

