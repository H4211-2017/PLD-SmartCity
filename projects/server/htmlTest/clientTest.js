alert('ceci est un test !');

var input = {};

function executeRequest(callback) {

    var xhr = getXMLHttpRequest();
    var xhr2 = getXMLHttpRequest();

    xhr.onreadystatechange = function() {

		if (xhr.readyState == 4 && (xhr.status == 200 || xhr.status == 0)) {
			
			input = xhr.responseText;
    		alert("OK"); // C'est bon \o/
	     	xhr2.open('GET', '/input?input=' + input, true);
			xhr2.send();       	
    		callback();
    	}
	};
        
    xhr.open('GET', '/resources/toXML.json', true);
    xhr.send();
}

executeRequest(function() {
});
