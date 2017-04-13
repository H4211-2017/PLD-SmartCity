var builder = require('./builder.js');

console.log(builder);

var outputJsonGenerator = {

	outputJsonObject: [
	   	{name : 'fet', attrs : {version : '5.30.3'}, children : [
		   	{name : 'Intsitution_Name', text : 'yolo'},
		   	{name : 'Comments', text : ''},
		   	{name : 'Days_List', children : [
		       	{name : 'Number_of_Days', text : '6'},
		       	{name : 'Day', children : {
		           Name : 'Lundi'
		       	}},
		       	{name : 'Day', children: {
		           Name : 'Mardi'
			   	}},
		   	]},
		   	{name : 'Hour_List', children : []},
		   	{name : 'Subjects_List', children : []},
		   	{name : 'Activity_Tags_List', children : []},
		   	{name : 'Teacher_List', children : []}
		]}
	],

    addDay : function(stringDay) {
        var hour = {name : 'Hour', children : {
            Name : stringDay
        }};

        this.outputJsonObject[0].children[2].children.push(hour);
    },

	addHour : function(stringHour) {
		var hour = {name : 'Hour', children : {
			Name : stringHour
		}};

		this.outputJsonObject[0].children[3].children.push(hour);
	},

    addSubject : function(stringSubject) {
        var hour = {name : 'Hour', children : {
            Name : stringSubject
        }};

        this.outputJsonObject[0].children[4].children.push(hour);
    },

    addActivityTags : function(stringActivityTags) {
        var hour = {name : 'Hour', children : {
            Name : stringSubject
        }};

        this.outputJsonObject[0].children[5].children.push(hour);
    },

    addTeacher : function(stringTeacher) {

    }
};

outputJsonGenerator.addHour('8.35 - 9.30');
outputJsonGenerator.addDay('Lundi');
outputJsonGenerator.addSubject('Mathematiques');

var jsonToXml = function (jsonObject) {
    var jsonxml = require('jsontoxml');
    var xml = jsonxml(jsonObject, {xmlHeader: true, prettyPrint: true});

    return xml;
};

var toXml = jsonToXml(outputJsonGenerator.outputJsonObject);

console.log(toXml);
