const http = require('http')
const express = require('express')
const session = require('express-session')
const MongoStore = require('connect-mongo')(session);
const app = express()
const port = 3000

var compteur = 0;
var parametreEtoile = {typeSalle:["TP","linux","TD","normale"]}

compteur ++;

app.use(session({
    secret: 'secretCat',
    store: new MongoStore({
      url: 'mongodb://localhost:27017/test-app',
      autoRemove: 'native' // Default
    })
}));

app.get('/typesalle', (request, response) => {
	
	message = JSON.stringify(parametreEtoile.typeSalle);
	compteur ++;
 	//response.write(message);
 	response.write(compteur.toString());
 	response.send();

})

app.post('/typesalle', function(request, response){
	
})

app.get('/', function(request, response){

	var session = request.session;
	var message = '<h4>Serveur test Etoile</h4>\n'
	message += session.typeSalle
	if(session.typeSalle){
		message += 'votre session existe'
	}
	else
	{
		message += "votre session n'existe pas"
		session.typeSalle = [];
	}
	
	response.send(message);
})

app.listen(port, (err) => {  
	if (err) {
		return console.log('something bad happened', err)
	}

	console.log(`server is listening on ${port}`)
})
