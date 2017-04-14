'use strict';

angular.module('myApp.roomTypeTab', ['ngRoute'])

  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/roomTypeTab', {
      templateUrl: 'schoolInformationMenu/roomTypeTab/roomTypeTab.html',
      controller: 'roomTypeTabCtrl'
    });
  }])

    .controller('roomTypeTabCtrl', [function() {
        console.log("room type table");
    }])
    .controller('secondController',function($scope){
      //TODO:LANG
        $scope.myVar = "Entrez vos matière";
        $scope.rowNumber = 0;
        $scope.subjects = [];

        $scope.addSubject = function(){
          var subjectInput = document.getElementById("subjectInput");

          if(subjectInput.value === null || subjectInput.value === ""){
          }
          else{
            var subject = {name:subjectInput.value,number:$scope.rowNumber}
            $scope.subjects.unshift(subject);
            $scope.rowNumber++;
            subjectInput.value = null;
          }
        };

        $scope.removeSubject = function(row){
          var rowTodelete = $scope.rowNumber - row -1;
          console.log(rowTodelete);
          $scope.subjects.splice(rowTodelete,1);
          $scope.rowNumber --;
      };
        $scope.pressKeyInput = function(key){
          // If the user has pressed enter
          if (key === 13) {
            $scope.addSubject();
            document.getElementById("subjectInput").value ='';
            return false;
          }
          else {
            return true;
          }
        };
    });

