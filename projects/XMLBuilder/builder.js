var async = require('async');
var outputGenerator = require('./outputGenerator');

var jsonObjectEntryToXml = function(jsonObjectEntry) {
	
	var outputJsonGenerator = outputGenerator.OutputJsonGenerator;
	var tableSchedule = jsonObjectEntry.schoolInformation.schedule;
	
	async.forEach(tableSchedule, parseDay, afterParseDay);
	
	function parseDay(jsonDay, callback) {
		
		var dayName = jsonDay.dayName;
		outputJsonGenerator.addDay(dayName);
		var tableHours = jsonDay.hours;
	
		for(var i = 0; i < tableHours.length; i++) {
			
			var stringHour = tableHours[i].start + ' - ' + tableHours[i].end;
			
			if(jsonDay === tableSchedule[0]) {
				
				outputJsonGenerator.addHour(stringHour);
				
			} else {
				
				var stringAlreadySavecHour = outputJsonGenerator.getHourName(i);

				if (stringAlreadySavecHour.localeCompare(stringHour) !== 0) {
					
					//TODO manage case of differents hours
					throw 'ERROR : builder.js::jsonObjectEntryToXml : Horaires differents pour chaque jours non geres'
				}
			}
		}
		
		callback();
	}
	
	function afterParseDay(err) {
		
		var tableYear = jsonObjectEntry.programme.year;
	
		async.forEach(tableYear, parseYear, afterParseYear);
	}
	
	function parseYear(stringYear, callback) {
		
		outputJsonGenerator.addYear(stringYear, 0, '');
		callback();
	}
	
	function afterParseYear(err) {
	
		var tableClasses = jsonObjectEntry.programme.classes;
	
		async.forEach(tableClasses, parseClass, afterParseClass);
	}
	
	function parseClass(jsonClass, callback) {
			
		var stringYear = jsonClass.year;
		var stringClassName = jsonClass.name;
		var numberOfStudents = (jsonClass.studentsNumber) ? jsonClass.studentsNumber : 0;
		
		outputJsonGenerator.addGroup(stringYear, stringClassName, numberOfStudents, '');
		callback();
	}
	
	function afterParseClass(err) {

		var tableSubjects = jsonObjectEntry.programme.subjects;
		
		async.forEach(tableSubjects, parseSubject, afterParseSubject);
	}
	
	function parseSubject(jsonSubject, callback) {
			
		var stringSubjectName = jsonSubject.name;
			
		outputJsonGenerator.addSubject(stringSubjectName, '');
		callback();
	}
	
	//TODO manage programme.programme.programme
	
	function afterParseSubject(err) {
	
		var tableTeacher = jsonObjectEntry.teacher.teacherList;
		async.forEach(tableTeacher, parseTeacher, afterParseTeacher);
	}

	function parseTeacher(jsonTeacher, callback) {

		var stringName = jsonTeacher.firstName + ' ' + jsonTeacher.lastName;
		var stringComments = ((jsonTeacher.comments == '') ? '' : jsonTeacher.comments);
		outputJsonGenerator.addTeacher(stringName, '0', stringComments);
		
		//TODO Constraints of classes
		//TODO Constraints of Disponibility
		
		callback();
	}
	
	function afterParseTeacher(err) {
		
		var tableAttribution = jsonObjectEntry.teacher.attribution;
	
		async.forEach(tableAttribution, parseAttribution, afterParseAttribution);
	}
	
	function parseAttribution(jsonAttribution, callback1) {
		
		//TODO verify if parameters exist
		var stringClass = jsonAttribution.class;
		var tableSubjectTeachers = jsonAttribution.subjectTeachers;
		
		async.forEach(tableSubjectTeachers, parseSubjectsTeachers, afterParseSubjectsTeachers);
		
		function parseSubjectsTeachers(jsonSubjectTeachers, callback2) {
		
			var stringSubject = jsonSubjectTeachers.subject;
			var stringTeacher = jsonSubjectTeachers.teacher.firstName + ' ' + jsonSubjectTeachers.teacher.lastName;
			var jsonProgram = jsonObjectEntry.programme;
			
			var i = 0;
			var jsonClass = jsonProgram.classes[i];
			
			while (jsonClass.name.localeCompare(stringClass) !== 0) {
				
				i++;
				
				if (i >= jsonProgram.classes.length) {					
					throw 'ERROR : builder::parseSubjectsTeachers : la classe ' + stringClass + ' n\'existe pas';
				}
				
				jsonClass = jsonProgram.classes[i];
			}
			
			var stringYear = jsonClass.year;
			
			i = 0;
			var jsonUnderProgram = jsonProgram.programme[i];
			
			while (jsonUnderProgram.year.localeCompare(stringYear) !== 0) {
				
				i++;
				
				if (i >= jsonProgram.programme.length) {					
					throw 'ERROR : builder::parseSubjectsTeachers : l\'annee ' + stringYear + ' n\'a pas de programme';
				}
				
				jsonUnderProgram = jsonProgram.programme[i];
			}
			
			i = 0;
			var jsonUnderUnderProgram = jsonUnderProgram.programme[i];
			
			while (jsonUnderUnderProgram.subject.localeCompare(stringSubject) !== 0) {
				
				i++;
				
				if (i >= jsonUnderProgram.programme.length) {					
					throw 'ERROR : builder::parseSubjectsTeachers : le sujet ' + stringSubject + 'n\'est pas etudiee pour l\'annee ' + stringYear;
				}
				
				jsonUnderUnderProgram = jsonUnderProgram.programme[i];
			}
			
			var numberWeekHours = jsonUnderUnderProgram.weekHours;
			
			outputJsonGenerator.addActivity(stringTeacher, stringSubject, stringClass, 1, numberWeekHours, '')
			callback2();
		}
		
		function afterParseSubjectsTeachers(err) {
		
		}
		
		callback1();
	}
	
	function afterParseAttribution(err) {
		
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