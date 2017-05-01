var async = require('async');
var extendTable = require('extendTable');

var parse = function(jsonSubject, tableRooms, outputJsonGenerator, callback) {
	
	// TODO test exitence of typeRoom
	
	var stringSubjectName = jsonSubject.name;

	outputJsonGenerator.addSubject(stringSubjectName, '');
	
	var tablePreferredRoom = [];
		
	async.forEach(tableRooms, function(jsonRoom, callback1) {
		
		if (jsonRoom.roomTypes.includes(jsonSubject.roomType)) {
			
			tablePreferredRoom.push(jsonRoom.name);
		}
		
		callback1();
		
	}, function(err) {
	
		outputJsonGenerator.addSubjectPreferredRoom(stringSubjectName, tablePreferredRoom, 100, true, '', callback);
	});	
}

exports.parse = parse;
