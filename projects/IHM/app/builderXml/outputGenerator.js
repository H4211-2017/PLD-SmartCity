var outputJsonGenerator = {

    outputJsonObject: [
        {name : 'fet', attrs : {version : '5.31.4'}, children : [
            {name : 'Intsitution_Name', text : 'institution par defaut'},
            {name : 'Comments', text : 'commentaires par defaut'},
            {name : 'Days_List', children : [
                {name : 'Number_of_Days', text : 0}
            ]},
            {name : 'Hour_List', children : [
                {name : 'Number_of_Hours', text : 0}
            ]},
            {name : 'Subjects_List', children : []},
            {name : 'Activity_Tags_List', children : []},
            {name : 'Teacher_List', children : []},
            {name : 'Students_List', children : []}
        ]}
    ],

    addDay : function(stringDay) {
        var day = {name : 'Day', children : {
            Name : stringDay
        }};

        var tableDayList = this.outputJsonObject[0].children[2].children;
        tableDayList[0].text++; //number of days
        tableDayList.push(day);
    },

    addHour : function(stringHour) {
        var hour = {name : 'Hour', children : {
            Name : stringHour
        }};

        var tableHourList = this.outputJsonObject[0].children[3].children;
        tableHourList[0].text++; //number of days
        tableHourList.push(hour);
    },

    addRoomType : function(stringSubjectName, stringComments = '\0') {
        var subject = {name : 'Subject', children : {
            Name : stringSubjectName,
            Comments : stringComments
        }};

        var tableSubjectList = this.outputJsonObject[0].children[4].children;
        tableSubjectList.push(subject);
    },

    addActivityTags : function(stringActivityTagName, stringComments = '\0') {
        var activityTag = {name : 'Activity_Tag', children : {
            Name : stringActivityTagName,
            Comments : stringComments
        }};

        var tableActivityTagList = this.outputJsonObject[0].children[5].children;
        tableActivityTagList.push(activityTag);
    },

    addTeacher : function(stringTeacherName, numberTargetOfHours = 0, stringComments = '\0') {
        var teacher = {name : 'Teacher', children : [
            {name : 'Name', text : stringTeacherName},
            {name : 'Target_Number_of_Hours', text : numberTargetOfHours},
            {name : 'Qualified_Subjects', children : []},
            {name : 'Comments', text : stringComments}
        ]};

        var tableActivityTagList = this.outputJsonObject[0].children[6].children;
        tableActivityTagList.push(teacher);
    }
};
