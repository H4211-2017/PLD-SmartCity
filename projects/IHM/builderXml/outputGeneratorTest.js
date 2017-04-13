var fs = require('fs');

eval(fs.readFileSync('./outputGenerator.js').toString());


outputJsonGenerator.addHour('8.35 - 9.30');
outputJsonGenerator.addDay('Lundi');
outputJsonGenerator.addSubject('Mathematiques');
outputJsonGenerator.addActivityTags('LOLOL');
outputJsonGenerator.addTeacher('Dupont Agnan');

var jsonToXml = function (jsonObject) {
    var jsonxml = require('jsontoxml');
    var xml = jsonxml(jsonObject, {xmlHeader: true, prettyPrint: true});

    return xml;
};

var toXml = jsonToXml(outputJsonGenerator.outputJsonObject);

console.log(toXml);