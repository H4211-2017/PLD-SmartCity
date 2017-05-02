var parse = function(jsonHour, outputJsonGenerator, callback) {
	
	var hourName = jsonHour.start + ' - ' + jsonHour.end;
	outputJsonGenerator.addDay(hourName);
	callback();
}

exports.parse = parse;