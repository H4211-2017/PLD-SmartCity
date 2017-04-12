var XMLWriter = require('xml-writer');
 
xw = new XMLWriter('\t');
xw.startDocument('1.0', 'UTF-8');
xw.startElement('fet');
xw.writeAttribute('version', 'TODO value');
xw.startElement('Institution_Name');
xw.endElement('Institution_Name');
xw.startElement('Comments');
xw.text('Default comments');
xw.endElement('Comments');
xw.startElement('Days_List').startElement('Number_of_Days');
xw.text('TODO value');
xw.endElement('Number_of_Days');
xw.endDocument({ pretty: true});

console.log(xw.toString());
/**
var jsonxml = require('jsontoxml');

var xml = jsonxml({
	node:'text content',
	parent:[
		{name:'taco',text:'beef taco',children:{salsa:'hot!'}},
		{name:'taco',text:'fish taco',attrs:{mood:'sad'},children:[
			{name:'salsa',text:'mild'},
			'hi',
			{name:'salsa',text:'weak',attrs:{type:2}}
		]},
		{name:'taco',attrs:'mood="party!"'}
	],
	parent2:{
		hi:'is a nice thing to say',
		node:'i am another not special child node',
		date:function(){
			return (new Date())+'';
		}
	}
}, {header: true, prettyPrint: true});
*/
var xml = jsonToXml({
	node:'text content',
	parent:[
		{name:'taco',text:'beef taco',children:{salsa:'hot!'}},
		{name:'taco',text:'fish taco',attrs:{mood:'sad'},children:[
			{name:'salsa',text:'mild'},
			'hi',
			{name:'salsa',text:'weak',attrs:{type:2}}
		]},
		{name:'taco',attrs:'mood="party!"'}
	],
	parent2:{
		hi:'is a nice thing to say',
		node:'i am another not special child node',
		date:function(){
			return (new Date())+'';
		}
	}
})

console.log(xml);

function jsonToXml(jsonObject) {
	var jsonxml = require('jsontoxml');
	var xml = jsonxml(jsonObject, {header: true, prettyPrint: true});
	
	return xml;
}
