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
  'myApp.subjectsTab',
  'myApp.teacherMenu',
  'myApp.version',
  'localytics.directives',
  'angularjs-dropdown-multiselect',
  'ngMaterial'
]).config(['$locationProvider', '$routeProvider', function ($locationProvider, $routeProvider) {
  $locationProvider.hashPrefix('!');

  $routeProvider.otherwise({redirectTo: '/homeMenu'});
}]);

app.controller("IndexCtrl", ["$scope", function ($scope) {
  $scope.body = "anchoredParts/body.html";

}]);

//  Js for Menu
// function openTab(evt) {
//   // Declare all variables
//   var i, menulinks;
//
//   // Get all elements with class="tablinks" and remove the class "active"
//   menulinks = document.getElementsByClassName("menulinks");
//   for (i = 0; i < menulinks.length; i++) {
//     menulinks[i].className = menulinks[i].className.replace(" active", "");
//   }
//   evt.currentTarget.className += " active";
// }

var printObjectCaracteristic = function (object, ignoreProperties) {
  var str = JSON.stringify(object, function (key, value) {
    if (value === null) {
      return null;
    }
    if (key === "$$childTail" || key === "$$childHead" || key === "$$nextSibling" || key === "watchers" || key === "$root" || key === "scope"
      || key === "$isolateScopeNoTemplate") {
      return "id : " + value.id;
    }
    if (ignoreProperties && ignoreProperties.includes(key)){
      return undefined;
    }
    return value;
  });

  console.log(str);
};