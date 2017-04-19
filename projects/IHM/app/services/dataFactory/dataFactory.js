angular.module('myApp.dataFactory', [])

  .factory('dataFactory', function () {
    var dataFactory = {};

    var data = {
      schoolInformation: {},
      programme: {},
      teacher: {}
    };

    // =========== GETTER ===============
    dataFactory.getSubjectsList = function () {
      if (data.programme['Subjects']) { // true if data.programme['Subjects'] is defined
        return data.programme['Subjects'];
      }
      return [];
    };

    dataFactory.getRoomTypeList = function () {
      if (data.schoolInformation['RoomType']) {// true if data.programme['RoomType'] is defined
        return data.schoolInformation['RoomType'];
      }
      return [];
    };

    // ==============SETTER ===============
    dataFactory.addRoomType = function (roomType) {
      if (!data.schoolInformation['RoomType']) {
        data.schoolInformation.RoomType = [];
      }
      data.schoolInformation.RoomType.push(roomType);
    }

    dataFactory.removeRoomType = function (roomType) {
      if (data.schoolInformation['RoomType']) {
        var index = data.schoolInformation['RoomType'].indexOf(roomType);
        if (index !== -1) {
          data.schoolInformation['RoomType'].splice(index);
        }
      }
    }

    return dataFactory;
  });