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
    .controller('secondController',function($scope, $q, $timeout){
      //TODO:LANG
        $scope.myVar = "Ajoutez/ supprimmez des type de salle";
        $scope.rowNumber = 0;
        $scope.roomTypes = [];

        $scope.addRoomType = function(){
          var roomTypeInput = document.getElementById("roomTypeInput");
          var isDuplicate = false;
          if(roomTypeInput.value === null || roomTypeInput.value === ""){
          }
          else{
            angular.forEach($scope.roomTypes, function(roomType){
              if(roomType.name===roomTypeInput.value){
                isDuplicate = true;
                return;
              }
            });
            if(isDuplicate === false)
            {
              var roomType = roomTypeInput.value;
              $scope.roomTypes.unshift(roomType);
              $scope.rowNumber++;
              roomTypeInput.value = null;
            }
            else{
              alert("Ce type de salle existe déjà");
            }

          }
        };

        $scope.removeRoomType = function(row){
          var rowTodelete = row;
          console.log(rowTodelete);

          //We splice behaves weirdly on end of array, so we use pop instead.
          if(rowTodelete === $scope.roomTypes.length)
          {
            $scope.roomTypes.pop();
          }
          else
          {
            $scope.roomTypes.splice(rowTodelete,1);
          }
          $scope.rowNumber --;
      };
        $scope.pressKeyInput = function(key){
          // If the user has pressed enter
          if (key === 13) {
            $scope.addRoomType();
            return false;
          }
          else {
            return true;
          }
        };


    });

