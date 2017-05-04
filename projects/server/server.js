const http = require('http');
const express = require('express');
const session = require('express-session');
const MongoStore = require('connect-mongo')(session);
const bodyParser = require('body-parser');
const mongoose = require('mongoose');

mongoose.connect('mongodb://localhost/database-etoile', function(err) {
  if (err) { throw err; }
});
const app = express();
const port = 3000;

var service = require('./service/service');

var opts

var schema = mongoose.Schema({
	institutionName:String,
	data:{},
	configs:[String]
},
{
  minimize:false
});
var etoileData = mongoose.model('etoileData',schema);

// method to adapt the path to the pc which I work
var repositoryPath = __dirname.slice(0, -16);
// 'C:/Users/PL/git/PLD-SmartCity (projects/server)';
var ihmPath = __dirname.slice(0, -6) + 'IHM/app'; // ../IHM/app
var testPath = __dirname + '/htmlTest';
var outputPath = __dirname.slice(0, -6) + '/resources/output';

app.use(express.static(testPath));
app.use(express.static(ihmPath));
app.use(express.static(outputPath));
app.use(bodyParser.json());

app.use(session({

    secret: 'qusfgI7808yuigkjgh45454222guigigLULUYFTYDUF',
    store: new MongoStore({
		url: 'mongodb://localhost:27017/sessions-etoile',
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
	var institutionNameString = request.query.schoolname;

	console.log('login :');

	if(!sess.institutionName){

		console.log(sess.institutionName);
		etoileData.findOne({institutionName:institutionNameString},function(err, pers){

			if(!err)
			{
				sess.institutionName = institutionNameString;

				if(pers)
				{
					console.log("server.js line 102 already exists "+pers);

					response.status(200).send('already logged');
				}
				else
				{
					console.log("server.js line 106 doesn't exist yet, creating");

					service.readJsonConfig(ihmPath + '/resources/validJSONFile.json', function(json) {

						var newSchool = etoileData({

							institutionName: institutionNameString,
							data: {},
							configs: [ '__exemple' ]
						});

						newSchool.data.__exemple = json;
						response.status(200).send('logged');

						newSchool.save();
					});
				}
			} else {

				response.status(500).send(err);
			}
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
    etoileData.findOne({institutionName:sess.institutionName},function(err, pers){
          if(!err)
          {
            if(pers)
            {
              console.log("server.js line 258 "+JSON.stringify(pers.configs));
              response.status(200).json(pers.configs);
            }
            else{
              response.status(401).send("user not found");
            }
          }
          else {
            response.status(401).send(err);
          }
        });
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

		etoileData.findOne({institutionName:sess.institutionName},function(err, pers){
			if(!err)
			{
				if(pers)
				{
					if (pers.data[config]) {
					response.status(200).json(pers.data[config]);
					} else {
					response.status(404).send('configuration inconnue...');
					}
				}
			} else {

				response.status(500).send(err);
			}
		});

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

		etoileData.findOne({institutionName:sess.institutionName},function(err, pers){

			if(!err)
			{
				if(pers)
				{
					console.log("server.js line 171 "+JSON.stringify(pers));
					if(!pers.data)
					{
						pers.data={};
					}

					pers.data[config] = request.body;
					// TODO correct push
					pers.configs.push(config);
					etoileData.findOneAndUpdate({institutionName:sess.institutionName},pers, function(err){

					if(!err)
					{
					  console.log("Saved");
					  response.status(200).end();
					} else {
					  response.status(401).send(err);
					}
				  });
				}
				else {
				  console.log("server.js line 185 not found");
				}
			  }
			  else {
				response.status(401).send(err);
      }
    });
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

	} else {

		var outputFile = repositoryPath + '/projects/resources/xmlFet/withoutSession.fet';
		var outputDir = repositoryPath + '/projects/resources/output';

		service.generateTimetable(data, outputFile, outputDir, callback);
	}

	function callback(result) {

		if(result.length != 0) {

			response.status(500).send(result);

		} else {

			response.status(201).send('emploi du temps généré, vous pourrez le récupérer');
		}
	}
});

app.get('/display', function(request, response) {

	var sess = request.session;

	if (sess.institutionName) {

		var timeTableIndexPath = '/timetables/' + sess.institutionName + '/' + sess.institutionName + '_index.html';
		response.status(200).send(timeTableIndexPath);

	} else {

		var timeTableIndexPath = '/timetables/withoutSession/withoutSession_index.html';
		response.status(200).send(timeTableIndexPath);
	}
});

app.listen(port, function(err) {

	if (err) {

		return console.log('quelque chose de mauvais est arrivé : ', err);
	}

	console.log('le serveur écoute sur le port ' + port);
});
