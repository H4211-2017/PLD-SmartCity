'use strict';

angular.module('myApp.gradeClassesTab', ['ngRoute','myApp.dataFactory'])

  .config(['$routeProvider', function($routeProvider) {
    $routeProvider.when('/gradeClassesTab', {
      templateUrl: 'gradeClassesTab/gradeClassesTab.html',
      controller: 'gradeClassesTabCtrl'
    });
  }])

  .controller('gradeClassesTabCtrl', ['$scope','dataFactory', function($scope, dataFactory) {

    const ENTER_KEY = 13;

    $scope.grades = []
    $scope.inputClass = [""];
    $scope.inputGrade = "";

    $scope.deleteGrade = function(grade){
      if (!dataFactory.removeYear(grade, false)) {
        if (confirm("Cette action supprimera d'autres éléments\nVoulez-vous continuer?")) {
          dataFactory.removeYear(grade, true);
        }
      }
      $scope.updateDisplay();
    };

    $scope.deleteClass = function(grade, classToDelete){
      var indexClass = dataFactory.getClassesArray().indexOf($scope.grades[grade].classes[classToDelete]);
      if (!dataFactory.removeClass(indexClass, false)) {
        if (confirm("Cette action supprimera d'autres éléments\nVoulez-vous continuer?")) {
          dataFactory.removeClass(indexClass, true);
        }
      }
      $scope.updateDisplay();
    };

    $scope.addGrade = function(){
      var inputYear = $scope.inputGrade.trim();
      if (inputYear) {
        if (dataFactory.addYear(inputYear)) {
          $scope.updateDisplay();
          $scope.inputGrade = "";
          $scope.inputClass[$scope.grades.length + 1]="";
        } else {
          alert("Une année avec ce nom existe déjà");
          $scope.inputGrade = "";
        }
      }
    };

    $scope.addClass = function(index){
      var inputClass = $scope.inputClass[index].trim();
      if (inputClass) {
        if (dataFactory.addClass(inputClass, $scope.grades[index].name, 32)) {
          $scope.updateDisplay();
          $scope.inputClass[index] = "";
        } else {
          alert("Une classe avec ce nom existe déjà");
          $scope.inputClass[index] = "";
        }
      }
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
