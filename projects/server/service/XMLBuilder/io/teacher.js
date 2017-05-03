var async = require('async'); 
var extendTable = require('extendTable');

var parse = function(jsonTeacher, tableHours, outputJsonGenerator, callback) {

	var stringName = jsonTeacher.firstName + ' ' + jsonTeacher.lastName;
	var stringComments = ((jsonTeacher.comments == '') ? '' : jsonTeacher.comments);
	outputJsonGenerator.addTeacher(stringName, '0', stringComments);
	
	//TODO Constraints of classes

	var tableNotAvailableDayHour = [];
	
	async.forEach(jsonTeacher.disponibility, function(jsonDisponibility, callback1) {
		
		async.forEachOf(tableHours, function(hour, index, callback2) {
			
			if (!jsonDisponibility.hoursSlot.includes(index)) {
				
				var notAvailableDayHour = {
					day: jsonDisponibility.dayName, 
					hour: (hour.start + ' - ' + hour.end) 
				};
					
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
