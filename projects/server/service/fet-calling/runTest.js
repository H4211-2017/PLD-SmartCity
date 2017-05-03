var run = require('./run');

// adapt to the pc which the server work
var repositoryPath = __dirname.slice(0, -36);
// 'C:/Users/PL/git/PLD-SmartCity (/projects/server/service/fet-calling)';

var inputFile = repositoryPath + '/projects/resources/gen.fet';

var outputDir = repositoryPath + '/projects/resources/out';

run.callfet(inputFile, outputDir, function(err) {
	
	if(err.localeCompare('')) {
		
		console.error(err);
	}
});
