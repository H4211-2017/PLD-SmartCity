angular.module('myApp.dataFactory', [])

  .factory('dataFactory', function () {
    var dataFactory = {};

    var data = {
      schoolInformation: {
        schedule: [
          {
            dayName: "Lundi",
            hours: []
          },
          {
            dayName: "Mardi",
            hours: []
          },
          {
            dayName: "Mercredi",
            hours: []
          },
          {
            dayName: "Jeudi",
            hours: []
          },
          {
            dayName: "Vendredi",
            hours: []
          },
          {
            dayName: "Samedi",
            hours: []
          },
        ],
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
      return data.schoolInformation['schedule'];
    }

    dataFactory.getRoomTypeArray = function () {
      return data.schoolInformation['roomType'];
    };

    dataFactory.getRoomArray = function () {
      return data.schoolInformation['room'];
    }
	
	dataFactory.getRoomCapacity = function () {
	  return data.schoolInformation['roomCapacity'];
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