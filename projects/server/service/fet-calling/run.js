var shell = require('shelljs');

var callfet = function(stringInputFile, stringOutputDir, callback) {

	shell.exec(__dirname + '/fet/fet-cl --inputfile=' + stringInputFile + ' --outputdir=' + stringOutputDir, function(code, stdout, stderr) {
	
		if (code != 0) {
		
			console.error('ERREUR : run.js:callfet : impossible de completer la génération de l\'emploi du temps par fet' + stderr);
		
		}
		
		callback();
	});
}

exports.callfet = callfet;
