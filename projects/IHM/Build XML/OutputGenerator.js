var outputGenerator = {

	outputJsonObject: [
	   	{name : 'fet', attrs : {version: '5.30.3'}, children : [
		   	{name : 'Intsitution_Name', text : 'yolo'},
		   	{name : 'Comments', text : ''},
		   	{name : 'Days_List', children : [
		       	{name: 'Number_of_Days', text: '6'},
		       	{name: 'Day', children: {
		           Name : 'Lundi'
		       	}},
		       	{name: 'Day', children: {
		           Name: 'Mardi'
			   	}},
		   	]},
		   	{name : 'Hour_List', children :[]},
		   	{name : 'Subjects_List', children :[]},
		   	{name : 'Activity_Tags_List', children :[]},
		   	{name : 'Teacher_List', children :[]}
		]}
	],
		
	getHourList: function() {
		return this.outputJsonObject[0].children[3];
	}
	
	getDayList: function() {
		return this.outputJsonObject[0].children[2];
	}
		
])

};
