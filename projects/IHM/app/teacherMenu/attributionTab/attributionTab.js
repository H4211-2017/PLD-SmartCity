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


  $scope.teacherArray = dataFactory.getTeacherArray();
  $scope.subjectArray = dataFactory.getSubjectsArray().sort(function (a, b) {
      return a.name.localeCompare(b.name);
    });
  $scope.classeArray = dataFactory.getClassesArray();
  
  $scope.attributionArray = dataFactory.getAttributionArray()
  for(var i=0, length = $scope.attributionArray.length; i < length; i++){
	$scope.attributionArray[i].subjects.sort(function (a, b) {
      return a.subjectName.localeCompare(b.subjectName);
    });
  }
  
  

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
