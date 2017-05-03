'use strict';

angular.module('myApp.teacherMenu.teacherTab', ['ngRoute', 'myApp.dataFactory'])

.config(['$routeProvider', function ($routeProvider) {
  $routeProvider.when('/teacherMenu/teacherTab', {
    templateUrl: 'teacherMenu/teacherTab/teacherTab.html',
    controller: 'teacherTabCtrl'
  });
}
])

.controller('teacherTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {

  $scope.teachersArray = dataFactory.getTeacherArray();
  $scope.subjectsArray = dataFactory.getSubjectsArray();

  $scope.currentFirstName = "";
  $scope.currentLastName = "";
  $scope.currentSubjectsSelected = [];

  $scope.addTeacher = function() {
    if ($scope.currentFirstName.trim() && $scope.currentLastName.trim() && $scope.currentSubjectsSelected.length > 0) {
      if (!dataFactory.addTeacher($scope.currentFirstName.trim(), $scope.currentLastName.trim(), $scope.currentSubjectsSelected)) {
        alert("Un enseignant avec ce nom et ce prénom existe déjà");
      }
      $scope.currentFirstName = "";
      $scope.currentLastName = "";
      $scope.currentSubectsSelected = [];
    }
  };

  $scope.keyPressed = function(key){
    var ENTER_KEY = 13;
    if(key === ENTER_KEY){
      $scope.addTeacher();
    }
  };

  $scope.closeOverlay = function () {
    $('#addTeacherOverlay').css('width', '0%');
  };

  $scope.openAddTeacher = function () {
    $('#addTeacherOverlay').css('width', 'inherit');
  };
}
]);
