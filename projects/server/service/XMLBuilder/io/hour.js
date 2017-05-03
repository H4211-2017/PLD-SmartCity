var parse = function(jsonHour, outputJsonGenerator, callback) {
	
	var hourName = jsonHour.start + ' - ' + jsonHour.end;
	outputJsonGenerator.addHour(hourName);
	callback();
}

exports.parse = parse;