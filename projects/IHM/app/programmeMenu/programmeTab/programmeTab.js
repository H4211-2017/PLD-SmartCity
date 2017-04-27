'use strict';

angular.module('myApp.programmeTab', ['ngRoute', 'myApp.dataFactory'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/programmeTab', {
      templateUrl: 'programmeTab/programmeTab.html',
      controller: 'programmeTabCtrl'
    });
  }])

  .controller('programmeTabCtrl', ['$scope', 'dataFactory', function($scope, dataFactory) {
    $scope.subjectArray = dataFactory.getSubjectsArray().sort(function(a, b) {
      return a.name.localeCompare(b.name);
    });
    $scope.programmeArray = dataFactory.getProgrammeArray();
    sortSubject($scope.programmeArray);
    printObjectCaracteristic($scope.programmeArray, ['$$hashKey']);

    function sortSubject(programmeArray) {
        for (var i = 0, length = programmeArray.length; i < length; i++) {
          programmeArray[i].programme.sort(function (a, b) {
            return a.subject.localeCompare(b.subject);
          });
        }
    }

  }]);