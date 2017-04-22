"use strict";

var fs = require('fs');
var builder = require('./builder');
var fileGenerator = require('./fileGenerator');

var outputFile = 'C:/Users/PL/git/PLD-SmartCity/projects/XMLBuilder/resources/gen.fet';

fs.readFile('C:/Users/PL/git/PLD-SmartCity/projects/IHM/app/resources/toXML.json', function(err, data) {
	
	if (err) {
			
		throw 'ERREUR : builderTest::readFile : lecture du fichier toXML.json : ' + err;
	}
	
	var jsonObjectEntry = JSON.parse(data);
	var  outputXml = builder.jsonObjectEntryToXml(jsonObjectEntry);
	
	console.log(outputXml);

	fileGenerator.saveStringAs(outputXml, outputFile);
});
