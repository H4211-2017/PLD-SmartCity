# Installation:
## Sous ubuntu:  
Se déplacer dans le dossier `projects/IHM`  
Exécuter:  
    `sudo ln -s /usr/bin/nodejs /usr/local/bin/node`  
    `sudo ln -s /usr/bin/npm /usr/local/bin/npm`   
    `sudo apt-get update`  
    `sudo apt-get install nodejs npm mongodb`  
    `npm install`  
    `bower install`
	`npm install ../server`
	`mongod`
	`node ../server/server.js`
 		
Note : Il est conseillé de faire une copie du dossier `projects/IHM/bower_components` (qui a été modifié manuellement pour corriger un bug)  
        avant d'exécuter `bower install` puis d'écraser le nouveau dossier après l'exécution de la commande pour préserver nos modifications.

# Exécution :  

Une fois l'installation effectuée et le serveur lancé, notre application est disponible depuis un navigateur à l'adresse \<127.0.0.1:3000\>  
Une connexion avec un identifiant et un mot de passe sont nécessaires pour profiter pleinement des fonctionnalités d'ETOILE. Le mot de passe est 
facultatif, et n'importe quel login non vide permettra une connexion. Il est néanmoins nécessaire de se souvenir du login inséré pour profiter des fonctionnalités de persistance de la base de données lors de connexions ultérieures.
 

