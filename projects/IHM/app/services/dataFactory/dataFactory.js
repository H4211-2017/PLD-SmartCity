angular.module('myApp.dataFactory', [])

  .factory('dataFactory', function () {
    var dataFactory = {};

    var data = {
      SchoolInformation: {
        Schedule: [],
        RoomType: [],
        Room: []
      },
      Programme: {
        Year: [],
        Classes: [],
        Subjects: [],
        Programme: []
      },
      Teacher: {
        TeacherList: [],
        Attribution: []
      }
    };

    // =============== SCHOOL INFORMATION ===============
    // GETTER
    dataFactory.getSchedule = function () {
      return data.SchoolInformation['Schedule'];
    }

    dataFactory.getRoomTypeArray = function () {
      return data.SchoolInformation['RoomType'];
    };

    dataFactory.getRoomArray = function () {
      return data.SchoolInformation['Room'];
    }

    // SETTER

    // =============== PROGRAMME ===============
    // GETTER
    dataFactory.getSubjectsArray = function () {
      return data.Programme['Subjects'];
    };

    // SETTER

    // =============== TEACHER ===============
    // GETTER

    // SETTER

    return dataFactory;
  });