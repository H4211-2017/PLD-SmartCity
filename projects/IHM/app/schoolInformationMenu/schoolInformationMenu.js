'use strict';

angular.module('myApp.schoolInformationMenu', ['ngRoute'])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/schoolInformationMenu', {
      templateUrl: 'schoolInformationMenu/schoolInformationMenu.html',
      controller: 'schoolInformationMenuCtrl'
    });
  }])
  
  .controller('schoolInformationMenuCtrl', ['$scope', function($scope) {

      $scope.openTab = function(nom, id) {
          var lastButt = angular.element($scope.lastIdSelected);
          $scope.lastIdSelected = '#' + id;
          var butt = angular.element($scope.lastIdSelected);
          lastButt.attr("selected", false);
          butt.attr("selected", true);
          $scope.page = nom;
      };

      $scope.openTab('schoolInformationMenu/scheduleTab/scheduleTab.html', 'schHoraires');

  }]);