'use strict';

angular.module('myApp.teacherMenu.attributionTab', ['ngRoute', 'myApp.dataFactory'])

.config(['$routeProvider', function ($routeProvider) {
  $routeProvider.when('/teacherMenu/attributionTab', {
    templateUrl: 'teacherMenu/attributionTab/attributionTab.html',
    controller: 'attributionTabCtrl'
  });
}
])

.controller('attributionTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {

  console.log("attributionTab::ctrl : attribution : ");
  printObjectCaracteristic(dataFactory.getAttributionArray(), ['$$hashKey']);

  $scope.teacherArray = dataFactory.getTeacherArray();
  $scope.subjectArray = dataFactory.getSubjectsArray().sort(function (a, b) {
      return a.name.localeCompare(b.name);
    });
  $scope.classeArray = dataFactory.getClassesArray();
  
  $scope.attributionArray = dataFactory.getAttributionArray();


  // $scope.currentFirstName = "";
  // $scope.currentLastName = "";
  // $scope.currentSubjectsSelected = [];
  //
  // $scope.addTeacher = function() {
  //   if ($scope.currentFirstName.trim() && $scope.currentLastName.trim() && $scope.currentSubjectsSelected.length > 0) {
  //     if (!dataFactory.addTeacher($scope.currentFirstName.trim(), $scope.currentLastName.trim(), $scope.currentSubjectsSelected)) {
  //       alert("Un enseignant avec ce nom et ce prénom existe déjà");
  //     }
  //     $scope.currentFirstName = "";
  //     $scope.currentLastName = "";
  //     $scope.currentSubectsSelected = [];
  //   }
  // };


}
]);
