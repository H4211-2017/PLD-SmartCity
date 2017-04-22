var http = require('http');
var express = require('express');
var fs = require('fs');
var port = 8080;

var app = express();

app.get('/', function(request, response) {
	
	fs.readFile('../IHM/app/index.html', function (err, data) {
		
		if (err) {
			
			throw 'ERREUR : lecture du fichier index.html' + err;
		}
		
		response.writeHead(200, {"Content-Type": "text/html"});
		response.write(data);
		response.end();
	});
	
	console.log(request.url);
	console.log('utilisateur connecté');
});

app.use(function(err, request, response, next) {
	
	console.log(err);
	response.status(500).send('Erreur du serveur : ', err);
	response.end();
});

app.listen(port, function (err) {
	
	if (err) {
		return console.log('ERROR', err);
	}
});