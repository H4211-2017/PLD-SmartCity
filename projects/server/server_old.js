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

app.get('/', function(request, response){

	var sess = request.session;
	var message = 'requete GET sur l\'index';
	console.log(message);
	
	response.sendFile(ihmPath + '/indexClient.html');
});

app.get('/login?', function(request, response){
	
	var sess = request.session;
	var institutionName = request.query.schoolname;
	var mdp = request.query.mdp
	
	console.log('login :');
	
	if(!sess.institutionName){
		
		sess.institutionName = institutionName;
		sess.mdp = mdp;
		sess.configs = [ '__exemple' ];
		sess.data = {};
		
		service.readJsonConfig(ihmPath + '/resources/toXML.json', function(json) {
			
			sess.data.__exemple = json;
			console.log(sess.institutionName);
			response.status(200).send('logged');
		});
		
	} else {
	
		response.status(200).send('already logged');
	}
});

app.get('/logout', function(request, response) {

	var sess = request.session;
	console.log(sess.institutionName + ' logged out');
	sess.destroy();
	response.send('logged out');
});

app.get('/relog', function(request, response) {
	
	var sess = request.session;
	
	res = {	schoolname: sess.institutionName,
			mdp: sess.mdp,
			lastConfig: sess.lastConfig
	};
	
	console.log(res);
	
	response.status(200).json(res);
});

app.get('/configs', function(request, response) {

	var sess = request.session;
	
	if(sess.institutionName) {
	
		response.status(200).json(sess.configs);
	
	} else {
		
		response.status(401).send('indentification requise');
	}
	/*
	service.readConfigurations(ihmPath + '/resources/' + request.params.institutionName + '/.__configs.json', function(string) {
	
		response.send(string);
	});
	*/
});

app.get('/data?', function(request, response) {
	
	var sess = request.session;
	var config = request.query.config;
	
	if(sess.institutionName) {
		
		if (sess.data[config]) {
		
			sess.lastConfig = config;
			response.status(200).json(sess.data[config]);
	
		} else {
	
			response.status(404).send('configuration inconnue...');
		}
		
	} else {
		
		response.status(401).send('indentification requise');
	}
});

app.post('/data?', function(request, response){
	
	var sess = request.session;
	var config = request.query.config;
	
	console.log('Posted :');
	console.log(request.body);
	
	if(sess.institutionName){
		
		console.log('Saved :');
		sess.data[config] = request.body;
		sess.configs.push(config);
		console.log(sess.data);
		response.status(200).end();
		
	} else {
		
		response.status(401).send('indentification requise');
	}
});

app.post('/generate', function(request, response) {

	var sess = request.session;
	var data = request.body;
	
	if (data && sess.institutionName) {
		
		var outputFile = repositoryPath + '/projects/resources/xmlFet/' + sess.institutionName + '.fet';
		var outputDir = repositoryPath + '/projects/resources/output';
	
		service.generateTimetable(data, outputFile, outputDir, callback);
		
		response.status(201).send('emploi du temps généré, vous pourrez le récupérer');
	
	} else {
		
		var outputFile = repositoryPath + '/projects/resources/xmlFet/withoutSession.fet';
		var outputDir = repositoryPath + '/projects/resources/output';
	
		service.generateTimetable(data, outputFile, outputDir, callback);
		
		response.status(201).send('emploi du temps généré, vous ne pourrez le récupérer que maintenant');
	}
	
	function callback(result) {
		
		if(result.length != 0) {
		
			response.status(500).send(result);
		
		} else {
		
			response.status(201).send('Données de l\'emploi du temps generées');
		}	
	}
});

app.get('/display', function(request, response) {

	var sess = request.session;
	
	if (sess.institutionName) {
	
		var timeTableIndexPath = repositoryPath + '/projects/resources/output/timetables/' + sess.institutionName + '/' + institutionName + '_index.html';
		response.sendFile(timeTableIndexPath);
	
	} else {
		
		var timeTableIndexPath = repositoryPath + '/projects/resources/output/timetables/withoutSession/withoutSession_index.html';
		response.status(200).sendFile(timeTableIndexPath);
	}
});

app.listen(port, function(err) {

	if (err) {
	
		return console.log('quelque chose de mauvais est arrivé : ', err);
	}

	console.log('le serveur écoute sur le port ' + port);
});
