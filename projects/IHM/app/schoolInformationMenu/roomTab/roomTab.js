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
    $scope.roomCapacity = 0;

    $scope.addRoom = function () {
      if ($scope.roomNameInputValue && $scope.roomNameInputValue.trim() && $scope.roomTypesSelected.length > 0) {
        if (!dataFactory.addRoom($scope.roomNameInputValue.trim(), $scope.roomTypesSelected, $scope.roomCapacity)) {
          alert("Une salle avec le même nom existe déjà");
        }
        $scope.roomNameInputValue = "";
        /*$scope.roomTypesSelected = [];
        $scope.roomCapacity = 1;*/
      }
      console.log("roomTab::addRoom : roomsArray");
      printObjectCaracteristic($scope.roomsArray, ['$$hashKey']);
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

      $scope.readOnly = true;
      $scope.toggleModification = function() {

          var readOnlyToggable = $('.readOnlyToggable');
          var toNumber = $('.number');
          var toggables = $('#roomTab').find(readOnlyToggable);
          var numbers = $('#roomTab').find(toNumber);

          if($scope.readOnly === true) {

              toggables.removeAttr('readonly');
              numbers.attr('type', 'number');

              $scope.readOnly = false;
          }
          else {

              toggables.attr('readonly', true);
              numbers.attr('type', 'text');

              $scope.readOnly = true;
          }
      };

  }]);