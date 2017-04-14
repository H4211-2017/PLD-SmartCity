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
        $scope.myVar = "Ajoutez/ supprimmez des type de salle";
        $scope.rowNumber = 0;
        $scope.roomTypes = [];

        $scope.addRoomType = function(){
          var roomTypeInput = document.getElementById("roomTypeInput");

          if(roomTypeInput.value === null || roomTypeInput.value === ""){
          }
          else{
            var roomType = {name:roomTypeInput.value,number:$scope.rowNumber}
            $scope.roomTypes.unshift(roomType);
            $scope.rowNumber++;
            roomTypeInput.value = null;
          }
        };

        $scope.removeRoomType = function(row){
          var rowTodelete = $scope.rowNumber - row -1;
          console.log(rowTodelete);
          $scope.roomTypes.splice(rowTodelete,1);
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

