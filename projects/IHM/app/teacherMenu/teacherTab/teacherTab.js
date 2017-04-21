'use strict';

angular.module('myApp.teacherMenu.teacherTab', ['ngRoute'])
  
  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/teacherMenu/teacherTab', {
      templateUrl: 'teacherMenu/teacherTab/teacherTab.html',
      controller: 'teacherTabCtrl'
    });
  }])
  
  .controller('teacherTabCtrl', ['$scope', '$compile', function ($scope, $compile) {
    //$scope.loadXML = function () {
      $scope.teachers = [{
        firstName: 'Arthur',
        lastName: 'Auklo',
        subject: [
          'Latin',
          'Francais',
          'Grec'
        ],
        Class: [
          '3A',
          '6B',
          '5C'
        ],
        disponibility: [
          {
            dayName: 'Lundi',
            hoursSlot : [
              0,
              1,
              2,
              7,
              8
            ]
          },
          {
            dayName: 'Mardi',
            hoursSlot : [
              0,
              1,
              2,
              3,
              4,
              5,
              6,
              7
            ]
          } // Other days to add
        ], // End Schedule
        comments: 'A very good teacher'
      },
        {
          firstName: 'Arthur',
          lastName: 'Auklo',
          subject: [
            'Latin',
            'Francais',
            'Grec'
          ],
          Class: [
            '3A',
            '6B',
            '5C'
          ],
          disponibility: [
            {
              dayName: 'Lundi',
              hoursSlot : [
                0,
                1,
                2,
                7,
                8
              ]
            },
            {
              dayName: 'Mardi',
              hoursSlot : [
                0,
                1,
                2,
                3,
                4,
                5,
                6,
                7
              ]
            } // Other days to add
          ], // End Schedule
          comments: 'A very good teacher'
        }
      ];
      
      $scope.cours = [
        {
          name: 'Physique',
          typeRoom: 'Normal'
        },
        {
          name: 'Musique',
          typeRoom: 'Musique'
        } // Other subject to add
      ]; // End of Subjects
      
      
    //};
    $scope.logteacher = function () {
      log($scope.teachers);
    };
    $scope.line = "";
    $scope.lastTeacher = "tX";// TODO ng-model pour teacher
    /*$scope.addTeacherLine = function () {

      var matieresCases = $(".coursName:first").innerHTML;
      var contenu = '<td>\
                        <input type="text" name="firstname" ng-model="'+$scope.lastTeacher+'.FirstName">\
                    </td>\
                    <td>\
                      <input type="text" name="lastname" ng-model="'+$scope.lastTeacher+'.LastName" >\
                    </td>\
                    <td class="coursName">\
                      <select chosen\
                              multiple\
                              class="coursName"\
                              no-results-text="\'Pas de Matière trouvé pour:\'"\
                              placeholder-text-multiple="\'Pas de Matière selectionné pour le moment\'"\
                              ng-options="c.Name for c in cours"\
                              ng-model="t.Subject">\
                        <option value=""></option>\
                      </select>\
                    </td>\
                    <td>\
                      {{ '+$scope.lastTeacher+'.Class }}\
                    </td>\
                    <td>\
                      ...\
                    </td>\
                    <td>\
                      <textarea class="inputCom" name="com" rows="5">{{ '+$scope.lastTeacher+'.Comments }}</textarea>\
                    </td>\
                    <td>\
                      <md-button class="md-icon-button" ng-click="addTeacherLine()">\
                        <i class="material-icons">delete</i>\
                      </md-button>\
                    </td>';
      contenu = '<tr class="ng-scope">'+contenu+'</tr>';
      var compiledContent = $compile(contenu)($scope);
      $("#teacherTab > tbody:last").append(compiledContent);

    };*/

    $scope.closeOverlay = function() {
        $('#addTeacherOverlay').css('width', '0%');
    };

    $scope.openAddTeacher = function() {
        $('#addTeacherOverlay').css('width', 'inherit');
    };

    $scope.addTeacher = function() {
      $scope.closeOverlay();
    }

  }]);
