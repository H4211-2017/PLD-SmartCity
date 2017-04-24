var parse = function(jsonRoom, outputJsonGenerator, callback1) {
		
	var stringName = jsonRoom.name;
	var intCapacity = (jsonRoom.capacity) ? jsonRoom.capacity : 30000;
	
	outputJsonGenerator.addRoom(stringName, '', intCapacity, '');
	
	//TODO contraints of rooms types
	
	callback1();
}

exports.parse = parse;