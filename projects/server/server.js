const http = require('http');
const express = require('express');
const session = require('express-session');
const MongoStore = require('connect-mongo')(session);
const mongoose = require('mongoose');


var service = require('./service/service');

const app = express();
const port = 3000;

var ihmPath = __dirname.slice(0, -6) + 'IHM/app'; // ../IHM/app
var testPath = __dirname + '/htmlTest';

var parametreEtoile = {typeSalle:["TP","linux","TD","normale"]};

mongoose.connect('mongodb://localhost:27017/test-app');

//Check for etablissements collection existence
mongoose.connection.db.listCollections({name: 'etablissements'})
    .next(function(err, collinfo) {
        if (collinfo) {
            // The collection exists
        }
        else{
        	//The collection doesn't exist we create its
			var etablissementSchema = mongoose.Schema({name:String, configs:Array});
			var etablissementModel = mongoose.model('etablissements', etablissementSchemas);
		}
    });





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

	var sess = request.session;
	sess.typeSalle.push(sess.compteur);
	sess.compteur++;
 	response.send(JSON.stringify(sess.typeSalle));
});

app.post('/typesalle', function(request, response) {

	console.log(req.body);
});

app.get('/logout', function(request, response) {

	var sess = request.session;
	sess.destroy();
	response.send('logged out');
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
	
	response.sendFile(ihmPath + '/indexClient.html');
});

// method to adapt the path to the pc which I work
var repositoryPath = __dirname.slice(0, -16);
// 'C:/Users/PL/git/PLD-SmartCity (projects/server)';

var outputFile = repositoryPath + '/projects/resources/server.fet';
var outputDir = repositoryPath + '/projects/resources/outServer';

app.get('/input?', function(request, response) {
	
	service.generateTimetable(request.query.input, outputFile, outputDir, callback);
	
	function callback(result) {
		
		if(result.length != 0) {
		
			response.send(result);
				
		} else {
		
			response.send('Donnees de l\'emploi du temps dans le dossier : ' + outputDir);
		}	
	}
});

app.get('/resources/:institutionName/getConfig', function(request, response) {

	service.readConfigurations(ihmPath + '/resources/' + request.params.institutionName + '/.__configs.json', function(string) {
	
		response.send(string);
	});
});

app.listen(port, function(err) {

	if (err) {
	
		return console.log('quelque chose de mauvais est arrivé : ', err);
	}

	console.log('le serveur écoute sur le port ' + port);
});
