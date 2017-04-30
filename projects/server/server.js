const http = require('http');
const express = require('express');
const session = require('express-session');
const MongoStore = require('connect-mongo')(session);

var builder = require('../XMLBuilder/builder/builder');
var fileGenerator = require('../XMLBuilder/file/fileGenerator');
var run = require('../fet-calling/run');

// very dirty method to adapt to the pc which I work
var repositoryPath = '/home/pl/git/pld-smartcity/PLD-SmartCity';
// 'C:/Users/PL/git/PLD-SmartCity';

var outputFile = repositoryPath + '/projects/resources/server.fet';
var outputDir = repositoryPath + '/projects/resources/outServer';

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

app.get('/input?', function(request, response) {

	var inputJson = JSON.parse(request.query.input);
	var outputXML = builder.jsonObjectEntryToXml(inputJson);
	console.log(outputXML);
	fileGenerator.saveStringAs(outputXML, outputFile);
	run.callfet(outputFile, outputDir);
	
	response.end('Donnees de l\'emploi du temps dans ' + outputDir);
});

app.listen(port, function(err) {

	if (err) {
	
		return console.log('something bad happened', err);
	}

	console.log(`server is listening on ${port}`);
});
