/**
 * Created by nicolas on 13/04/17.
 */
'use strict';

angular.module('myApp')

    .controller('BodyCtrl', ['$scope', '$rootScope','$http', function($scope, $rootScope, $http) {
    
    	$rootScope.__etablissement = '';
    	$rootScope.mdp = '';
    	
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
        
        $scope.etablissement = "";
        $scope.mdp = "";
        $scope.login = function() {
            if($scope.etablissement !== "")
          {
            $http.get('/login?schoolname=$scope.etablissement').then(function(){
              $rootScope.__etablissement = $scope.etablissement;
              $rootScope.__mdp = $scope.mdp;
              $("#connect").css("display", "none");
              $("#disconnect").css("display", "block");
              $("#homeSave").removeAttr("disabled");
              $("#homeLoad").removeAttr("disabled");
            });
            }
          else
          {
            alert("Nom d'établissement et/ou mot de passe incorrect");
          }
        };
        
        $scope.disconnect = function() {
        	$rootScope.__etablissement = '';
        	$rootScope.__mdp = '';
        	$("#connect").css("display", "block");
        	$("#disconnect").css("display", "none");
        	$("#homeSave").attr("disabled", "true");
        	$("#homeLoad").attr("disabled", "true");
        	$("#etablissement").val('');
        };


    }])
