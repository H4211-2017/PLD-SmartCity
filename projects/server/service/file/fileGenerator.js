var fs = require('fs');
var saveStringAs = function(string, stringFileName, callback) {

	fs.writeFile(stringFileName, string, function(err) {
		
		if (err) {
			
			callback('ERROR : fileGenerator::saveStringAs : ' + err);
		
		} else {
			
			callback('');
		}
	});
}

exports.saveStringAs = saveStringAs;