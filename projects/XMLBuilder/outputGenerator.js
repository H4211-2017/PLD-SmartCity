var OutputJsonGenerator = {

    outputJsonObject: [

        {name: 'fet', attrs: {version: '5.31.4'}, children: [
            {name: 'Intsitution_Name', text: 'institution par defaut'},
            {name: 'Comments', text: 'commentaires par defaut'},
            {name: 'Days_List', children: [
                {name: 'Number_of_Days', text: 0}
            ]},
            {name: 'Hour_List', children: [
                {name: 'Number_of_Hours', text: 0}
            ]},
            {name: 'Subjects_List', children: []},
            {name: 'Activity_Tags_List', children: []},
            {name: 'Teachers_List', children: []},
            {name: 'Students_List', children: []},
            {name: 'Activities_List', children: []},
            {name: 'Building_List', children: []},
            {name: 'Rooms_List', children: []},
            {name: 'Time_Constraints_List', children: [
                {name: 'ConstraintBasicCompulsoryTime', children: [
                    {name: 'Weight_Percentage', text: 100},
                    {name: 'Active', text: 'true'},
                    {name: 'Comments', text: ''}
                ]}
            ]},
            {name: 'Space_Constraints_List', children: [
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
                throw 'ERROR : outputGenerator.js::OutputJsonGenerator::addGroup : le niveau ' + stringYear + ' n\'est pas defini'
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

        throw 'ERROR : outputGenerator.js::getXmlName : l\'element xml ne contient pas de nom ou est mal forme'
    }
}

exports.getXmlName = getXmlName;
exports.OutputJsonGenerator = OutputJsonGenerator;