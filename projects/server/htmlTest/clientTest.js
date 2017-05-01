alert('ceci est un test !');

var input = {};

function executeRequest(callback) {

    var xhr = getXMLHttpRequest();
    var xhr2 = getXMLHttpRequest();

    xhr.onreadystatechange = function() {

		if (xhr.readyState == 4 && (xhr.status == 200 || xhr.status == 0)) {
			
			input = xhr.responseText;
    		alert('OK'); // C'est bon \o/
	     	xhr2.open('GET', '/input?input=' + input, true);
			xhr2.send();       	
    		callback();
    		
    	} else {
    			
    		alert('Fichier non trouvé');
    		callback();
    	}
	};
	
    xhr2.onreadystatechange = function() {

		if (xhr2.readyState == 4 && (xhr2.status == 200 || xhr2.status == 0)) {
			
			input = xhr2.responseText;
    		alert(input); // C'est bon \o/       	
    		callback();
    		
    	} else {
    	
    		callback();
    	}
	};
        
    xhr.open('GET', 'http://127.0.0.1:8000/', true);
    xhr.send();
}

executeRequest(function() {
});
