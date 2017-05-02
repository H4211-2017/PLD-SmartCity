var parse = function(jsonDay, outputJsonGenerator, callback) {
	
	var dayName = jsonDay.dayName;
	outputJsonGenerator.addDay(dayName);
	callback();
}

exports.parse = parse;