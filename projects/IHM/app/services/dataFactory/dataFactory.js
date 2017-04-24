angular.module('myApp.dataFactory', [])

  .factory('dataFactory', function () {
    var dataFactory = {};

    var data = {
      schoolInformation: {
        schedule: [],
        roomType: [],
        room: []
      },
      programme: {
        year: [],
        classes: [],
        subjects: [],
        programme: []
      },
      teacher: {
        teacherList: [],
        attribution: []
      }
    };

    // =============== SCHOOL INFORMATION ===============
    // GETTER
    dataFactory.getSchedule = function () {
      return data.schoolInformation['schedule'];
    }

    dataFactory.getRoomTypeArray = function () {
      return data.schoolInformation['roomType'];
    };

    dataFactory.getRoomArray = function () {
      return data.schoolInformation['room'];
    }

    // SETTER

    // =============== PROGRAMME ===============
    // GETTER
    dataFactory.getSubjectsArray = function () {
      return data.programme['subjects'];
    };

    // SETTER

    // =============== TEACHER ===============
    // GETTER

    // SETTER

    return dataFactory;
  });