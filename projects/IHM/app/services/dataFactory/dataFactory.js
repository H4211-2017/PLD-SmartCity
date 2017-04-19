angular.module('myApp.dataFactory', [])

  .factory('dataFactory', function () {
    var dataFactory = {};

    var data = {
      schoolInformation: {},
      programme: {},
      teacher: {}
    };

    dataFactory.getSubjectsList = function () {
      if (data.programme['subjects']) { // true if data.programme['subjects'] is defined
        return data.programme['subjects'];
      }
      return [];
    }

    return dataFactory;
  });