var parse = function(jsonDay, callback) {
	
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

exports.parse = parse;