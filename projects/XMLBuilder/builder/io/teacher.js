var parse = function(jsonTeacher, outputJsonGenerator, callback) {

	var stringName = jsonTeacher.firstName + ' ' + jsonTeacher.lastName;
	var stringComments = ((jsonTeacher.comments == '') ? '' : jsonTeacher.comments);
	outputJsonGenerator.addTeacher(stringName, '0', stringComments);
	
	//TODO Constraints of classes
	//TODO Constraints of Disponibility
	
	callback();
}

exports.parse = parse;