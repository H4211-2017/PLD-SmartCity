var async = require('async'); 
var extendTable = require('extendTable');

var parse = function(jsonTeacher, tableSchedule, outputJsonGenerator, callback) {

	var stringName = jsonTeacher.firstName + ' ' + jsonTeacher.lastName;
	var stringComments = ((jsonTeacher.comments == '') ? '' : jsonTeacher.comments);
	outputJsonGenerator.addTeacher(stringName, '0', stringComments);
	
	//TODO Constraints of classes

	var tableNotAvailableDayHour = [];
	
	async.forEach(jsonTeacher.disponibility, function(jsonDisponibility, callback1) {
		
		var i = 0;
		var jsonDay = tableSchedule.find(function(element) {
			return element.dayName === jsonDisponibility.dayName;
		});
		
		if (!jsonDay) {
			
			throw 'ERREUR : teacher.js::parse : professeur : ' + stringName + ', le jour : ' + jsonDisponibility.dayName + ' n\'existe pas pour cet emploi du temps'
				
		}
		
		async.forEachOf(jsonDay.hours, function(hour, index, callback2) {
			
			if (!jsonDisponibility.hoursSlot.includes(index)) {
				
				var notAvailableDayHour = {
				day: jsonDay.dayName, 
				hour: (hour.start + ' - ' + hour.end) };
					
				tableNotAvailableDayHour.push(notAvailableDayHour);
			}
			
			callback2();	
				
		}, function(err) {
			
			callback1();
		})
		
	}, function(err) {
		
		outputJsonGenerator.addTeacherNotAvailableTime(stringName, tableNotAvailableDayHour, 100, true, '', callback);

	});		
}

exports.parse = parse;
