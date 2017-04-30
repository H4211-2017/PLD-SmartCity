var shell = require('shelljs');

var callfet = function(stringInputFile, stringOutputDir) {

	shell.exec(__dirname + '/fet/fet-cl --inputfile=' + stringInputFile + ' --outputdir=' + stringOutputDir);
	//shell.exit(0); 
}

exports.callfet = callfet;
