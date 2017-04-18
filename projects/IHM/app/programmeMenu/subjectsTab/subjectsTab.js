'use strict';

angular.module('myApp.subjectsTab', ['ngRoute'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/subjectsTab', {
      templateUrl: 'subjectsTab/subjectsTab.html',
      controller: 'subjectsTabCtrl'
    });
  }])

  .controller('subjectsTabCtrl', ['$scope', function ($scope) {

    $scope.openTab = function (nom) {
      $scope.page = nom;
      console.log("changement page " + $scope.page);
    };

    $scope.subjects = [];

    $scope.addSubject = function () {
      var isDuplicate = false;
      $scope.inputValue = $scope.inputValue.trim();

      //checking that the field isn't empty
      if ($scope.inputValue !== null && $scope.inputValue !== "") {
        //looking if the subjectalready exists, isn't case sensitive
        for (var i = 0; i < $scope.subjects.length; i++) {
          if ($scope.subjects[i].subjectName.toUpperCase() === $scope.inputValue.toUpperCase()) {
            isDuplicate = true;
            break;
          }
        }

        if (isDuplicate === false) {
          var roomType = $scope.inputValue;
          $scope.subjects.unshift(
            {
              subjectName: $scope.inputValue,
              roomType: $scope.subjectSelected
            });
          $scope.inputValue = "";
        }
        else {
          $scope.inputValue = "";
          alert("Cette matière existe déjà");
        }

      }
    };

    $scope.removeSubject = function (rowToDelete) {
      //We splice behaves weirdly on end of array, so we use pop instead.
      if (rowToDelete === $scope.subjects.length) {
        $scope.subjects.pop();
      }
      else {
        $scope.subjects.splice(rowToDelete, 1);
      }
    };
    $scope.pressKeyInput = function (key) {
      // If the user has pressed enter
      if (key === 13) {
        $scope.addSubject();
        return false;
      }
      else {
        return true;
      }
    };
  }]);