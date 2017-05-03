/**
 * Created by nicolas on 13/04/17.
 */
'use strict';

angular.module('myApp')

    .controller('BodyCtrl', ['$scope', '$rootScope','$http', '$timeout', 'dataFactory', function($scope, $rootScope, $http, $timeout, dataFactory) {
    
		$rootScope.__etablissement = '';
    	$rootScope.__mdp = '';
	
		$http.get('/relog').success(function(data, status) {
	 
			if (status == 200 || status == 0) {
				
				if (data.schoolname) {
					
					$rootScope.__etablissement = data.schoolname;
					$rootScope.__mdp = data.mdp;
					console.log('compte client récupéré');
					
					if (data.lastConfig) {
						
						$http.get('/data?config=' + data.lastConfig).success(function(data1, status1) {
							
							if (status1 == 200 || status1 == 0) {
								
								dataFactory.setData(data1);
								console.log('dernière configuration enregistrée récupérée');
							}
						});
					}
				}
			}
		});
    	
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
            $http.get('/login?schoolname='+$scope.etablissement).then(function(){
              $rootScope.__etablissement = $scope.etablissement;
              $rootScope.__mdp = $scope.mdp;
              $("#connect").css("display", "none");
              $("#disconnect").css("display", "block");
              $("#homeSave").removeAttr("disabled");
              $("#homeLoad").removeAttr("disabled");
			  $("#homeGen").removeAttr("disabled");
            });
            }
          else
          {
            alert("Nom d'établissement et/ou mot de passe incorrect");
          }
        };
        
        $scope.disconnect = function() {
			
        	$http.get('/logout').then(function(){
				$rootScope.__etablissement = '';
				$scope.etablissement = '';
				$scope.mdp = '';
				$rootScope.__mdp = '';
				$("#connect").css("display", "block");
				$("#disconnect").css("display", "none");
				$("#homeSave").attr("disabled", "true");
				$("#homeLoad").attr("disabled", "true");
				$("#homeGen").attr("disabled", "true");
				$("#etablissement").val('');
            });
        };

        // Update scope of open menu
        $scope.openMenu = function(nameTabString) {
          if(nameTabString === 'HomeMenu') {
            $scope.homeMenu = '';
            $timeout(function() {
              $scope.homeMenu = 'homeMenu/homeMenu.html';
            }, 0);
          } else if(nameTabString === 'SchoolInformationMenu') {
            $scope.schoolMenu = '';
            $timeout(function() {
              $scope.schoolMenu = 'schoolInformationMenu/schoolInformationMenu.html';
            }, 0);
          } else if(nameTabString === 'ProgrammeMenu') {
            $scope.programmeMenu = '';
            $timeout(function() {
              $scope.programmeMenu = 'programmeMenu/programmeMenu.html';
            }, 0);
          } else {
            $scope.teacherMenu = '';
            $timeout(function() {
              $scope.teacherMenu = 'teacherMenu/teacherMenu.html';
            }, 0);
          }
        };


    }]);
