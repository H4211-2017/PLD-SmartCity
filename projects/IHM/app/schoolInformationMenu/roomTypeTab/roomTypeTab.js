'use strict';

angular.module('myApp.roomTypeTab', ['ngRoute'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/roomTypeTab', {
      templateUrl: 'schoolInformationMenu/roomTypeTab/roomTypeTab.html',
      controller: 'roomTypeTabCtrl'
    });
  }])

  .controller('roomTypeTabCtrl', [function () {
    console.log("room type table");
  }])
  
  .controller('secondController', function ($scope, $q, $timeout) {
    $scope.roomTypes = [];

    $scope.addRoomType = function () {
      var isDuplicate = false;
      $scope.inputValue = $scope.inputValue.trim();

      if ($scope.inputValue !== null && $scope.inputValue !== "") {
        for (var i = 0; i < $scope.roomTypes.length; i++) {
          if ($scope.roomTypes[i] === $scope.inputValue) {
            isDuplicate = true;
            break;
          }
        }

        if (isDuplicate === false) {
          var roomType = $scope.inputValue;
          $scope.roomTypes.unshift(roomType);
          roomTypeInput.value = null;
        }
        else {
          $scope.inputValue = "";
          alert("Ce type de salle existe déjà");
        }

      }
    };

    $scope.removeRoomType = function (row) {
      var rowTodelete = row;

      //Splice behaves weirdly on end of array, so we use pop instead.
      if (rowTodelete === $scope.roomTypes.length) {
        $scope.roomTypes.pop();
      }
      else {
        $scope.roomTypes.splice(rowTodelete, 1);
      }
    };
    $scope.pressKeyInput = function (key) {
      // If the user has pressed enter
      if (key === 13) {
        $scope.addRoomType();
        return false;
      }
      else {
        return true;
      }
    };

  });

