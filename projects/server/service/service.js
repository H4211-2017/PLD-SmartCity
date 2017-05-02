var builder = require('./XMLBuilder/builder');
var fileGenerator = require('./file/fileGenerator');
var fileReader = require('./file/fileReader');
var run = require('./fet-calling/run');
var oxhr = require('./xhr/oXHR');

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

var getAngularIHM = function(callback) {
	
	try {
		
		var xhr = oxhr.getXMLHttpRequest();
		
		xhr.onreadystatechange = function() {

			if (xhr.readyState == 4 && (xhr.status == 200 || xhr.status == 0)) {
			
				callback(xhr);	
			}
		};
		
		xhr.open('GET', 'http://localhost:8000/indexClient.html', true);
		xhr.send();
		
	} catch (err) {
	
		console.error(err);
		callback();
	}
}

exports.generateTimetable = generateTimetable;
exports.readConfigurations = readConfigurations;
