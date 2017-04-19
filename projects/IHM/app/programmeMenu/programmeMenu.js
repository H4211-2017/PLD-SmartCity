'use strict';

angular.module('myApp.programmeMenu', ['ngRoute'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/programmeMenu', {
      templateUrl: 'programmeMenu/programmeMenu.html',
      controller: 'programmeMenuCtrl'
    });
  }])

  .controller('programmeMenuCtrl', ['$scope', function ($scope) {

    $scope.controllerName = "programmeMenuCtrl";
    $scope.openTab = function (nom, id) {
      var lastButt = angular.element($scope.lastIdSelected);
      $scope.lastIdSelected = '#' + id;
      var butt = angular.element($scope.lastIdSelected);
      lastButt.attr("selected", false);
      butt.attr("selected", true);
      $scope.page = nom;
    };

    $scope.openTab('programmeMenu/gradeClassesTab/gradeClassesTab.html', 'programmeGradeClasses');

  }]);