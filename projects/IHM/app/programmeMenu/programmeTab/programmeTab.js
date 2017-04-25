'use strict';

angular.module('myApp.programmeTab', ['ngRoute', 'myApp.dataFactory'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/programmeTab', {
      templateUrl: 'programmeTab/programmeTab.html',
      controller: 'programmeTabCtrl'
    });
  }])

  .controller('programmeTabCtrl', ['$scope', 'dataFactory', function($scope, dataFactory) {
    $scope.subjectArray = dataFactory.getSubjectsArray();
    $scope.programmeArray = dataFactory.getProgrammeArray();

    $scope.$on('$destroy', function() {
      console.log('programmeTab::destroy : begin');
      printObjectCaracteristic($scope.programmeArray, ['$$hashKey']);
    });

  }]);