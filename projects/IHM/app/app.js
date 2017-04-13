'use strict';

// Declare app level module which depends on views, and components
var app = angular.module('myApp', [
  'ngRoute',
  'myApp.hometab',
  'myApp.teacherTab',
  'myApp.roomTypeTab',
  'myApp.roomTab',
  'myApp.view2',
  'myApp.version',
  'localytics.directives'
]).config(['$locationProvider', '$routeProvider', function ($locationProvider, $routeProvider) {
  $locationProvider.hashPrefix('!');

  $routeProvider.otherwise({redirectTo: '/hometab'});
}]);

/* Js for Menu */
function openTab(evt) {
  // Declare all variables
  var i, tablinks;

  // Get all elements with class="tablinks" and remove the class "active"
  tablinks = document.getElementsByClassName("tablinks");
  for (i = 0; i < tablinks.length; i++) {
    tablinks[i].className = tablinks[i].className.replace(" active", "");
  }
  evt.currentTarget.className += " active";
}