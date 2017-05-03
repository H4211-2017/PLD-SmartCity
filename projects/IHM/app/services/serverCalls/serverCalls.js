/**
 * Created by florent on 5/2/17.
 */

angular.module('myApp.serverCalls',['myApp.dataFactory'])

  .factory('serverCalls', function(dataFactory,$http){
    var serverCalls = {};

    //Carefull async call, returns the promise.
    serverCalls.postData = function(configName){
      var data = dataFactory.getData();
      return $http.post('/data?config=' + configName ,data);
    };

    //Async call, returns the promise.
    serverCalls.postConfigs = function(configs){
      return $http.post('/configs',configs);
    };

    return serverCalls;
  });