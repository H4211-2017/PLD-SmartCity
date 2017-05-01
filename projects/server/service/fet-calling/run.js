var shell = require('shelljs');

var language = 'fr';

var callfet = function(stringInputFile, stringOutputDir, callback) {

	shell.exec(__dirname + '/fet/fet-cl --inputfile=' + stringInputFile + ' --outputdir=' + stringOutputDir + ' --language=' + language + ' --verbose=true', function(code, stdout, stderr) {
	
		if (code != 0) {
		
			shell.exec(__dirname + '/fet/fet-cl --inputfile=' + stringInputFile + ' --outputdir=' + stringOutputDir + ' --language=' + language + ' --verbose=true', function(code, stdout, stderr) {
				
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
