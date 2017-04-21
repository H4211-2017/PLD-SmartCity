var fileGenerator = require('./fileGenerator');
var builder = require('./builder');
var outputGenerator = require('./outputGenerator');
var toXml = builder.jsonToXml(outputGenerator.OutputJsonGenerator.outputJsonObject);

fileGenerator.saveStringAs('Hello Wolrd !', './helloWorld.txt');
fileGenerator.saveStringAs(toXml, './test.fet');