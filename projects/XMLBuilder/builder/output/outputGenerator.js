var async = require('async');

var OutputJsonGenerator = {

    outputJsonObject: [

        {name: 'fet', attrs: {version: '5.31.4'}, children: [
            {name: 'Intsitution_Name', text: 'institution par defaut'}, // 0
            {name: 'Comments', text: 'commentaires par defaut'}, // 1
            {name: 'Days_List', children: [ // 2
                {name: 'Number_of_Days', text: 0}
            ]},
            {name: 'Hours_List', children: [ // 3
                {name: 'Number_of_Hours', text: 0}
            ]},
            {name: 'Subjects_List', children: []}, // 4
            {name: 'Activity_Tags_List', children: []}, // 5
            {name: 'Teachers_List', children: []}, // 6
            {name: 'Students_List', children: []}, // 7
            {name: 'Activities_List', children: []}, // 8
            {name: 'Building_List', children: []}, // 9
            {name: 'Rooms_List', children: []}, // 10
            {name: 'Time_Constraints_List', children: [ // 11
                {name: 'ConstraintBasicCompulsoryTime', children: [
                    {name: 'Weight_Percentage', text: 100},
                    {name: 'Active', text: 'true'},
                    {name: 'Comments', text: ''}
                ]}
            ]},
            {name: 'Space_Constraints_List', children: [ // 12
                {name: 'ConstraintBasicCompulsorySpace', children: [
                    {name: 'Weight_Percentage', text: 100},
                    {name: 'Active', text: 'true'},
                    {name: 'Comments', text: ''}
                ]}
            ]}
        ]}
    ],

    addDay: function(stringDay) {

        var day = {name: 'Day', children: [
            {name: 'Name', text: stringDay}
        ]};

        var tableDayList = this.outputJsonObject[0].children[2].children;
        tableDayList[0].text++; //number of days
        tableDayList.push(day);
    },

    addHour: function(stringHour) {

        var hour = {name: 'Hour', children: [
            {name: 'Name', text: stringHour}
        ]};

        var tableHourList = this.outputJsonObject[0].children[3].children;
        tableHourList[0].text++; //number of days
        tableHourList.push(hour);
    },

    addSubject: function(stringSubjectName, stringComments) {

        var subject = {name: 'Subject', children: [
            {name: 'Name', text: stringSubjectName},
            {name: 'Comments', text: stringComments}
        ]};

        var tableSubjectList = this.outputJsonObject[0].children[4].children;
        tableSubjectList.push(subject);
    },

    addActivityTags: function(stringActivityTagName, stringComments) {

        var activityTag = {name: 'Activity_Tag', children: [
            {name: 'Name', text: stringActivityTagName},
            {name: 'Comments', text: stringComments}
        ]};

        var tableActivityTagList = this.outputJsonObject[0].children[5].children;
        tableActivityTagList.push(activityTag);
    },

    addTeacher: function(stringTeacherName, numberTargetOfHours, stringComments) {

        var teacher = {name: 'Teacher', children: [
            {name: 'Name', text: stringTeacherName},
            {name: 'Target_Number_of_Hours', text: numberTargetOfHours},
            {name: 'Qualified_Subjects', children: []},
            {name: 'Comments', text: stringComments}
        ]};

        var tableActivityTagList = this.outputJsonObject[0].children[6].children;
        tableActivityTagList.push(teacher)
    },

    addYear: function(stringYear, numberOfStudents, stringComments) {

        var year = {name: 'Year', children: [
            {name: 'Name', text: stringYear},
            {name: 'Number_of_Students', text: numberOfStudents},
            {name: 'Comments', text: stringComments}
        ]};

        var tableStudentsList = this.outputJsonObject[0].children[7].children;
        tableStudentsList.push(year);
    },

    addGroup: function(stringYear, stringGroupName, numberOfStudents, stringComments) {

        var group = {name: 'Group', children: [
            {name: 'Name', text: stringGroupName},
            {name: 'Number_of_Students', text: numberOfStudents},
            {name: 'Comments', text: stringComments}
        ]};

        var tableStudentsList = this.outputJsonObject[0].children[7].children;

        var i = 0;
        var testedYear = tableStudentsList[0];
        var stringTestedYear = getXmlName(testedYear);


        while (stringYear.localeCompare(stringTestedYear) !== 0) {
            i++;

            if (i >= tableStudentsList.length) {
                throw 'ERREUR : outputGenerator.js::OutputJsonGenerator::addGroup : le niveau ' + stringYear + ' n\'est pas defini'
            }

            testedYear = tableStudentsList[i];
            stringTestedYear = getXmlName(testedYear);
        }

        testedYear.children.push(group);
    },

    intActivities: 0, //for id of each activity

    addActivity: function(stringTeacherName, stringSubjectName, stringStudentGroupName, intDuration, intSplits, stringComments) {

        this.intActivities++;

        // TODO verify if elements exist in hierarchy
		var intSplitId = this.intActivities;
		var tableActivityList = this.outputJsonObject[0].children[8].children;
		
		for(var i = 0; i < intSplits; i++) {

			tableActivityList.push({name: 'Activity', children: [
				{name: 'Teacher', text: stringTeacherName},
				{name: 'Subject', text: stringSubjectName},
				{name: 'Students', text: stringStudentGroupName},
				{name: 'Duration', text: intDuration},
				{name: 'Total_Duration', text: (intDuration * intSplits)},
				{name: 'Id', text: this.intActivities},
				{name: 'Activity_Group_Id', text: intSplitId},
				{name: 'Active', text: 'true'},
				{name: 'Comments', text: stringComments}
			]});
			
			this.intActivities++;
		}
    },
	
	addRoom: function(stringName, stringBuilding, intCapacity, stringComments) {

		var room = {name: 'Room', children: [
			{name: 'Name', text: stringName},
			{name: 'Buidling', text: stringBuilding},
			{name: 'Capacity', text: intCapacity},
			{name: 'Comments', text: stringComments}
		]};

		var tableRoomsList = this.outputJsonObject[0].children[10].children;
		tableRoomsList.push(room);
    },
	
	// tableNotAvailableDayHour is table of objects type { day: "Day", hour: "00h00 - 00h00" }
	
	addTeacherNotAvailableTime: function(stringTeacher, tableNotAvailableDayHour, intWeightPourcentage, boolActive, stringComments, callback) {
		
		// TODO verify if elements exists in hierarchy
		
		if (intWeightPourcentage < 0 || intWeightPourcentage > 100) 
		{
			throw 'ERREUR : outputGenerator.js::addTeacherNotAvailableTime : poids invalide : ' + intWeightPourcentage;
		}
		
		var tableTimeConstraints = this.outputJsonObject[0].children[11].children;
		
		var constraint = {name: 'ConstraintTeacherNotAvailableTimes', children: [
			{name: 'Weight_Percentage', text: intWeightPourcentage},
			{name: 'Teacher', text: stringTeacher},
			{name: 'Number_of_Not_Available_Times', text: tableNotAvailableDayHour.length},
		]};
		
		async.forEach(tableNotAvailableDayHour, function(notAvailableDayHour, callback2) {
			
			var notAvailableTime = {name: 'Not_Available_Time', children: [
				{name: 'Day', text: notAvailableDayHour.day},
				{name: 'Hour', text: notAvailableDayHour.hour}
			]};
			
			constraint.children.push(notAvailableTime);
			
			callback2();
			
		}, function(err) {
			
			if (err) {
				
				throw 'ERREUR : outputGenerator.js::addTeacherNotAvailableTime : ' + err;
			}
			
			constraint.children.push({name: 'Active', text: boolActive},
									 {name: 'Comments', text: stringComments});
			tableTimeConstraints.push(constraint);
					
			callback();
		});
	},
	
	// tablePreferredRoom is a list of string : each is the name of the room
	
	addSubjectPreferredRoom: function(stringSubject, tablePreferredRoom, intWeightPourcentage, boolActive, stringComments, callback) {

		// TODO verify if elements exists in hierarchy
				
		var constraint = {name: 'ConstraintSubjectPreferredRooms', children: [
			{name: 'Weight_Percentage', text: intWeightPourcentage},
			{name: 'Subject', text: stringSubject},
			{name: 'Number_of_Preferred_Rooms', text: tablePreferredRoom.length}
		]};
		
		var tableSpaceConstraints = this.outputJsonObject[0].children[12].children;
		
		async.forEach(tablePreferredRoom, function(stringPreferredRoom, callback1) {
			
			constraint.children.push({name: 'Preferred_Room', text: stringPreferredRoom});
			
			callback1();
		
		}, function(err) {
		
			constraint.children.push({name: 'Active', text: boolActive},
									 {name: 'Comments', text: stringComments});			 
			tableSpaceConstraints.push(constraint);
			
			callback();
		});
	},
	
	getHourName: function(numberHourIndice) {
		
		var tableHourList = this.outputJsonObject[0].children[3].children;
        return getXmlName(tableHourList[numberHourIndice + 1]);
	}
};

var getXmlName = function(outputJsonXmlObjectWithName) {
    var name = outputJsonXmlObjectWithName.children[0];

    if (name.name.localeCompare('Name') === 0) {

        return name.text;
		
    } else {

        throw 'ERREUR : outputGenerator.js::getXmlName : l\'element xml ne contient pas de nom ou est mal forme'
    }
}

exports.getXmlName = getXmlName;
exports.OutputJsonGenerator = OutputJsonGenerator;
