var parse = function(stringDay, outputJsonGenerator, callback) {
	
	outputJsonGenerator.addDay(stringDay);
	callback();
}

exports.parse = parse;