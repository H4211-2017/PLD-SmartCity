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
      if ($scope.inputValue && $scope.inputValue.trim()) {
        if (!dataFactory.addRoomType($scope.inputValue.trim())) {
          alert("Ce type de salle existe déjà");
        }
        $scope.inputValue = "";
      }
    };

    $scope.removeRoomType = function (rowToDelete) {
      if (!dataFactory.removeRoomType(rowToDelete, false)) {
        console.log("can't remove room type due to dependency");
      }
    };

    $scope.pressKeyInput = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        $scope.addRoomType();
      }
    };

  }]);

