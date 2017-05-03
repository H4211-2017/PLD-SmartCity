var async = require('async');

var parse = function(jsonAttribution, jsonProgram, outputJsonGenerator, callback1) {
		
		//TODO verify if parameters exist
		var stringClass = jsonAttribution.class;
		var tableSubjects = jsonAttribution.subjects;
		
		async.forEach(tableSubjects, parseSubjects, afterParseSubjects);
		
		function parseSubjects(jsonSubjectTeachers, callback2) {
		
			var stringSubject = jsonSubjectTeachers.subjectName;
			var stringTeacher = jsonSubjectTeachers.teacher.firstName + ' ' + jsonSubjectTeachers.teacher.lastName;
			
			var i = 0;
			var jsonClass = jsonProgram.classes[i];
			
			while (jsonClass.name.localeCompare(stringClass) !== 0) {
				
				i++;
				
				if (i >= jsonProgram.classes.length) {					
					throw 'ERROR : builder::parseSubjects : la classe ' + stringClass + ' n\'existe pas';
				}
				
				jsonClass = jsonProgram.classes[i];
			}
			
			var stringYear = jsonClass.year;
			
			i = 0;
			var jsonUnderProgram = jsonProgram.programme[i];
			
			while (jsonUnderProgram.year.localeCompare(stringYear) !== 0) {
				
				i++;
				
				if (i >= jsonProgram.programme.length) {					
					throw 'ERROR : builder::parseSubjects : l\'annee ' + stringYear + ' n\'a pas de programme';
				}
				
				jsonUnderProgram = jsonProgram.programme[i];
			}
			
			i = 0;
			var jsonUnderUnderProgram = jsonUnderProgram.programme[i];
			
			while (jsonUnderUnderProgram.subject.localeCompare(stringSubject) !== 0) {
				
				i++;
				
				if (i >= jsonUnderProgram.programme.length) {					
					throw 'ERROR : builder::parseSubjects : le sujet ' + stringSubject + 'n\'est pas etudiee pour l\'annee ' + stringYear;
				}
				
				jsonUnderUnderProgram = jsonUnderProgram.programme[i];
			}
			
			var numberWeekHours = jsonUnderUnderProgram.weekHours;
			
			outputJsonGenerator.addActivity(stringTeacher, stringSubject, stringClass, 1, numberWeekHours, '')
			callback2();
		}
		
		function afterParseSubjects(err) {
		
			if(err) {
				
				console.error('ERREUR : attribution.js::parse :' + err);
			}
			
			callback1();
		}
}

exports.parse = parse;