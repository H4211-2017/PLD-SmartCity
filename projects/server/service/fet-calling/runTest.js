var run = require('./run');

// very dirty method to adapt to the pc which I work
var repositoryPath = '/home/pl/git/pld-smartcity/PLD-SmartCity';
// 'C:/Users/PL/git/PLD-SmartCity';

var inputFile = repositoryPath + '/projects/resources/gen.fet';

var outputDir = repositoryPath + '/projects/resources/out';

run.callfet(inputFile, outputDir);
