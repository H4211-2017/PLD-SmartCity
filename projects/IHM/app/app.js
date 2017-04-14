'use strict';

// Declare app level module which depends on views, and components
var app = angular.module('myApp', [
  'ngRoute',
  'myApp.roomTypeTab',
  'myApp.version',
  'ngMaterial',
  'myApp.roomTab',
  'myApp.version',
  'myApp.homeMenu',
  'myApp.schoolInformationMenu',
  'myApp.programmeMenu',
  'myApp.teacherMenu',
  'localytics.directives',
    'ngMaterial'
]).config(['$locationProvider', '$routeProvider', function ($locationProvider, $routeProvider) {
  $locationProvider.hashPrefix('!');

  $routeProvider.otherwise({redirectTo: '/homeMenu'});
}]);


app.controller("IndexCtrl", ["$scope", function($scope) {

  $scope.body = "anchoredParts/body.html";

  $scope.openTab = function(nom) {

    $scope.page = nom;
    console.log("changement page "+$scope.page);
  };

  $scope.lastIdSelected = '';
  $scope.openTab = function(nom, id) {
    var lastButt = angular.element($scope.lastIdSelected);
    $scope.lastIdSelected = '#' + id;
    var butt = angular.element($scope.lastIdSelected);
    lastButt.attr("selected", false);
    butt.attr("selected", true);
    $scope.page = nom;
  };

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