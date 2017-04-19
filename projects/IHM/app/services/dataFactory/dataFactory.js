angular.module('myApp.dataFactory', [])

.factory('dataFactory', function(){
  var dataFactory = {};

  var data = {
    schoolInformation: {},
    programme: {},
    teacher: {}
  };

  dataFactory.getSubjectsList = function() {
    console.log("dataFactory::getSubectsList : begin");
    if (typeof programme['subjects']) {
      console.log("dataFactory::getSubjectsList : in if");
      return programme['subjects'];
    }
    return [];
  }

  return dataFactory;
});