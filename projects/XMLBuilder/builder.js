var async = require('async');
var outputGenerator = require('./outputGenerator');

var jsonObjectEntryToXml = function(jsonObjectEntry) {
	
	var outputJsonGenerator = outputGenerator.OutputJsonGenerator;
	var tableSchedule = jsonObjectEntry.SchoolInformation.Schedule;
	
	async.forEach(tableSchedule, parseDay, afterParseDay);
	
	function parseDay(jsonDay, callback) {
		
		var dayName = jsonDay.DayName;
		outputJsonGenerator.addDay(dayName);
		var tableHours = jsonDay.Hours;
	
		for(var i = 0; i < tableHours.length; i++) {
			
			var stringHour = tableHours[i].Start + ' - ' + tableHours[i].End
			
			if( jsonDay === tableSchedule[0] ) {
				
				outputJsonGenerator.addHour(stringHour);
				
			} else {
				
				var stringAlreadySavecHour = outputJsonGenerator.getHourName(i);

				if (stringAlreadySavecHour.localeCompare(stringHour) != 0) {
					
					//TODO manage case of differents hours
					throw 'ERROR : builder.js::jsonObjectEntryToXml : Horaires differents pour chaque jours non geres'
				}
			}
		}
		
		callback();
	};
	
	function afterParseDay(err) {
		
		var tableYear = jsonObjectEntry.Programme.Year;
	
		async.forEach(tableYear, parseYear, afterParseYear);
	};
	
	function parseYear(stringYear, callback) {
		
		outputJsonGenerator.addYear(stringYear, 0, '\0');
		callback();
	};
	
	function afterParseYear(err) {
	
		var tableClasses = jsonObjectEntry.Programme.Classes;
	
		async.forEach(tableClasses, parseClass, afterParseClass);
	};
	
	function parseClass(jsonClass, callback) {
			
		var stringYear = jsonClass.Year;
		var stringClassName = jsonClass.Name;
		
		outputJsonGenerator.addGroup(stringYear, stringClassName, 0, '\0');
		callback();
	};
	
	function afterParseClass(err) {

		var tableSubjects = jsonObjectEntry.Programme.Subjects;
		
		async.forEach(tableSubjects, parseSubject, afterParseSubject);
	};
	
	function parseSubject(jsonSubject, callback) {
			
		var stringSubjectName = jsonSubject.Name;
			
		outputJsonGenerator.addSubject(stringSubjectName, '');
		callback();
	};
	
	//TODO manage Programme.Programme.Programme
	
	function afterParseSubject(err) {
	
		var tableTeacher = jsonObjectEntry.Teacher.TeacherList;
		async.forEach(tableTeacher, parseTeacher, afterParseTeacher);
	};

	function parseTeacher(jsonTeacher, callback) {

		var stringName = jsonTeacher.FirstName + ' ' + jsonTeacher.LastName;
		var stringComments = ((jsonTeacher.Comments == '') ? '\0' : jsonTeacher.Comments);
		outputJsonGenerator.addTeacher(stringName, '0', stringComments);
		
		//TODO Constraints of Classes
		//TODO Constraints of Disponibility
		
		callback();
	};
	
	function afterParseTeacher(err) {
		
		var tableAttribution = jsonObjectEntry.Teacher.Attribution;
	
		async.forEach(tableAttribution, parseAttribution, afterParseAttribution);
	};
	
	function parseAttribution(jsonAttribution, callback) {
		
		callback();
	};

	function afterParseAttribution(err) {
	
	}

	return jsonToXml(outputJsonGenerator.outputJsonObject);
};

function jsonToXml (jsonObject) {
    var jsonxml = require('jsontoxml');
    var xml = jsonxml(jsonObject, {xmlHeader: true, prettyPrint: true});

    return xml;
};

exports.jsonObjectEntryToXml = jsonObjectEntryToXml;