const http = require('http');
const express = require('express');
const session = require('express-session');
const MongoStore = require('connect-mongo')(session);
const bodyParser = require('body-parser');

var service = require('./service/service');

const app = express();
const port = 3000;

// method to adapt the path to the pc which I work
var repositoryPath = __dirname.slice(0, -16);
// 'C:/Users/PL/git/PLD-SmartCity (projects/server)';
var ihmPath = __dirname.slice(0, -6) + 'IHM/app'; // ../IHM/app
var testPath = __dirname + '/htmlTest';

app.use(express.static(testPath));
app.use(express.static(ihmPath));
app.use(bodyParser.json());

app.use(session({

    secret: 'qusfgI7808yuigkjgh45454222guigigLULUYFTYDUF',
    store: new MongoStore({
		url: 'mongodb://localhost:27017/test-app',
		autoRemove: 'native' // Default
    })
}));

app.get('/logout', function(request, response) {

	var sess = request.session;
	console.log(sess.institutionName + ' logged out');
	sess.destroy();
	response.send('logged out');
});

app.get('/', function(request, response){

	var sess = request.session;
	var message = 'requete GET sur l\'index';
	console.log(message);
	
	response.sendFile(ihmPath + '/indexClient.html');
});

app.get('/login?', function(request, response){
	
	var sess = request.session;
	var institutionName = request.query.schoolname;
	
	console.log('login :');
	
	if(!sess.institutionName){
		sess.institutionName = institutionName;
		sess.configs = [];
		sess.data = {};
		console.log(sess.institutionName);
	}
	
	response.send('logged');
});

app.get('/data?', function(request, response) {
	
	var sess = request.session;
	var config = request.query.config;
	
	if(sess.institutionName) {
		
		if (sess.data[config]) {
		
			response.json(data[config]);
	
		} else {
	
			response.send(404, 'configuration inconnue...');
		}
		
	} else {
		
		response.send(401, 'indentification requise');
	}
});

app.post('/data?', function(request, response){
	
	var sess = request.session;
	var config = request.query.config;
	
	console.log('posted');
	console.log(request.body);
	
	if(sess.institutionName){
		
		sess.data[config] = request.body;
		sess.configs.push(config);
		console.log(sess.data);
		response.end(200);
		
	} else {
		
		response.send(401, 'indentification requise');
	}
});

app.get('/generate', function(request, response) {

	var sess = request.session;
	
	if (sess.data && sess.institutionName) {
		
		var outputFile = repositoryPath + '/projects/resources/xmlFet/' + sess.institutionName + '.fet';
		var outputDir = repositoryPath + '/projects/resources/output';
	
		service.generateTimetable(sess.data, outputFile, outputDir, callback);
	
	} else {
		
		response.send('veuillez vous connecter avant de générer l\'emploi du temps');
	}
	
	function callback(result) {
		
		if(result.length != 0) {
		
			response.send(result);
				
		} else {
		
			response.send(200, 'Données de l\'emploi du temps generées');
		}	
	}
});


// TODO useless ?
app.post('/configs', function(request, response){
	
	var sess = request.session;
	
	if(sess.institutionName) {
		
		sess.configs = request.body;
		response.end(200);
	
	} else {
		
		response.send(401, 'indentification requise');
	}
});

app.get('/configs', function(request, response) {

	var sess = request.session;
	
	if(sess.institutionName) {
	
		response.json(session.configs);
	
	} else {
		
		response.send(401, 'indentification requise');
	}
	/*
	service.readConfigurations(ihmPath + '/resources/' + request.params.institutionName + '/.__configs.json', function(string) {
	
		response.send(string);
	});
	*/
});

app.get('/display', function(request, response) {

	var sess = request.session;
	
	if (sess.institutionName) {
	
		var timeTableIndexPath = repositoryPath + '/projects/resources/output/timetables/' + sess.institutionName + '/' + institutionName + '_index.html';
		response.sendFile(timeTableIndexPath);
	
	} else {
		
		response.send('Veuillez vous connecter avant de demander l\'emploi du temps');
	}
});

app.listen(port, function(err) {

	if (err) {
	
		return console.log('quelque chose de mauvais est arrivé : ', err);
	}

	console.log('le serveur écoute sur le port ' + port);
});
