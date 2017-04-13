'use strict';

angular.module('myApp.teacherTab', ['ngRoute'])

.config(['$routeProvider', function($routeProvider) {
  $routeProvider.when('/teacherTab', {
    templateUrl: 'teacherTab/teacherTab.html',
    controller: 'teacherTabCtrl'
  });
}])

.controller('teacherTabCtrl', [function() {

}]);
