'use strict';

angular.module('myApp.teacherMenu', [
  'ngRoute',
  'myApp.teacherMenu.teacherTab'
])
  
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/teacherMenu', {
      templateUrl: 'teacherMenu/teacherMenu.html',
      controller: 'teacherMenuCtrl'
    });
  }])
  
  .controller('teacherMenuCtrl', ['$scope', function($scope) {

      $scope.openTab = function(nom, id) {
          var lastButt = angular.element($scope.lastIdSelected);
          $scope.lastIdSelected = '#' + id;
          var butt = angular.element($scope.lastIdSelected);
          lastButt.attr("selected", false);
          butt.attr("selected", true);
          $scope.page = nom;
      };

      $scope.openTab('teacherMenu/teacherTab/teacherTab.html', 'tchEnseignants');

  }]);