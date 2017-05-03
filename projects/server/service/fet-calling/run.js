var shell = require('shelljs');

var language = 'fr';
var os = 'win';

var callfet = function(stringInputFile, stringOutputDir, callback) {

	var slash = (os = 'win') ? '\\' : '/';

	shell.exec(__dirname + '/fet-' + os + '/fet-cl --inputfile=' + stringInputFile + ' --outputdir=' + stringOutputDir + ' --language=' + language + ' --verbose=true', function(code, stdout, stderr) {
	
		if (code != 0) {
		
			shell.exec(__dirname + '/fet-' + os + '/fet-cl --inputfile=' + stringInputFile + ' --outputdir=' + stringOutputDir + ' --language=' + language + ' --verbose=true', function(code, stdout, stderr) {
				
				if (code != 0) {
		
					console.error('ERREUR : run.js:callfet : impossible de completer la génération de l\'emploi du temps par fet' + stderr);
					callback(stdout);
			
				} else {
		
					callback('');
				}
			});
			
		} else {
			
			callback('');
		}
	});
}

exports.callfet = callfet;
