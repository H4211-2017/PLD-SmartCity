'use strict';

// Declare app level module which depends on views, and components
var app = angular.module('myApp', [
  'ngRoute',
  'myApp.homeMenu',
  'myApp.schoolInformationMenu',
  'myApp.scheduleTab',
  'myApp.roomTypeTab',
  'myApp.roomTab',
  'myApp.programmeMenu',
  'myApp.gradeClassesTab',
  'myApp.subjectsTab',
  'myApp.programmeTab',
  'myApp.teacherMenu',
  'myApp.teacherTab',
  'myApp.attributionTab',
  'myApp.version',
  'localytics.directives',
  'ngMaterial'
]).config(['$locationProvider', '$routeProvider', function ($locationProvider, $routeProvider) {
  $locationProvider.hashPrefix('!');

  $routeProvider.otherwise({redirectTo: '/homeMenu'});
}]);

app.controller("IndexCtrl", ["$scope", function ($scope) {
  
  $scope.body = "anchoredParts/body.html";
  
}]);

var printObjectCaracteristic = function (object, ignoreProperties) {
  var str = JSON.stringify(object, function (key, value) {
    if (value === null) {
      return null;
    }
    if (key === "$$childTail" || key === "$$childHead" || key === "$$nextSibling" || key === "watchers" || key === "$root" || key === "scope"
      || key === "$isolateScopeNoTemplate") {
      return "id : " + value.id;
    }
    if (key === '$$hashKey') {
      return undefined;
    }
    if (ignoreProperties && ignoreProperties.includes(key)){
      return undefined;
    }
    return value;
  });

  console.log(str);
};
