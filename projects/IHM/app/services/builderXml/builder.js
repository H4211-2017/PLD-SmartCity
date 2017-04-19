function jsonObjectEntryXml(jsonObjectEntry) {

}

var jsonObjectEntry = {
    ScoolInformation: {
        Schedule: [
            {
                DayName: 'Lundi',
                Hours: [
                    {
                        Start: '8h35',
                        End: '9h30'
                    },
                    {
                        Start: '9h30',
                        End: '10h25'
                    } // Other hours to add
                ]
            },
            {
                DayName: 'Mardi',
                Hours: [
                    {
                        Start: '8h35',
                        End: '9h30'
                    },
                    {
                        Start: '9h30',
                        End: '10h25'
                    } // Other hours to add
                ]
            } // Other days to add
        ], // End Schedule

        RoomType: [
            'Normal',
            'TP Chimie',
            'Musique'
        ],

        Room: [
            {
                Name: 'C1',
                RoomType: 'Normal'
            },
            {
                Name: 'C2',
                RoomType: 'Musique'
            } // Other rooms to add
        ]
    }, // End of School information

    Programme: {
        Year: [
            '6e',
            '5e',
            '4e',
            '3e'
        ],
        Classes: [
            {
                Year: '3e',
                Name: '3A'
            },
            {
                Year: '3e',
                Name: '3B'
            } // Other classes to add
        ], // End of classes

        Subjects: [
            {
                Name: 'Physique',
                TypeRoom: 'Normal'
            },
            {
                Name: 'Musique',
                TypeRoom: 'Musique'
            } // Other subject to add
        ], // End of Subjects

        Programme: [
            {
                Year: '3e',
                Programme: [
                    {
                        Subject: 'Math',
                        WeekHours: 3
                    },
                    {
                        Subject: 'Physique',
                        WeekHours: 4
                    } // Other subject to add
                ]
            } // Other years to add
        ] // End of Programme
    }, // End of Programme

    Teacher: {
        TeacherList: [
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
            } // Other teacher to add
        ], // End of TeacherList

        Attribution : [
            {
                Class : '6A',
                SubjectTeachers : [
                    {
                        Subject : 'Math',
                        Teacher : {
                            FirstName : 'Arthur',
                            LastName : 'Auklo'
                        }
                    },
                    {
                        Subject : 'Latin',
                        Teacher : {
                            FirstName : 'Beatrice',
                            LastName : 'Beaugrand'
                        }
                    } // Other subject to add
                ]
            } // Other class to add
        ]
    }
}
