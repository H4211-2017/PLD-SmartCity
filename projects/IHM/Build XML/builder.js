var stringBaseXmlFileForFet = jsonToXml([
   {name : 'fet', attrs : {version: '5.30.3'}, children : [
       {name : 'Intsitution_Name', text : 'yolo'},
       {name : 'Comments', text : ''},
       {name : 'Days_List', children : [
           {name: 'Number_of_Days', text: '6'},
           {name: 'Day', children: {
               Name : 'Lundi'
           }},
           {name: 'Day', children: {
               Name: 'Mardi'
           }},
       ]},
       {name : 'Hour_List', children :[        ]},
       {name : 'Subjects_List', children :[        ]},
       {name : 'Activity_Tags_List', children :[        ]}    ]}
]);console.log(stringBaseXmlFileForFet);function addDay(stringDay, jsonObject) {
    jsonObject
}function jsonToXml(jsonObject) {
    var jsonxml = require('jsontoxml');
    var xml = jsonxml(jsonObject, {xmlHeader: true, prettyPrint: true});
    
    return xml;
}var jsonObjectEntry = {
   teacherList : [
       {firstname : 'Premier', lastname : 'Second', subjectlist : [
           'Maths',
           'Physique'
       ], groupsList : [
           'Classe A',
           'Classe B'
       ]},
       {firstname : 'Premier2', lastname : 'Second2', subjectlist : [
           'Maths',
           'Physique'
       ], groupsList : [
           'Classe A',
           'Classe B'
       ]}
   ],
   subjectsList : [
       'Maths',
       'Physique'
   ],
   roomTypeList : [
       'TP',
       'Musique',
       'Art',
       'Normal'
   ],
   roomList : [
       {roomName : '311', roomType : 'Normal', capacity : 45}
   ],
   grade : [
       ''
   ]
}
