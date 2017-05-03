angular.module('myApp.dataFactory', [])

.factory('dataFactory', function () {
  var dataFactory = {};

  var scheduleArrayBool = [];

  var data = {
    schoolInformation: {
      schedule: {
        days: ["Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"],
        hoursSlot: [],
        disableHours: []
      },
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
  // ================ DATA =========================
  //GETTER
  dataFactory.getData = function () {
    return data;
  };

  // SETTER
  dataFactory.setData = function (newData) {
    data = newData;
  };

  // =============== SCHOOL INFORMATION ===============
  // GETTER
  dataFactory.getScheduleObject = function () {
    return data.schoolInformation.schedule;
  };

  dataFactory.getScheduleArrayBool = function(){
    return scheduleArrayBool;
  };

  dataFactory.getRoomTypeArray = function () {
    return data.schoolInformation.roomTypes;
  };

  dataFactory.getRoomArray = function () {
    return data.schoolInformation.room;
  };

  // SETTER
  dataFactory.addHourSlot = function (hourSlotStartString, hourSlotEndString) {
    var hoursSlotArray = data.schoolInformation.schedule.hoursSlot;
    if (dataFactory.findIndexByKeyValue(hoursSlotArray, ['start', 'end'], [hourSlotStartString, hourSlotEndString]) ===
        -1 && hourSlotStartString !== hourSlotEndString) {
      hoursSlotArray.push({
        start: hourSlotStartString,
        end: hourSlotEndString
      });
      dataFactory.createScheduleArrayBool();
      return true;
    }
    return false;
  };

  dataFactory.removeHourSlot = function (hourSlotIndex, deleteCascade) {

    var hourSlotDoesNotHaveDependency = ensureCoherencyTeacherScheduleOnDelete(deleteCascade);
    if (deleteCascade || hourSlotDoesNotHaveDependency) {
      data.schoolInformation.schedule.hoursSlot.splice(hourSlotIndex, 1);
      dataFactory.createScheduleArrayBool();
      return true;
    }
    return false;
  };

  dataFactory.removeAllHourSlot = function (deleteCascade) {
    // Dependency on hour slot does not depend of specific hour slot
    var hourSlotDoesNotHaveDependency = ensureCoherencyTeacherScheduleOnDelete(deleteCascade);
    while (hourSlotDoesNotHaveDependency && data.schoolInformation.schedule.hoursSlot.length > 0) {
      dataFactory.removeHourSlot(0);
    }
    return true;
  };

  dataFactory.addDisableHour = function (dayIndex, hourSlotIndex) {
    var scheduleObject = data.schoolInformation.schedule;
    scheduleObject.disableHours.push({
      day: scheduleObject.days[dayIndex],
      hourSlot: scheduleObject.hoursSlot[hourSlotIndex]
    });
  };

  dataFactory.removeDisableHour = function (dayIndex, hourSlotIndex) {
    var scheduleObject = data.schoolInformation.schedule;
    var dayNameString = scheduleObject.days[dayIndex];
    var hourSlotStartString = scheduleObject.hoursSlot[hourSlotIndex].start;
    var hourSlotEndString = scheduleObject.hoursSlot[hourSlotIndex].end;

    for (var i = 0, length = scheduleObject.disableHours.length; i < length; i++) {
      var hourSlot = scheduleObject.disableHours[i];
      if (hourSlot.day === dayNameString && hourSlot.hourSlot.start === hourSlotStartString &&
          hourSlot.hourSlot.end === hourSlotEndString) {
        scheduleObject.disableHours.splice(i, 1);
        break;
      }
    }
  };

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
      ensureCoherencyAttributionSubject(subjectToAddString, true, false);
      return true;
    }
    return false;
  };

  dataFactory.removeSubject = function (indexSubjectToRemove, deleteCascade) {
    var subjectToRemoveString = data.programme.subjects[indexSubjectToRemove].name;

    var subjectDoesNotHaveDependency = ensureCoherencyProgrammeSubject(subjectToRemoveString, false, deleteCascade);
    subjectDoesNotHaveDependency &= ensureCoherencyAttributionSubject(subjectToRemoveString, false, deleteCascade);

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
    yearDoesNotHaveDependency &= ensureCoherencyClassYear(yearToRemoveString, deleteCascade);

    if (deleteCascade || yearDoesNotHaveDependency) {
      yearArray.splice(indexYearToRemove, 1);
      return true;
    }
    return false;
  };

  dataFactory.addClass = function (classString, yearString, studentNumber) {
    var classArray = data.programme.classes;

    ensureCoherencyAttributionClasses(classString, true, false);

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

  dataFactory.removeClass = function (indexClassToRemove, deleteCascade) {
    var classArray = data.programme.classes;

    var classToRemove = classArray[indexClassToRemove];
    var classDoesNotHaveDependency = ensureCoherencyAttributionClasses(classToRemove.name, false, deleteCascade);

    if (deleteCascade || classDoesNotHaveDependency) {
      classArray.splice(indexClassToRemove, 1);
      return true;
    }
    return false;
  };

  dataFactory.removeProgramme = function () {

  };

  // =============== TEACHER ===============
  // GETTER
  dataFactory.getTeacherArray = function () {
    return data.teacher.teacherList;
  };

  dataFactory.getAttributionArray = function() {
	return data.teacher.attribution;  
  };
  // SETTER
  dataFactory.addTeacher = function (firstNameString, lastNameString, subjectsArray, disponibilities) {
    var teacherArray = data.teacher.teacherList;
    if (dataFactory.findIndexByKeyValue(teacherArray, ['firstName', 'lastName'], [firstNameString, lastNameString]) ===
        -1) {
      teacherArray.unshift({
        firstName: firstNameString,
        lastName: lastNameString,
        subject: subjectsArray,
        disponibility: disponibilities
      });
      return true;
    } else {
      return false;
    }
  };

  dataFactory.removeTeacher = function (teacherToRemoveIndex, deleteCascade) {
    var teacherArray = data.teacher.teacherList;
    var teacherToRemove = teacherArray[teacherToRemoveIndex];
    var teacherDoesNotHaveDependency = ensureCoherencyAttributionTeacherOnDelete(teacherToRemove, deleteCascade);
    // TODO ensure coherency with attribution
    if (deleteCascade || teacherDoesNotHaveDependency) {
      teacherArray.splice(teacherToRemoveIndex, 1);
      return true;
    }
    return false;
  };
  
  dataFactory.addAttribution = function(classNameString, teacherFirstNameString, teacherLastNameString){
	  
  };
  
  dataFactory.removeAttribution = function(classNameString, teacherFirstNameString, teacherLastNameString){
	  
  };

  // =============== UTILITY FUNCTION ==============
  dataFactory.findIndexByKeyValue = function (array, keysArray, valuesArray) {
    for (var i = 0, lengthArray = array.length; i < lengthArray; i++) {
      var found = true;
      for (var j = 0, lengthKeys = keysArray.length; j < lengthKeys; j++) {
        if (array[i][keysArray[j]] != valuesArray[j]) {
          found = false;
          break;
        }
      }
      if (found) {
        return i;
      }
    }
    return -1;
  };

  dataFactory.createScheduleArrayBool = function(){
    var schedule = dataFactory.getScheduleObject();
    angular.forEach(schedule.days, function(day){
      scheduleArrayBool[schedule.days.indexOf(day)] = new Array(schedule.hoursSlot.length).fill(false);
    });
  };

  //======================================== PRIVATE ================================
  function ensureCoherencyAttributionSubject(subjectString, isAddOperation, deleteCascade) {
    var attributionArray = data.teacher.attribution;

    if (isAddOperation) {
      for (var i = 0, attributionLength = attributionArray.length; i < attributionLength; i++) {
        attributionArray[i].subjects.push({
          subjectName: subjectString,
          teacher: {}
        });
      }
    } else {
      for (i = 0, attributionLength = attributionArray.length; i < attributionLength; i++) {
        var indexSubject = dataFactory.findIndexByKeyValue(attributionArray[i].subjects, ['subjectName'],
            [subjectString]);
        if (indexSubject != -1) {
          if (deleteCascade) {
            attributionArray[i].subjects.splice(indexSubject, 1);
          } else {
            return false;
          }
        }
      }
    }
    return true;
  }

  function ensureCoherencyAttributionClasses(classString, isAddOperation, deleteCascade) {
    var attributionArray = data.teacher.attribution;
    var subjectArray = data.programme.subjects;

    if (isAddOperation) {
      var attributionSubjectArray = subjectArray.map(function (e) {
        return {
          subjectName: e.name,
          teacher: {}
        }
      });

      attributionArray.push({
        class: classString,
        subjects: attributionSubjectArray
      });
    } else {
      var indexClassToRemove = dataFactory.findIndexByKeyValue(attributionArray, ['class'], [classString]);
      if (indexClassToRemove != -1) {
        var noTeacherAssigned = true;
        for (var i = 0, length = attributionArray[indexClassToRemove].subjects.length; i < length; i++) {
          if (attributionArray[indexClassToRemove].subjects[i].firstName) { // teacher.firstName == undefined => teacher is empty
            noTeacherAssigned = false;
          }
        }
        if (deleteCascade || noTeacherAssigned) {
          attributionArray.splice(indexClassToRemove, 1);
          return true;
        } else {
          return false;
        }
      }
    }
    return true;
  }

  // TODO
  function ensureCoherencyAttributionTeacherOnDelete(teacherToRemove, deleteCascade) {
    return true;
  }

  function ensureCoherencyTeacherScheduleOnDelete(deleteCascade) {
    var teacherArray = data.teacher.teacherList;
    for (var i = 0, length = teacherArray.length; i < length; i++) {
      if (deleteCascade) {
        dataFactory.removeTeacher(i, deleteCascade);
      } else {
        return false;
      }
    }
    return true;
  }

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

  function ensureCoherencyClassYear(yearString, deleteCascade) {
    var classArray = data.programme.classes;
    for (var i = 0; i < classArray.length; i++) {
      if (classArray[i].year === yearString) {
        if (deleteCascade) {
          dataFactory.removeClass(i, true);
          i--; // as deleteCascade is set to true, the class at index i has been removed, so i must be decreased
        } else {
          return false;
        }
      }
    }
    return true;
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
      if (roomArray[i].roomTypes.indexOf(roomTypeString) !== -1) {
        if (deleteCascade) {
          dataFactory.removeRoom(i, true);
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
          dataFactory.removeSubject(i, true);
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