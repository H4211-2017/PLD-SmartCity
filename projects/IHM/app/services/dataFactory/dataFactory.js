angular.module('myApp.dataFactory', [])

  .factory('dataFactory', function () {
    var dataFactory = {};

    var data = {
      SchoolInformation: {
        Schedule: [],
        roomType: [],
		roomCapacity: 1,
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
      return data.SchoolInformation['Schedule'];
    }

    dataFactory.getRoomTypeArray = function () {
      return data.SchoolInformation['roomType'];
    };

    dataFactory.getRoomArray = function () {
      return data.SchoolInformation['room'];
    }
	
	dataFactory.getRoomCapacity = function () {
	  return data.SchoolInformation['roomCapacity'];
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