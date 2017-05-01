var builder = require('./service/XMLBuilder/builder');
var fileGenerator = require('./service/file/fileGenerator');
var run = require('./service/fet-calling/run');

var generateTimetable = function(stringInput, outputFetFile, outputDir, callback) {

	try {
	
		var jsonInput = JSON.parse(stringInput);
		var outputXML = builder.jsonObjectEntryToXml(jsonInput);
		console.log(outputXML);
		fileGenerator.saveStringAs(outputXML, outputFetFile);
		run.callfet(outputFetFile, outputDir, callback);
	
	} catch (err) {
		
		console.error(err);
		callback();
	}
}

exports.generateTimetable = generateTimetable;
