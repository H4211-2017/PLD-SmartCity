const http = require('http')
const express = require('express')
const session = require('express-session')
const MongoStore = require('connect-mongo')(session);
const app = express()
const port = 3000


var parametreEtoile = {typeSalle:["TP","linux","TD","normale"]}


app.use(session({
    secret: 'secretCat',
    store: new MongoStore({
      url: 'mongodb://localhost:27017/test-app',
      autoRemove: 'native' // Default
    })
}));

app.get('/typesalle', (request, response) => 
{
	var sess  = request.session
	sess.typeSalle.push(sess.compteur);
	sess.compteur ++
 	response.send(JSON.stringify(sess.typeSalle))

})

app.post('/typesalle', function(request, response){
	
})

app.get('/logout', function(req, res){
	var sess = req.session
	sess.destroy()
	res.send('loged out')
})

app.get('/', function(request, response){

	var sess = request.session;
	var message = '<h4>Serveur test Etoile</h4>\n'
	message += sess.typeSalle
	if(sess.connected){
		message += 'votre session existe'
	}
	else
	{
		sess.connected = true;
		message += "votre session n'existe pas"
		sess.typeSalle = [];
		sess.compteur = 0;
	}
	
	response.send(message);
})

app.listen(port, (err) => {  
	if (err) {
		return console.log('something bad happened', err)
	}

	console.log(`server is listening on ${port}`)
})
