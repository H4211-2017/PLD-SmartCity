'use strict';

angular.module('myApp.teacherMenu.teacherTab', ['ngRoute'])
  
  .config(['$routeProvider', function ($routeProvider) {
    $routeProvider.when('/teacherMenu/teacherTab', {
      templateUrl: 'teacherMenu/teacherTab/teacherTab.html',
      controller: 'teacherTabCtrl'
    });
  }])
  
  .controller('teacherTabCtrl', ['$scope', function ($scope) {
    //$scope.loadXML = function () {
      $scope.teachers = [{
        FirstName: 'Arthur',
        LastName: 'Auklo',
        Subject: [
          'Latin',
          'Francais',
          'Grec'
        ],
        Class: [
          '3A',
          '6B',
          '5C'
        ],
        Disponibility: [
          {
            DayName: 'Lundi',
            HoursSlot : [
              0,
              1,
              2,
              7,
              8
            ]
          },
          {
            DayName: 'Mardi',
            HoursSlot : [
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
        Comments: 'A very good teacher'
      },
        {
          FirstName: 'Arthur',
          LastName: 'Auklo',
          Subject: [
            'Latin',
            'Francais',
            'Grec'
          ],
          Class: [
            '3A',
            '6B',
            '5C'
          ],
          Disponibility: [
            {
              DayName: 'Lundi',
              HoursSlot : [
                0,
                1,
                2,
                7,
                8
              ]
            },
            {
              DayName: 'Mardi',
              HoursSlot : [
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
          Comments: 'A very good teacher'
        }
      ];
      
      $scope.cours = [
        {
          Name: 'Physique',
          TypeRoom: 'Normal'
        },
        {
          Name: 'Musique',
          TypeRoom: 'Musique'
        } // Other subject to add
      ]; // End of Subjects
      
      
    //};
    $scope.logteacher = function () {
      log($scope.teachers);
    };
  }]);
