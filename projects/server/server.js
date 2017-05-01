const http = require('http');
const express = require('express');
const session = require('express-session');
const MongoStore = require('connect-mongo')(session);

var service = require('./service');

const app = express();
const port = 3000;

var ihmPath = __dirname.slice(0, -6) + 'IHM/app'; // ../IHM/app
var testPath = __dirname + '/htmlTest';

var parametreEtoile = {typeSalle:["TP","linux","TD","normale"]};

app.use(express.static(testPath));
app.use(express.static(ihmPath));

app.use(session({

    secret: 'secretCat',
    store: new MongoStore({
      url: 'mongodb://localhost:27017/test-app',
      autoRemove: 'native' // Default
    })
}));

app.get('/typesalle', function(request, response) {

	var sess  = request.session
	sess.typeSalle.push(sess.compteur);
	sess.compteur++;
 	response.send(JSON.stringify(sess.typeSalle));
});

app.post('/typesalle', function(request, response) {

	console.log(req.body);
});

app.get('/logout', function(request, response) {

	var sess = request.session
	sess.destroy()
	response.send('loged out')
});

app.get('/', function(request, response){

	var sess = request.session;
	var message = '<h4>Serveur test Etoile</h4>\n';
	message += sess.typeSalle;
	
	if(sess.connected) {
	
		message += 'votre session existe';
		
	} else {
	
		sess.connected = true;
		message += "votre session n'existe pas";
		sess.typeSalle = [];
		sess.compteur = 0;
	}
	
	console.log(message);
	
	response.sendFile(testPath + '/indexTest.html');
});

// method to adapt the path to the pc which I work
var repositoryPath = __dirname.slice(0, -16);
// 'C:/Users/PL/git/PLD-SmartCity (projects/server)';

var outputFile = repositoryPath + '/projects/resources/server.fet';
var outputDir = repositoryPath + '/projects/resources/outServer';

app.get('/input?', function(request, response) {

	service.generateTimetable(request.query.input, outputFile, outputDir, callback);
	
	function callback() {
	
		response.end('Donnees de l\'emploi du temps dans un certain dossier ;p ');
	}
});

app.listen(port, function(err) {

	if (err) {
	
		return console.log('quelque chose de mauvais est arrivé : ', err);
	}

	console.log('le serveur écoute sur le port ' + port);
});
