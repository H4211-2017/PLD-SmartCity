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

  $scope.teachersBySubject = [];
  for (i = 0, length = $scope.subjectArray.length; i < length; i++) {
    $scope.teachersBySubject.push(dataFactory.getTeacherArrayBySubject($scope.subjectArray[i].name));
  }

  $scope.teacherArray = dataFactory.getTeacherArray();
  $scope.currentTeacherSelectedArray = [];
  for (var i = 0, lengthAttribution = $scope.attributionArray.length; i < lengthAttribution; i++) {
    $scope.currentTeacherSelectedArray.push([]);
    for (var j = 0, lengthSubject = $scope.attributionArray[i].subjects.length; j < lengthSubject; j++) {
      var teacherFirstName = $scope.attributionArray[i].subjects[j].teacher.firstName;
      var teacherLastName = $scope.attributionArray[i].subjects[j].teacher.lastName;
      var indexTeacher = dataFactory.findIndexByKeyValue($scope.teacherArray, ['firstName', 'lastName'],
          [teacherFirstName, teacherLastName]);
      if (indexTeacher !== -1) {
        $scope.currentTeacherSelectedArray[i].push($scope.teacherArray[indexTeacher]);
      } else {
        $scope.currentTeacherSelectedArray[i].push({});
      }
    }
  }

  $scope.changedValue = function (currentTeacher, indexClass, indexSubject) {
    $scope.attributionArray[indexClass].subjects[indexSubject].teacher.firstName = currentTeacher.firstName;
    $scope.attributionArray[indexClass].subjects[indexSubject].teacher.lastName = currentTeacher.lastName;
  };

  $scope.getAccessToTeacherArrayBySubject = function (subjectName) {
    var index = dataFactory.findIndexByKeyValue($scope.subjectArray, ["name"], [subjectName]);
    return $scope.teachersBySubject[index];
  };
}
]);
