var async = require('async'); 
var extendTable = require('extendTable');

var parse = function(jsonTeacher, tableHours, outputJsonGenerator, callback) {

	var stringName = jsonTeacher.firstName + ' ' + jsonTeacher.lastName;
	var stringComments = ((jsonTeacher.comments == '') ? '' : jsonTeacher.comments);
	outputJsonGenerator.addTeacher(stringName, '0', stringComments);
	
	//TODO Constraints of classes

	var tableNotAvailableDayHour = [];
	
	async.forEach(jsonTeacher.unavaibility, function(unavaibility, callback1) {
		
		async.forEach(unavaibility.hoursSlot, function(index, callback2) {
			
			var notAvailableDayHour = {
				day: unavaibility.dayName, 
				hour: (tableHours[index].start + ' - ' + tableHours[index].end) 
			};
				
			tableNotAvailableDayHour.push(notAvailableDayHour);
		
			callback2();	
				
		}, function(err) {
			
			callback1();
		})
		
	}, function(err) {
		
		outputJsonGenerator.addTeacherNotAvailableTime(stringName, tableNotAvailableDayHour, 100, true, '', callback);
	});		
}

exports.parse = parse;
