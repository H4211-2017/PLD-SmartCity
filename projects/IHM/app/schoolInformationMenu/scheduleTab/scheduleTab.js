'use strict';

angular.module('myApp.scheduleTab', ['ngRoute', 'myApp.dataFactory'])

.config(['$routeProvider', function ($routeProvider) {
  $routeProvider.when('/scheduleTab', {
    templateUrl: 'schoolInformationMenu/scheduleTab/scheduleTab.html', controller: 'scheduleTabCtrl'
  });
}
])

.controller('scheduleTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {

  $scope.scheduleObject = dataFactory.getScheduleObject();
  $scope.hoursSlotSelected = [];
  $scope.headerSelected = [];
  createSelectedOnDataFactoryInformation($scope.hoursSlotSelected, $scope.headerSelected);

  $scope.hourSlotStart = "";
  $scope.hourSlotEnd = "";

  $scope.addHourSlot = function () {
    if ($scope.hourSlotStart.trim() && $scope.hourSlotEnd.trim()) {
      if (dataFactory.addHourSlot($scope.hourSlotStart, $scope.hourSlotEnd)) {
        for (var i = 0; i < $scope.hoursSlotSelected.length; i++) {
          $scope.hoursSlotSelected[i].push(true);
        }
      }
      $scope.hourSlotStart = "";
      $scope.hourSlotEnd = "";
    }
  };

  $scope.removeHourSlot = function (hourSlotIndex) {
    if (!dataFactory.removeHourSlot(hourSlotIndex, false)) {
      if (confirm("Cette action supprimera d'autres éléments\nVoulez-vous continuer?")) {
        dataFactory.removeHourSlot(hourSlotIndex, true);
      }
    }
  };

  $scope.removeAllHourSlot = function () {
    if (!dataFactory.removeAllHourSlot(false)) {
      if (confirm("Cette action supprimera d'autres éléments\nVoulez-vous continuer?")) {
        dataFactory.removeAllHourSlot(true);
      }
    }
  };

  $scope.changeDisableHour = function (dayIndex, hourSlotIndex) {
    if($scope.hoursSlotSelected[dayIndex][hourSlotIndex]) {
      dataFactory.removeDisableHour(dayIndex, hourSlotIndex);
      if (!$scope.headerSelected[dayIndex]) {
        var headerValue = true;
        for (var i = 0; i < $scope.hoursSlotSelected[dayIndex].length; i++) {
          if (!$scope.hoursSlotSelected[dayIndex][i]) {
            headerValue = false;
          }
        }
        $scope.headerSelected[dayIndex] = headerValue;
      }
    } else {
      dataFactory.addDisableHour(dayIndex, hourSlotIndex);
      if ($scope.headerSelected[dayIndex]) {
        $scope.headerSelected[dayIndex] = false;
      }
    }
  };

  $scope.changeHeaderDisableHour = function (dayIndex) {
    for (var i = 0; i < $scope.hoursSlotSelected[dayIndex].length; i++){
      $scope.hoursSlotSelected[dayIndex][i] = $scope.headerSelected[dayIndex];
      $scope.changeDisableHour(dayIndex, i);
    }
  };

  $scope.pressKeyInput = function (key) {
    var ENTER_KEY = 13;
    if (key === ENTER_KEY) {
      $scope.addHourSlot();
    }
  };

  function createSelectedOnDataFactoryInformation(hoursSlotSelectedArray, headerSelectedArray) {
    // clear arrays
    hoursSlotSelectedArray.splice(0, hoursSlotSelectedArray.length);
    headerSelectedArray.splice(0, headerSelectedArray.length);

    // create array structure
    var daysArray = dataFactory.getScheduleObject().days;
    var hoursSlotArray = dataFactory.getScheduleObject().hoursSlot;
    for (var i = 0; i < daysArray.length; i++) {
      hoursSlotSelectedArray.push([]);
      for (var j = 0; j < hoursSlotArray.length; j++) {
        hoursSlotSelectedArray[i].push(true);
      }
    }

    // update value to match disableHours
    var disableHoursArray = dataFactory.getScheduleObject().disableHours;
    for (i = 0; i < disableHoursArray.length; i++) {
      var indexDay = daysArray.indexOf(disableHoursArray[i].day);
      var indexHourSlot = dataFactory.findIndexByKeyValue(hoursSlotArray, ['start', 'end'],
          [disableHoursArray[i].hourSlot.start, disableHoursArray[i].hourSlot.end]);
      hoursSlotSelectedArray[indexDay][indexHourSlot] = false;
    }

    // create header information
    for (i = 0; i < daysArray.length; i++) {
      var headerSelected = true;
      for (j = 0; j < hoursSlotArray.length; j++) {
        if (!hoursSlotSelectedArray[i][j]) {
          headerSelected = false;
          break;
        }
      }
      headerSelectedArray.push(headerSelected);
    }
  }
}
]);


