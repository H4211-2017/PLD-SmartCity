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
        if (confirm("Cette action supprimera d'autres éléments\nVoulez-vous continuer?")) {
          dataFactory.removeRoomType(rowToDelete, true);
        }
      }
    };

    $scope.pressKeyInput = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        $scope.addRoomType();
      }
    };

      $scope.readOnly = true;
      $scope.toggleModification = function() {

          var readOnlyToggable = $('.readOnlyToggable');
          var toggables = $('#roomTypeTable').find(readOnlyToggable);

          if($scope.readOnly === true) {

              toggables.removeAttr('readonly');

              $scope.readOnly = false;
          }
          else {

              toggables.attr('readonly', true);

              $scope.readOnly = true;
          }
      };

  }]);

