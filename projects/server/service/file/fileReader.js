var fs = require('fs');

var readStringFrom = function(stringFileName, callback) {

	fs.readFile(stringFileName, function(err, data) {
		
		if (err) {
			
			throw 'ERROR : fileGenerator::readStringFrom : ' + err;
		}
		
		callback(data);
	});
}

exports.readStringFrom = readStringFrom;
