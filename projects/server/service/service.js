var builder = require('./XMLBuilder/builder');
var fileGenerator = require('./file/fileGenerator');
var fileReader = require('./file/fileReader');
var run = require('./fet-calling/run');

var generateTimetable = function(stringInput, outputFetFile, outputDir, callback) {

	try {
	
		var jsonInput = JSON.parse(stringInput);
		var outputXML = builder.jsonObjectEntryToXml(jsonInput);
		console.log(outputXML.slice(0, 188) + '\n...');
		fileGenerator.saveStringAs(outputXML, outputFetFile);
		run.callfet(outputFetFile, outputDir, callback);
	
	} catch (err) {
		
		console.error(err);
		callback(err);
	}
}

var readConfigurations = function(stringFile, callback) {
	
	try {
	
		fileReader.readStringFrom(stringFile, callback);
	
	} catch (err) {
		
		console.error(err);
		callback(err);
	}
}

exports.generateTimetable = generateTimetable;
exports.readConfigurations = readConfigurations;
