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
    $scope.roomTypesSelected = [];
    $scope.roomCapacity = 1;

    $scope.addRoom = function () {
      if ($scope.roomNameInputValue && $scope.roomNameInputValue.trim() && $scope.roomTypesSelected.length > 0) {
        if (!dataFactory.addRoom($scope.roomNameInputValue.trim(), $scope.roomTypesSelected, $scope.roomCapacity)) {
          alert("Une salle avec le même nom existe déjà");
        }
        $scope.roomNameInputValue = "";
        $scope.roomTypesSelected = [];
        $scope.roomCapacity = 1;
      }
    };

    $scope.removeRoom = function (rowToDelete) {
      dataFactory.removeRoom(rowToDelete);
    };

    $scope.keyPress = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        $scope.addRoom();
      }
    };
  }]);