'use strict';

angular.module('myApp.teacherMenu', ['ngRoute', 'myApp.teacherTab', 'myApp.attributionTab', 'myApp.dataFactory'])

.config(['$routeProvider', function ($routeProvider) {
  $routeProvider.when('/teacherMenu', {
    templateUrl: 'teacherMenu/teacherMenu.html',
    controller: 'teacherMenuCtrl'
  });
}
])

.controller('teacherMenuCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {

  $scope.openTab = function (nom, id) {
    var lastButt = angular.element($scope.lastIdSelected);
    $scope.lastIdSelected = '#' + id;
    var butt = angular.element($scope.lastIdSelected);
    lastButt.attr("selected", false);
    butt.attr("selected", true);
    $scope.page = nom;
  };

  $scope.openTab('teacherMenu/teacherTab/teacherTab.html', 'tchEnseignants');

  $scope.years = dataFactory.getYearArray();
  $scope.subjects = dataFactory.getSubjectsArray();
  $scope.classes = dataFactory.getClassesArray();
  $scope.teachers = dataFactory.getTeacherArray();

}
]);