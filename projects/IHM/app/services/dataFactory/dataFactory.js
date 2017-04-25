// TODO : add/remove for schedule, year, classes

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
          }
        ],
        roomTypes: [],
        room: []
      },
      programme: {
        year: ['6e', '5e', '4e', '3e'],
        classes: [],
        subjects: [],
        programme: []
      },
      teacher: {
        teacherList: [],
        attribution: []
      }
    };

    // ======================================= PUBLIC ==================================
    // =============== SCHOOL INFORMATION ===============
    // GETTER
    dataFactory.getSchedule = function () {
      return data.schoolInformation.schedule;
    };

    dataFactory.getRoomTypeArray = function () {
      return data.schoolInformation.roomTypes;
    };

    dataFactory.getRoomArray = function () {
      return data.schoolInformation.room;
    };

    // SETTER
    dataFactory.addRoomType = function (roomTypeToAddString) {
      var roomTypeArray = data.schoolInformation.roomTypes;

      // if (roomTypeArray does not contain a non case sensitive element equal to roomTypeToAddString
      if (!roomTypeArray.some(function (e) {
          return e.toUpperCase() === roomTypeToAddString.toUpperCase();
        })) {
        roomTypeArray.unshift(roomTypeToAddString);
        return true;
      }
      return false;
    };

    dataFactory.removeRoomType = function (indexRoomTypeToRemove, deleteCascade) {
      var roomTypeToRemoveString = data.schoolInformation.roomTypes[indexRoomTypeToRemove];
      var roomTypeDoesNotHaveDependency = ensureCoherencyRoomRoomTypeOnDelete(roomTypeToRemoveString, deleteCascade);
      roomTypeDoesNotHaveDependency &= ensureCoherencySubjectRoomTypeOnDelete(roomTypeToRemoveString, deleteCascade);
      if (deleteCascade || roomTypeDoesNotHaveDependency) {
        data.schoolInformation.roomTypes.splice(indexRoomTypeToRemove, 1);
        return true;
      }
      return false;
    };

    // TODO check modification of roomTypeArray after calling this method
    dataFactory.addRoom = function (roomToAddString, roomTypeArray, capacity) {
      var roomArray = data.schoolInformation.room;
      if (!stringInArray(roomToAddString, roomArray, 'name')) {
        roomArray.unshift({
          name: roomToAddString,
          roomTypes: roomTypeArray,
          capacity: capacity
        });
        return true;
      }
      return false;
    };

    dataFactory.removeRoom = function (indexRoomToRemove) {
      data.schoolInformation.room.splice(indexRoomToRemove, 1);
      return true;
    }

    // =============== PROGRAMME ===============
    // GETTER
    dataFactory.getSubjectsArray = function () {
      return data.programme.subjects;
    };

    dataFactory.getYearArray = function () {
      return data.programme.year;
    };

    dataFactory.getProgrammeArray = function () {
      return data.programme.programme;
    };

    // SETTER
    dataFactory.addSubject = function (subjectToAddString, roomTypeString) {
      var subjectArray = data.programme.subjects;
      if (!stringInArray(subjectToAddString, subjectArray, 'name')) {
        subjectArray.unshift({
          name: subjectToAddString,
          roomType: roomTypeString
        });
        ensureCoherencyProgrammeSubject(subjectToAddString, true);
        return true;
      }
      return false;
    };

    dataFactory.removeSubject = function (indexSubjectToRemove, deleteCascade) {
      var subjectToRemoveString = data.programme.subjects[indexSubjectToRemove];
      var subjectDoesNotHaveDependency = ensureCoherencyProgrammeSubject(subjectToRemoveString, false, deleteCascade);
      if (deleteCascade || subjectDoesNotHaveDependency) {
        data.programme.subjects.splice(indexSubjectToRemove, 1);
        return true;
      }
      return false;
    };

    dataFactory.addYear = function (yearString) {
      ensureCoherencyProgrammeYear(yearString);
    };

    // =============== TEACHER ===============
    // GETTER

    // SETTER
    //======================================== PRIVATE ================================
    function ensureCoherencyProgrammeYear(yearAddedString, isAddOperation) {

    }

    // TODO fix delete part (indexOf)
    function ensureCoherencyProgrammeSubject(subjectString, isAddOperation, deleteCascade) {
      var programmeArray = data.programme.programme;
      if (isAddOperation) {
        for (var i = 0; i < programmeArray.length; i++) {
          programmeArray[i].programme.push({
            subject: subjectString,
            weekHours: 0
          });
        }
      } else {
        for (i = 0; i < programmeArray.length; i++) {
          var subjectIndex = programmeArray[i].programme.indexOf(subjectString);
          if (subjectIndex !== -1) {
            if (deleteCascade) {
              programmeArray[i].programme.splice(subjectIndex, 1);
            } else {
              return false;
            }
          }
        }
      }

      return true;
    }

    function ensureCoherencyRoomRoomTypeOnDelete(roomTypeString, deleteCascade) {
      var roomArray = data.schoolInformation.room;
      for (var i = 0; i < roomArray.length; i++) {
        if (roomArray[i].roomTypes == roomTypeString) {
          if (deleteCascade) {
            data.removeRoom(i, true);
            i--; // as deleteCascade is set to true, the room at index i has been removed, so i must be decreased
          } else {
            return false;
          }
        }
      }
      return true;
    }

    function ensureCoherencySubjectRoomTypeOnDelete(roomTypeString, deleteCascade) {
      var subjectArray = data.programme.subjects;
      for (var i = 0; i < subjectArray.length; i++) {
        if (subjectArray[i].roomType === roomTypeString) {
          if (deleteCascade) {
            data.removeSubject(i, true);
            i--; // as deleteCascade is set to true, the subject at index i has been removed, so i must be decreased
          } else {
            return false;
          }
        }
      }
      return true;
    }

    function stringInArray(string, array, property) {
      string = string.toUpperCase();
      for (var i = 0; i < array.length; i++) {
        if (array[i][property].toUpperCase() === string) {
          return true;
        }
      }
      return false;
    }


    return dataFactory;
  });