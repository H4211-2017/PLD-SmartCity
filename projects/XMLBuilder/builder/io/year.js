var parse = function(stringYear, outputJsonGenerator, callback) {
	
	outputJsonGenerator.addYear(stringYear, 0, '');
	
	callback();
}

exports.parse = parse;