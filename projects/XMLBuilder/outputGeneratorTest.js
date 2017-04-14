var outputGenerator = require('./outputGenerator');

var outputJsonGenerator = outputGenerator.OutputJsonGenerator;

outputJsonGenerator.addHour('8.35 - 9.30');
outputJsonGenerator.addDay('Lundi');
outputJsonGenerator.addSubject('Mathematiques', '\0');
outputJsonGenerator.addActivityTags('LOLOL', '/0');
outputJsonGenerator.addTeacher('Dupont Agnan', 0, '\0');
outputJsonGenerator.addYear('3eme', 0, '/0');
outputJsonGenerator.addGroup('3eme', '3A', 0, '\0');

try {

    outputJsonGenerator.addGroup('4eme', '4A', 0, '\0');

} catch (e) {
    console.log(e);
}

var jsonToXml = function (jsonObject) {
    var jsonxml = require('jsontoxml');
    var xml = jsonxml(jsonObject, {xmlHeader: true, prettyPrint: true});

    return xml;
};

var toXml = jsonToXml(outputJsonGenerator.outputJsonObject);

console.log(toXml);
alert(toXml);