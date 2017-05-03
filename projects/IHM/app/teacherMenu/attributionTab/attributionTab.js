'use strict';

angular.module('myApp.attributionTab', ['ngRoute', 'myApp.dataFactory'])

.config(['$routeProvider', function ($routeProvider) {
  $routeProvider.when('/teacherMenu/attributionTab', {
    templateUrl: 'teacherMenu/attributionTab/attributionTab.html',
    controller: 'attributionTabCtrl'
  });
}
])

.controller('attributionTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {

  $scope.subjectArray = dataFactory.getSubjectsArray().sort(function (a, b) {
    return a.name.localeCompare(b.name);
  });

  $scope.attributionArray = dataFactory.getAttributionArray();
  for (var i = 0, length = $scope.attributionArray.length; i < length; i++) {
    $scope.attributionArray[i].subjects.sort(function (a, b) {
      return a.subjectName.localeCompare(b.subjectName);
    });
  }

  $scope.currentTeacherSelected = "";
  $scope.teachersBySubject = [];
  for (i = 0, length = $scope.subjectArray.length; i < length; i++) {
    $scope.teachersBySubject.push(dataFactory.getTeacherArrayBySubject($scope.subjectArray[i].name));
  }

  $scope.getAccessToTeacherArrayBySubject = function (subjectName) {
    var index = dataFactory.findIndexByKeyValue($scope.subjectArray, ["name"], [subjectName]);
    return $scope.teachersBySubject[index]
  };
}
]);
