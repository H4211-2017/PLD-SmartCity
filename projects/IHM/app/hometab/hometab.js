'use strict';

angular.module('myApp.hometab', ['ngRoute'])

.config(['$routeProvider', function($routeProvider) {
  $routeProvider.when('/hometab', {
    templateUrl: 'hometab/hometab.html',
    controller: 'hometabCtrl'
  });
}])
  
.controller('hometabCtrl', [function() {

}]);