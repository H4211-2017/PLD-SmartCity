var async = require('async');

var outputGenerator = require('./output/outputGenerator');

var ioDay = require('./io/day');
var ioYear = require('./io/year');
var ioClass = require('./io/class');
var ioSubject = require('./io/subject');
var ioTeacher = require('./io/teacher');
var ioAttribution = require('./io/attribution');
var ioRoom = require('./io/room');

var jsonObjectEntryToXml = function(jsonObjectEntry) {
	
	var outputJsonGenerator = Object.create(outputGenerator.OutputJsonGenerator);
	var tableSchedule = jsonObjectEntry.schoolInformation.schedule;
	
	async.forEach(tableSchedule, parseDay, afterParseDay);
	
	function parseDay(jsonDay, callback) {
		
		var jsonFirstDay = tableSchedule[0];
		ioDay.parse(jsonDay, jsonFirstDay, outputJsonGenerator, callback);
	}
	
	function afterParseDay(err) {
		
		var tableYear = jsonObjectEntry.programme.year;
	
		async.forEach(tableYear, parseYear, afterParseYear);
	}
	
	function parseYear(stringYear, callback) {
		
		ioYear.parse(stringYear, outputJsonGenerator, callback);
	}
	
	function afterParseYear(err) {
	
		var tableClasses = jsonObjectEntry.programme.classes;
	
		async.forEach(tableClasses, parseClass, afterParseClass);
	}
	
	function parseClass(jsonClass, callback) {
	
		ioClass.parse(jsonClass, outputJsonGenerator, callback);
	}
	
	function afterParseClass(err) {

		var tableSubjects = jsonObjectEntry.programme.subjects;
		
		async.forEach(tableSubjects, parseSubject, afterParseSubject);
	}
	
	function parseSubject(jsonSubject, callback) {
	
		ioSubject.parse(jsonSubject, outputJsonGenerator, callback);
	}
	
	function afterParseSubject(err) {
	
		var tableTeacher = jsonObjectEntry.teacher.teacherList;
		async.forEach(tableTeacher, parseTeacher, afterParseTeacher);
	}

	function parseTeacher(jsonTeacher, callback) {

		ioTeacher.parse(jsonTeacher, outputJsonGenerator, callback);
	}
	
	function afterParseTeacher(err) {
		
		var tableAttribution = jsonObjectEntry.teacher.attribution;
	
		async.forEach(tableAttribution, parseAttribution, afterParseAttribution);
	}
	
	function parseAttribution(jsonAttribution, callback1) {
		
		var jsonProgram = jsonObjectEntry.programme;
		ioAttribution.parse(jsonAttribution, jsonProgram, outputJsonGenerator, callback1);
	}
	
	function afterParseAttribution(err) {
		
		var tableRooms = jsonObjectEntry.schoolInformation.rooms;
	
		async.forEach(tableRooms, parseRooms, afterParseRooms);
	}
	
	function parseRooms(jsonRoom, callback1) {
		
		ioRoom.parse(jsonRoom, outputJsonGenerator, callback1);
	}
	
	function afterParseRooms(err) {
	
		if (err) {
			
			error = 'ERREUR : builder::jsonObjectEntryToXml : ' + err;
			outputXML = error;
			throw error;
			
		} else {

		}
	}
	
	return jsonToXml(outputJsonGenerator.outputJsonObject);
};

function jsonToXml (jsonObject) {
    var jsonxml = require('jsontoxml');
    var xml = jsonxml(jsonObject, {xmlHeader: true, prettyPrint: true});

    return xml;
}

exports.jsonToXml = jsonToXml;
exports.jsonObjectEntryToXml = jsonObjectEntryToXml;