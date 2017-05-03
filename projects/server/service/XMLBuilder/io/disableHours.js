var async = require('async');

var parse = function(tableDisableHours, outputJsonGenerator, callback) {
	
	tableBreakDayHour = [];
	
	async.forEach(tableDisableHours, function(disableHour, callback1) {
	
		var breakDayHour = {
			day: disableHour.day,
			hour: disableHour.hourSlot.start + ' - ' + disableHour.hourSlot.end
		}
			
		tableBreakDayHour.push(breakDayHour);
		callback1();
		
	}, function(err) {
	
		if(err) {
				
			console.error('ERREUR : disableHours.js::parse : ' + err);
		}
		
		outputJsonGenerator.addBreakTimes(tableBreakDayHour, 100, true, '', callback);
	});
}

exports.parse = parse;