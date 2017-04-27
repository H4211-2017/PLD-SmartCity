/**
 * Created by nicolas on 13/04/17.
 */
'use strict';

angular.module('myApp')

    .controller('BodyCtrl', ['$scope', function($scope) {
        $scope.homeMenu = 'homeMenu/homeMenu.html';
        $scope.programmeMenu = 'programmeMenu/programmeMenu.html';
        $scope.schoolMenu = 'schoolInformationMenu/schoolInformationMenu.html';
        $scope.teacherMenu = 'teacherMenu/teacherMenu.html';

        $scope.expanded= false;
        $scope.icone = 'chevron_left';
        $scope.reduceOrExpand = function() {
            var menus = $('.tab');
            var contents = $('.tabcontent');
            var buttons = $('.reduceOrExpand');

            $scope.expanded = !$scope.expanded;

            var i=0;
            while(i < menus.length)
            {
                menus[i].setAttribute('expanded', $scope.expanded);
                contents[i].setAttribute('expanded', $scope.expanded);
                buttons[i].setAttribute('expanded', $scope.expanded);
                i++;
            }

            if($scope.expanded) {
                $scope.icone='chevron_right';
            }
            else
            {
                $scope.icone = 'chevron_left';

            }

        };

    }])