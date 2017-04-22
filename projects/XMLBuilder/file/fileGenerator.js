var fs = require('fs');
var saveStringAs = function(string, stringFileName) {

	fs.writeFile(stringFileName, string, function(err) {
		
		if (err) throw 'ERROR : fileGenerator::saveStringAs : ' + err;
	});
}

exports.saveStringAs = saveStringAs;