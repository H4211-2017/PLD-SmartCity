"use strict";

var fs = require('fs');
var builder = require('./builder');
var fileGenerator = require('../file/fileGenerator');

// very dirty method to adapt to the pc which I work
var repositoryPath = '/home/pl/git/pld-smartcity/PLD-SmartCity';
// 'C:/Users/PL/git/PLD-SmartCity';

var inputFile = repositoryPath + '/projects/IHM/app/resources/toXML.json';

var outputFile = repositoryPath + '/projects/resources/gen.fet';

fs.readFile(inputFile, function(err, data) {
	
	if (err) {
			
		throw 'ERREUR : builderTest::readFile : lecture du fichier toXML.json : ' + err;
	}
	
	var jsonObjectEntry = JSON.parse(data);

	var outputXml = builder.jsonObjectEntryToXml(jsonObjectEntry);
	
	console.log(outputXml);

	fileGenerator.saveStringAs(outputXml, outputFile);
});
