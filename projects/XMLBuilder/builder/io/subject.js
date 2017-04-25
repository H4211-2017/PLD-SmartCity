var parse = function(jsonSubject, outputJsonGenerator, callback) {
	
	var stringSubjectName = jsonSubject.name;

	outputJsonGenerator.addSubject(stringSubjectName, '');
	
	callback();
}

exports.parse = parse;