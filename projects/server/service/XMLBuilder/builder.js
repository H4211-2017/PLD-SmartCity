var async = require('async');

var outputGenerator = require('./output/outputGenerator');

var ioDay = require('./io/day');
var ioHour = require('./io/hour');
var ioYear = require('./io/year');
var ioClass = require('./io/class');
var ioSubject = require('./io/subject');
var ioTeacher = require('./io/teacher');
var ioAttribution = require('./io/attribution');
var ioRoom = require('./io/room');

var jsonObjectEntryToXml = function(jsonObjectEntry) {
	
	var outputJsonGenerator = new outputGenerator.OutputJsonGenerator();
	var tableDays = jsonObjectEntry.schoolInformation.schedule.days;
	var tableHours = jsonObjectEntry.schoolInformation.schedule.hoursSlot;
	var tableDisableHours = jsonObjectEntry.schoolInformation.schedule.disableHours;
	var tableRooms = jsonObjectEntry.schoolInformation.room;
	var tableYears = jsonObjectEntry.programme.year;
	var tableClasses = jsonObjectEntry.programme.classes;
	var tableSubjects = jsonObjectEntry.programme.subjects;

	async.forEach(tableDays, parseDay, afterParseDay);
	
	function parseDay(stringDay, callback) {
		
		ioDay.parse(stringDay, outputJsonGenerator, callback);
	}
	
	function afterParseDay(err) {
		
		async.forEach(tableHours, parseHours, afterParseHours);
	}
	
	function parseHours(jsonHour, callback) {
		
		ioHour.parse(jsonHour, outputJsonGenerator, callback);
	}
	
	function afterParseHours(err) {
		
		async.forEach(tableYears, parseYear, afterParseYear);
	}	
	
	function parseYear(stringYear, callback) {
		
		ioYear.parse(stringYear, outputJsonGenerator, callback);
	}
	
	function afterParseYear(err) {
	
		async.forEach(tableClasses, parseClass, afterParseClass);
	}
	
	function parseClass(jsonClass, callback) {
	
		ioClass.parse(jsonClass, outputJsonGenerator, callback);
	}
	
	function afterParseClass(err) {
		
		async.forEach(tableSubjects, parseSubject, afterParseSubject);
	}
	
	function parseSubject(jsonSubject, callback) {
	
		ioSubject.parse(jsonSubject, tableRooms, outputJsonGenerator, callback);
	}
	
	function afterParseSubject(err) {
	
		var tableTeacher = jsonObjectEntry.teacher.teacherList;
		async.forEach(tableTeacher, parseTeacher, afterParseTeacher);
	}

	function parseTeacher(jsonTeacher, callback) {
	
		ioTeacher.parse(jsonTeacher, tableHours, outputJsonGenerator, callback);
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
