'use strict';

angular.module('myApp.gradeClassesTab', ['ngRoute'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/gradeClassesTab', {
      templateUrl: 'gradeClassesTab/gradeClassesTab.html',
      controller: 'gradeClassesTabCtrl'
    });
  }])

  .controller('gradeClassesTabCtrl', ['$scope', function($scope) {

    const ENTER_KEY = 13;
    $scope.inputClass = [];
    $scope.inputGrade = null;

    $scope.grades = [{name:'3eme', classes:[{name:'3emeA', capacity:'32'},{name:'3emeA', capacity:'32'} ]},
      {name:'4eme', classes:[{name:'4emeA', capacity:'32'}]}];

    $scope.openTab = function(nom) {
      console.log("gradeClassesTab");
    };

    $scope.deleteGrade = function(grade){
      alert("vous allez supprimmez un element important")
      $scope.grades.splice(grade,1);
    };

    $scope.deleteClass = function(grade, classToDelete){
      $scope.grades[grade].classes.splice(classToDelete,1);
    };

    $scope.addGrade = function(){
      var input = $scope.inputGrade.trim();
      checkIfInputValidAndUnique(input, $scope.grades, function(isValid){
        if(isValid) {
          var newGrade = {name:input, classes:[]};
          $scope.grades.push(newGrade);
          input = null;
        }
      });
    };


    $scope.addClass = function(index){
      var input = $scope.inputClass[index].trim();
      checkIfInputValidAndUnique(input, $scope.grades[index].classes, function(isValid){
        if(isValid){
          var newClass = {name:input, capacity:32};
          $scope.grades[index].classes.push(newClass);
        }
      });
    };

    $scope.keyPressedClass = function(key, index){

      if(key === ENTER_KEY){
        $scope.addClass(index);
      }
    };

    $scope.keyPressedGrade = function(key){
      if(key === ENTER_KEY){
        $scope.addGrade();
      }
    };

    $scope.setClassesGrades = function(){
      var gradesFactory = [];
      var classesFactory = [];
      angular.forEach($scope.grades, function (grade) {
        gradesFactory.push(grade.name);
        angular.forEach(grade.classes, function(classLoop){
          var newClass ={yeear:grade.name, name:classLoop.name,studentsNumber:classLoop.capacity};
          classesFactory.push(newClass);
        });
      });
    };

    $scope.getClassesGrades = function(years, classes){
      var gradesFromFactory;
      angular.forEach(years, function(year){
        var newGrade = {name:year, classes:[]};
        angular.forEach(classes, function(classLoop){
          if(classLoop.year === year)
          {
            var newClass = {name:ClassLoop.name, capacity:classLoop.studentsNumber};
            newGrade.classes.push(newClass);
          }
        });
        gradesFromFactory.push(newGrade);
      });

      $scope.grades = gradesFromFactory;
    };
  }]);


function checkIfInputValidAndUnique(input, array, callback){
  if(input){
    var isUnique  = true;
    angular.forEach(array, function(element){

      if(element.name === input){
        isUnique = false;
        alert('Existe déjà');
      }
    });
    callback(isUnique);
  }
  else
  {
    callback(false);
  }
}

