'use strict';

angular.module('myApp.subjectsTab', ['ngRoute', 'myApp.dataFactory'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/subjectsTab', {
      templateUrl: 'subjectsTab/subjectsTab.html',
      controller: 'subjectsTabCtrl'
    });
  }])

  .controller('subjectsTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {
    $scope.subjectsArray = dataFactory.getSubjectsArray();
    $scope.roomTypeArray = dataFactory.getRoomTypeArray();

    $scope.roomTypeSelected = "Empty";

    $scope.addSubject = function () {

      var isDuplicate = false;

      //checking that the fields aren't empty
      if ($scope.inputValue && $scope.inputValue.trim() && $scope.roomTypeSelected !== "Empty") {
        $scope.inputValue = $scope.inputValue.trim();

        //looking if the subject already exists (not case sensitive)
        for (var i = 0; i < $scope.subjectsArray.length; i++) {
          if ($scope.subjectsArray[i].subjectName.toUpperCase() === $scope.inputValue.toUpperCase()) {
            isDuplicate = true;
            break;
          }
        }

        if (isDuplicate === false) {
          $scope.subjectsArray.unshift(
            {
              subjectName: $scope.inputValue,
              roomType: $scope.roomTypeSelected
            });
          $scope.inputValue = "";
          $scope.roomTypeSelected = "Empty";
        }
        else {
          $scope.inputValue = "";
          $scope.roomTypeSelected = "Empty";
          alert("Cette matière existe déjà");
        }

      }
    };

    $scope.removeSubject = function (rowToDelete) {
      $scope.subjectsArray.splice(rowToDelete, 1);
    };

    $scope.pressKeyInput = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        $scope.addSubject();
        return false;
      }
      else {
        return true;
      }
    };
  }]);