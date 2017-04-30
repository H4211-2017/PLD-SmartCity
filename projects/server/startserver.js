;(function( $ ){ 

	$({ port: 8090 }).httpserver(); 

})(require('jquery'), require('./httpserver'));  
