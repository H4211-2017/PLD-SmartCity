'use strict';

angular.module('myApp.gradeClassesTab', ['ngRoute','myApp.dataFactory'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/gradeClassesTab', {
      templateUrl: 'gradeClassesTab/gradeClassesTab.html',
      controller: 'gradeClassesTabCtrl'
    });
  }])

  .controller('gradeClassesTabCtrl', ['$scope','dataFactory', function($scope, dataFactory) {


    $scope.grades = []
    // dataFactory.addYear("3eme");
    // dataFactory.addYear("4eme");
    // dataFactory.addClass("A","3eme",32);



    const ENTER_KEY = 13;
    $scope.inputClass = [""];
    $scope.inputGrade = null;



    // $scope.grades = [{name:'3eme', classes:[{name:'3emeA', capacity:'32'},{name:'3emeA', capacity:'32'} ]},
    //   {name:'4eme', classes:[{name:'4emeA', capacity:'32'}]}];

    $scope.openTab = function(nom) {
      console.log("gradeClassesTab");
    };

    $scope.deleteGrade = function(grade){
      alert("vous allez supprimmez un element important")
      dataFactory.removeYear(grade);
      $scope.updateDisplay();
    };

    $scope.deleteClass = function(grade, classToDelete){
      var indexClass = dataFactory.getClassesArray().indexOf($scope.grades[grade].classes[classToDelete]);
      dataFactory.removeClass(indexClass);
      $scope.updateDisplay();
      //$scope.grades[grade].classes.splice(classToDelete,1);
    };

    $scope.addGrade = function(){
      var input = $scope.inputGrade.trim();
      checkIfInputValidAndUnique(input, $scope.grades, function(isValid){
        if(isValid) {
          dataFactory.addYear(input);
          $scope.updateDisplay();
          $scope.inputGrade = "";
          $scope.inputClass[$scope.grades.length + 1]="";
        }
      });
    };


    $scope.addClass = function(index){
      var input = $scope.inputClass[index].trim();

      checkIfInputValidAndUnique(input, $scope.grades[index].classes, function(isValid){
        if(isValid){
          //$scope.grades[index].classes.push(newClass);
          console.log(input, $scope.grades[index].name,32)
          dataFactory.addClass(input, $scope.grades[index].name,32);
          $scope.updateDisplay();
          $scope.inputClass[index] = "";
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
/*
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
    */

    //this function takes the data from the data factory and transforms them, to translate the hierarchical presentation
    //so that a class is a child of the year it belongs to.
    $scope.getClassesGrades = function(years, classes){
      var gradesFromFactory = [];
      angular.forEach(years, function(year){
        var newGrade = {name:year, classes:[]};
        angular.forEach(classes, function(classLoop){
          if(classLoop.year === year)
          {
            var newClass = {name:classLoop.name, capacity:classLoop.studentsNumber};
            newGrade.classes.push(newClass);
          }
        });
        gradesFromFactory.push(newGrade);
      });
      return gradesFromFactory;
    };

    //this function gets the datas from dataFactory to update the $scope.grades variable according to what datafactory has
    $scope.updateDisplay = function(){
      var factoryGrades = dataFactory.getYearArray();
      var factoryClasses = dataFactory.getClassesArray();
      $scope.grades = $scope.getClassesGrades(factoryGrades, factoryClasses);
    };


    $scope.updateDisplay();

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

