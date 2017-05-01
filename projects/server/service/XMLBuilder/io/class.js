var parse = function(jsonClass, outputJsonGenerator, callback) {
	
	var stringYear = jsonClass.year;
	var stringClassName = jsonClass.name;
	var numberOfStudents = (jsonClass.studentsNumber) ? jsonClass.studentsNumber : 0;
	
	outputJsonGenerator.addGroup(stringYear, stringClassName, numberOfStudents, '');
	callback();
}

exports.parse = parse;