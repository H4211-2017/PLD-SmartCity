// TODO : add/remove for schedule

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
    };

    // =============== PROGRAMME ===============
    // GETTER
    dataFactory.getYearArray = function () {
      return data.programme.year;
    };

    dataFactory.getClassesArray = function () {
      return data.programme.classes;
    };

    dataFactory.getSubjectsArray = function () {
      return data.programme.subjects;
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
        ensureCoherencyProgrammeSubject(subjectToAddString, true, false);
        return true;
      }
      return false;
    };

    dataFactory.removeSubject = function (indexSubjectToRemove, deleteCascade) {
      var subjectToRemoveString = data.programme.subjects[indexSubjectToRemove].name;
      var subjectDoesNotHaveDependency = ensureCoherencyProgrammeSubject(subjectToRemoveString, false, deleteCascade);
      if (deleteCascade || subjectDoesNotHaveDependency) {
        data.programme.subjects.splice(indexSubjectToRemove, 1);
        return true;
      }
      return false;
    };

    dataFactory.addYear = function (yearString) {
      var yearArray = data.programme.year;
      if (!yearArray.some(function (e) {
          return e.toUpperCase() === yearString.toUpperCase();
        })) {
        yearArray.push(yearString);
        ensureCoherencyProgrammeYear(yearString, true, false);
        return true;
      }
      return false;
    };

    dataFactory.removeYear = function (indexYearToRemove, deleteCascade) {
      var yearArray = data.programme.year;
      var yearToRemoveString = yearArray[indexYearToRemove];
      var yearDoesNotHaveDependency = ensureCoherencyProgrammeYear(yearToRemoveString, false, deleteCascade);

      if (deleteCascade || yearDoesNotHaveDependency) {
        yearArray.splice(indexYearToRemove, 1);
        return true;
      }
      return false;
    };

    dataFactory.addClass = function (classString, yearString, studentNumber) {
      var classArray = data.programme.classes;
      if (!stringInArray(classString, classArray, 'name')) {
        classArray.push({
          year: yearString,
          name: classString,
          studentNumber: studentNumber
        });
        return true;
      }
      return false;
    };

    dataFactory.removeClass = function (indexClassToRemove, deleteCasade) {
      var classArray = data.programme.classes;
      var classToRemoveString = classArray[indexClassToRemove];
      var classDoesNotHaveDependency = true;

      if (deleteCasade || classDoesNotHaveDependency) {
        classArray.splice(indexClassToRemove, 1);
        return true;
      }
      return false;
    };

    dataFactory.removeProgramme = function () {

    };

    // =============== TEACHER ===============
    // GETTER

    // SETTER
    //======================================== PRIVATE ================================
    function ensureCoherencyProgrammeYear(yearString, isAddOperation, deleteCascade) {
      var programmeArray = data.programme.programme;
      var subjectArray = data.programme.subjects;

      if (isAddOperation) {
        var programmeSubjectArray = subjectArray.map(function (e) {
          return {
            subject: e.name,
            weekHours: 0
          }
        });

        programmeArray.push({
          year: yearString,
          programme: programmeSubjectArray
        });

      } else {
        for (var i = 0; i < programmeArray.length; i++) {
          if (programmeArray[i].year == yearString) {
            if (!deleteCascade) {
              // If for all subjects, weekHours is not set (0), the year will be removed
              for (var j = 0; j < programmeArray[i].programme.length; j++) {
                if (programmeArray[i].programme[j].weekHours != 0) {
                  return false;
                }
              }
              break; // Year is the identifier of programme, only one occurrence will be found
            }
          }
        }
        programmeArray.splice(i, 1);
      }
      return true;
    }

    // TODO
    function ensureCoherencyClassYear(yearString, deleteCascade) {
      return false;
    }

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
          var subjectIndex = programmeArray[i].programme.map(function (e) {
            return e.subject;
          }).indexOf(subjectString);

          if (subjectIndex !== -1) {
            if (deleteCascade || programmeArray[i].programme[subjectIndex].weekHours === 0) {
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