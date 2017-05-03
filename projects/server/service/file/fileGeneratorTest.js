var fileGenerator = require('./fileGenerator');
var builder = require('../builder');
var outputGenerator = require('../output/outputGenerator');
var toXml = builder.jsonToXml(outputGenerator.OutputJsonGenerator.outputJsonObject);

fileGenerator.saveStringAs('Hello Wolrd !', '../resources/helloWorld.txt');
fileGenerator.saveStringAs(toXml, '../resources/test.fet');