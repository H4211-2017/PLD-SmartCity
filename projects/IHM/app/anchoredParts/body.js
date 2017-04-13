/**
 * Created by nicolas on 13/04/17.
 */
'use strict';

angular.module('myApp.body')

    .controller('BodyCtrl', ['$scope', function($scope) {
        $scope.homeMenu = 'homeMenu/homeMenu.html';
        $scope.programmeMenu = 'programmeMenu/programmeMenu.html';
        $scope.schoolMenu = 'schoolInformationMenu/schoolInformationMenu.html';
        $scope.teacherMenu = 'teacherMenu/teacherMenu.html';
    }]);