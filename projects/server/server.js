const http = require('http');
const express = require('express');
const session = require('express-session');
const MongoStore = require('connect-mongo')(session);

var service = require('./service/service');

const app = express();
const port = 3000;

var ihmPath = __dirname.slice(0, -6) + 'IHM/app'; // ../IHM/app
var testPath = __dirname + '/htmlTest';

app.use(express.static(testPath));
app.use(express.static(ihmPath));

app.use(session({

    secret: 'qusfgI7808yuigkjgh45454222guigigLULUYFTYDUF',
    store: new MongoStore({
		url: 'mongodb://localhost:27017/test-app',
		autoRemove: 'native' // Default
    })
}));



app.get('/logout', function(request, response) {

	var sess = request.session;
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
	if(!sess.institutionName){
		sess.institutionName = institutionName;
		sess.configs = [];
		console.log(sess.institutionName);
	}
});

// method to adapt the path to the pc which I work
var repositoryPath = __dirname.slice(0, -16);
// 'C:/Users/PL/git/PLD-SmartCity (projects/server)';

app.get('/generate', function(request, response) {

	var sess = request.session;
	
	if (sess.data && sess.schoolName) {
		
		var outputFile = repositoryPath + '/projects/resources/' + sess.schoolName + '/';
		var outputDir = repositoryPath + '/projects/resources/outServer';
	
		service.generateTimetable(sess.data, outputFile, outputDir, callback);
	
	} else {
		
		response.send('veuillez vous connecter avant de générer l\'emploi du temps');
	}
	
	function callback(result) {
		
		if(result.length != 0) {
		
			response.send(result);
				
		} else {
		
			response.send('Donnees de l\'emploi du temps dans le dossier : ' + outputDir);
		}	
	}
});


app.post('/configs', function(request, response){
	var sess = request.session;
	sess.configs = request.body;
});


app.get('/configs', function(request, response) {

	var sess = request.session;
	response.send(session.configs);
	/*
	service.readConfigurations(ihmPath + '/resources/' + request.params.institutionName + '/.__configs.json', function(string) {
	
		response.send(string);
	});
	*/
});

app.get('/display', function(request, response) {

	var sess = request.session;
	
	if (sess.schoolName) {
	
		response.sendFile();
	
	} else {
		
		response.send('veuillez vous connecter avant de générer l\'emploi du temps');
	}
	
	function callback(result) {
		
		if(result.length != 0) {
		
			response.send(result);
				
		} else {
		
			response.send('Donnees de l\'emploi du temps dans le dossier : ' + outputDir);
		}	
	}
});

app.listen(port, function(err) {

	if (err) {
	
		return console.log('quelque chose de mauvais est arrivé : ', err);
	}

	console.log('le serveur écoute sur le port ' + port);
});
