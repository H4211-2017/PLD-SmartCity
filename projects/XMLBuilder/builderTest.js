var builder = require('./builder');
var fileGenerator = require('./fileGenerator');

var jsonObjectEntry = {
    schoolInformation: {
        schedule: [
            {
                dayName: 'Lundi',
                hours: [
                    {
                        start: '8h35',
                        end: '9h30'
                    },
                    {
                        start: '9h30',
                        end: '10h25'
                    } // Other hours to add
                ]
            },
            {
                dayName: 'Mardi',
                hours: [
                    {
                        start: '8h35',
                        end: '9h30'
                    },
                    {
                        start: '9h30',
                        end: '10h25'
                    } // Other hours to add
                ]
            } // Other days to add
        ], // End schedule

        roomType: [
            'Normal',
            'TP Chimie',
            'Musique'
        ],

        room: [
            {
                name: 'C1',
                roomType: 'Normal',
				Capacity: 34
            },
            {
                name: 'C2',
                roomType: 'Musique'
            } // Other rooms to add
        ]
    }, // End of School information

    programme: {
        year: [
            '6e',
            '5e',
            '4e',
            '3e'
        ],
        classes: [
            {
                year: '3e',
                name: '3A',
				studentsNumber: 31
            },
            {
                year: '3e',
                name: '3B'
            },
			{
                year: '6e',
                name: '6A',
				studentsNumber: 32
            } // Other classes to add
        ], // End of classes

        subjects: [
            {
                name: 'Physique',
                typeRoom: 'Normal'
            },
            {
                name: 'Musique',
                typeRoom: 'Musique'
            },
			{
				name: 'Math',
				typeRoom: 'Normal'
			},
			{
				name: 'Latin',
				typeRoom: 'Normal'
			}// Other subject to add
        ], // End of Subjects

        programme: [
            {
                year: '3e',
                programme: [
                    {
                        subject: 'Math',
                        weekHours: 3
                    },
                    {
                        subject: 'Physique',
                        weekHours: 4
                    } // Other subject to add
                ]
			},
			{
				year: '6e',
                programme: [
                    {
                        subject: 'Math',
                        weekHours: 5
                    },
                    {
                        subject: 'Physique',
                        weekHours: 4
                    },
					{
                        subject: 'Latin',
                        weekHours: 3
					}// Other subject to add
                ]
            } // Other years to add
        ] // End of programme
    }, // End of programme

    teacher: {
        teacherList: [
            {
                firstName: 'Arthur',
                lastName: 'Auklo',
                subject: [
                    'Latin',
                    'Francais',
                    'Grec'
                ],
                class: [
                    '3A',
                    '6B',
                    '5C'
                ],
                disponibility: [
                    {
                        dayName: 'Lundi',
                        hoursSlot: [
                            0,
                            1,
                            2,
                            7,
                            8
                        ]
                    },
                    {
                        dayName: 'Mardi',
                        hoursSlot: [
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
				comments: ''
            },
			{
                firstName: 'Beatrice',
                lastName: 'Beaugrand',
                subject: [
                    'Mathematiques',
                    'Physique'
                ],
                class: [
                    '4C',
                    '6A',
                    '5C'
                ],
                disponibility: [
                    {
                        dayName: 'Lundi',
                        hoursSlot: [
                            0,
                            1,
                            2,
                            7,
                            8
                        ]
                    },
                    {
                        dayName: 'Mardi',
                        hoursSlot: [
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
				comments: 'Quelques commentaires'
            } // Other teacher to add
        ], // End of TeacherList

        attribution: [
            {
                class: '6A',
                subjectTeachers: [
                    {
                        subject: 'Math',
                        teacher: {
                            firstName: 'Arthur',
                            lastName: 'Auklo'
                        }
                    },
                    {
                        subject: 'Latin',
                        teacher: {
                            firstName: 'Beatrice',
                            lastName: 'Beaugrand'
                        }
                    } // Other subject to add
                ]
            } // Other class to add
        ]
    }
}

var  outputXml = builder.jsonObjectEntryToXml(jsonObjectEntry);

console.log(outputXml);

fileGenerator.saveStringAs(outputXml, 'first.fet');
