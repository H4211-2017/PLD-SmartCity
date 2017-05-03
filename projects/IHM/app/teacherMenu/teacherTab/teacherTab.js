'use strict';

angular.module('myApp.teacherTab', ['ngRoute', 'myApp.dataFactory'])

.config(['$routeProvider', function ($routeProvider) {
  $routeProvider.when('/teacherMenu/teacherTab', {
    templateUrl: 'teacherMenu/teacherTab/teacherTab.html',
    controller: 'teacherTabCtrl'
  });
}
])

.controller('teacherTabCtrl', ['$scope', 'dataFactory', function ($scope, dataFactory) {

  $scope.teachersArray = dataFactory.getTeacherArray();
  $scope.subjectsArray = dataFactory.getSubjectsArray();
  $scope.schedule = dataFactory.getScheduleObject();
  $scope.overlayIsReadOnly = false;

  dataFactory.createScheduleArrayBool();
  $scope.currentFirstName = "";
  $scope.currentLastName = "";
  $scope.currentSubjectsSelected = [];
  $scope.currentUnavailabilities = [];
  $scope.unavailabilityInput = dataFactory.getScheduleArrayBool();

  $scope.teacherFocused = {};
  $scope.availabilityTeacherFocused = [];

  /**
   * this function is used so we can have a boolean 2-D array of the availability of a teacher for each time slot
   */
  $scope.setAvailabilityTeacherFocused = function () {
    $scope.availabilityTeacherFocused = dataFactory.getScheduleArrayBool();
    dataFactory.resetScheduleArrayBool(true, function () {
      angular.forEach($scope.teacherFocused.unavailability, function (day) {

        angular.forEach(day.hoursSlot, function (slot) {

          $scope.availabilityTeacherFocused[$scope.schedule.days.indexOf(day.day)][slot] = false;

        });
      });
    });
  };

  /**
   * From the inpt in the check boxes, we create the variables that are used by datafactory.
   * We then close the overlay.
   */
  $scope.setCurrentUnavailability = function(){
    $scope.currentUnavailabilities = [];
    console.log("teacherTab l-53");
    printObjectCaracteristic($scope.unavailabilityInput);
    for(var i = 0;i < $scope.schedule.days.length; i++)
    {
      var isEmpty = true;
      var newUnavailability = {};
      newUnavailability = {
        day:$scope.schedule.days[i],
        hoursSlot : []
      };
      for(var j = 0;j < $scope.schedule.hoursSlot.length; j++){
        if($scope.unavailabilityInput[i][j] === true)
        {
          newUnavailability.hoursSlot.push(j);
          isEmpty = false;
        }
      }
      if(!isEmpty)
      {
        $scope.currentUnavailabilities.push(newUnavailability);
      }
    }
    $scope.closeOverlay();
  };

  /**
   * Sends the paramters to create a new teacher to dataFactory
   */
  $scope.addTeacher = function () {
    if ($scope.currentFirstName.trim() && $scope.currentLastName.trim() && $scope.currentSubjectsSelected.length > 0) {
      if (!dataFactory.addTeacher($scope.currentFirstName.trim(), $scope.currentLastName.trim(),
              $scope.currentSubjectsSelected, $scope.currentUnavailabilities)) {
        alert("Un enseignant avec ce nom et ce prénom existe déjà");
      }
      $scope.currentFirstName = "";
      $scope.currentLastName = "";
      $scope.currentSubectsSelected = [];
    }
  };

  /**
   * Removing a teacher from data factory
   * @param indexTeacherToRemove
   */
  $scope.removeTeacher = function (indexTeacherToRemove) {
    if (!dataFactory.removeTeacher(indexTeacherToRemove, false)) {
      if (confirm("Cette action supprimera d'autres éléments\nVoulez-vous continuer?")) {
        dataFactory.removeTeacher(indexTeacherToRemove, true);
      }
    }
  };

  /**Checking if ENter was pressed, if it was we add a teacher
   *
   * @param key
   */
  $scope.keyPressed = function (key) {
    var ENTER_KEY = 13;
    if (key === ENTER_KEY) {
      $scope.addTeacher();
    }
  };

  $scope.closeOverlay = function () {
    dataFactory.resetScheduleArrayBool(false, function () {
    });
    $('#addTeacherOverlay').css('width', '0%');
  };

  $scope.openOverlay = function () {
    console.log("teacher tab l-124");
    printObjectCaracteristic($scope.unavailabilityInput)
    $('#addTeacherOverlay').css('width', 'inherit');
  };

  $scope.readOnly = true;
  $scope.toggleModification = function () {

    var readOnlyToggable = $('.readOnlyToggable');
    var toggables = $('#teacherTab').find(readOnlyToggable);

    if ($scope.readOnly === true) {

      toggables.removeAttr('readonly');

      $scope.readOnly = false;
    }
    else {

      toggables.attr('readonly', true);

      $scope.readOnly = true;
    }
  };

  $scope.displayAvailabilityWrite = function () {
    dataFactory.resetScheduleArrayBool(false, function () {
      $scope.overlayIsReadOnly = false;
      $scope.openOverlay();
    });
  };

  $scope.displayAvailabilityRead = function (teacher) {
    $scope.teacherFocused = teacher
    $scope.overlayIsReadOnly = true;
    $scope.setAvailabilityTeacherFocused();
    $scope.openOverlay();
  };

  $scope.returnClassOnAvailability = function (boolean) {
    if (boolean) {
      return "available"; //{'background-color':'green'};
    }
    else {
      return "unavailable";//{'background-color':'red'};
    }
  };
}
]);
