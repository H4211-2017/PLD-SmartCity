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
      //checking that the fields aren't empty
      if ($scope.inputValue && $scope.inputValue.trim() && $scope.roomTypeSelected !== "Empty") {
        if (!dataFactory.addSubject($scope.inputValue.trim(), $scope.roomTypeSelected)) {
          alert("Cette matière existe déjà");
        }
        $scope.inputValue = "";
        $scope.roomTypeSelected = "Empty";
      }
    };

    $scope.removeSubject = function (rowToDelete) {
      if (!dataFactory.removeSubject(rowToDelete, false)) {
        if (confirm("Cette action supprimera d'autres éléments\nVoulez-vous continuer?")) {
          dataFactory.removeSubject(rowToDelete, true);
        }
      }
    };

    $scope.pressKeyInput = function (key) {
      var ENTER_KEY = 13;
      if (key === ENTER_KEY) {
        $scope.addSubject();
      }
    };

    $scope.readOnly = true;
    $scope.toggleModification = function() {

        var toggables = $('#subjectTable .readOnlyToggable');
        if($scope.readOnly) {

            for(var i=0; i<toggables.length; i++)
            {
                toggables[i].removeAttr('readonly');
                $scope.readOnly = false;
            }

        }
        else {
            for(var i=0; i<toggables.length; i++)
            {
                toggables[i].attr('readonly', true);
                $scope.readOnly = true;
            }
        }
    };

  }]);