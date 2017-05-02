/********************************************************************************
** Form generated from reading UI file 'settingstimetablehtmllevelform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSTIMETABLEHTMLLEVELFORM_TEMPLATE_H
#define UI_SETTINGSTIMETABLEHTMLLEVELFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SettingsTimetableHtmlLevelForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *level0RadioButton;
    QRadioButton *level1RadioButton;
    QRadioButton *level2RadioButton;
    QRadioButton *level3RadioButton;
    QRadioButton *level4RadioButton;
    QRadioButton *level5RadioButton;
    QRadioButton *level6RadioButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *level7RadioButton;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *SettingsTimetableHtmlLevelForm_template)
    {
        if (SettingsTimetableHtmlLevelForm_template->objectName().isEmpty())
            SettingsTimetableHtmlLevelForm_template->setObjectName(QStringLiteral("SettingsTimetableHtmlLevelForm_template"));
        SettingsTimetableHtmlLevelForm_template->resize(832, 640);
        gridLayout_2 = new QGridLayout(SettingsTimetableHtmlLevelForm_template);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(SettingsTimetableHtmlLevelForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        level0RadioButton = new QRadioButton(groupBox);
        level0RadioButton->setObjectName(QStringLiteral("level0RadioButton"));

        gridLayout->addWidget(level0RadioButton, 0, 0, 1, 1);

        level1RadioButton = new QRadioButton(groupBox);
        level1RadioButton->setObjectName(QStringLiteral("level1RadioButton"));

        gridLayout->addWidget(level1RadioButton, 1, 0, 1, 1);

        level2RadioButton = new QRadioButton(groupBox);
        level2RadioButton->setObjectName(QStringLiteral("level2RadioButton"));

        gridLayout->addWidget(level2RadioButton, 2, 0, 1, 1);

        level3RadioButton = new QRadioButton(groupBox);
        level3RadioButton->setObjectName(QStringLiteral("level3RadioButton"));

        gridLayout->addWidget(level3RadioButton, 3, 0, 1, 1);

        level4RadioButton = new QRadioButton(groupBox);
        level4RadioButton->setObjectName(QStringLiteral("level4RadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(level4RadioButton->sizePolicy().hasHeightForWidth());
        level4RadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(level4RadioButton, 4, 0, 1, 1);

        level5RadioButton = new QRadioButton(groupBox);
        level5RadioButton->setObjectName(QStringLiteral("level5RadioButton"));
        sizePolicy.setHeightForWidth(level5RadioButton->sizePolicy().hasHeightForWidth());
        level5RadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(level5RadioButton, 5, 0, 1, 1);

        level6RadioButton = new QRadioButton(groupBox);
        level6RadioButton->setObjectName(QStringLiteral("level6RadioButton"));
        sizePolicy.setHeightForWidth(level6RadioButton->sizePolicy().hasHeightForWidth());
        level6RadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(level6RadioButton, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        level7RadioButton = new QRadioButton(groupBox);
        level7RadioButton->setObjectName(QStringLiteral("level7RadioButton"));

        horizontalLayout->addWidget(level7RadioButton);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okPushButton = new QPushButton(groupBox);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(groupBox);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        horizontalLayout->addLayout(hboxLayout);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SettingsTimetableHtmlLevelForm_template);

        QMetaObject::connectSlotsByName(SettingsTimetableHtmlLevelForm_template);
    } // setupUi

    void retranslateUi(QDialog *SettingsTimetableHtmlLevelForm_template)
    {
        SettingsTimetableHtmlLevelForm_template->setWindowTitle(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Settings - html level of timetables dialog", 0));
        groupBox->setTitle(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "The html level for generated timetables", 0));
        level0RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 0 - no css (smallest filesize, no css file)", 0));
        level1RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 1 - basic css\n"
"- less then 1 kb larger filesize than level 0\n"
"- css file created to style elements table, caption, thead, tfoot, tbody, th and td\n"
"- page-break after every or every second timetable (useful if you print timetables)", 0));
        level2RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 2 - normal css (default)\n"
"- all features of level 1 with around 5% larger filesize than level 1\n"
"- style x-axis and y-axis of tablehead (useful to style width and height of the activity cells)", 0));
        level3RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 3 - advanced css\n"
"- all features of level 2 with around 2 times larger filesize than level 2\n"
"- style (or hide) all subjects, activity tags, teachers, students sets and rooms\n"
"- style (or hide) line 1, line 2 and line 3 of the activity cells", 0));
        level4RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 4 - full css\n"
"- all features of level 3 with around 2.5 times larger filesize than level 2\n"
"- style every single subject, activity tag, teacher, students set and room", 0));
        level5RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 5 - JavaScript\n"
"- all features of level 4 with around 3.5 times larger filesize than level 2\n"
"- highlighting of same subjects, activity tags, teachers, students sets and rooms\n"
"(needs JavaScript - just move mouse over a word and wait a little bit)", 0));
        level6RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 6 - overloaded css\n"
"- all features of level 5 with around 4 times larger filesize than level 2\n"
"- style the cell of every single subject, activity tag, teacher or student\n"
"(also useful to hide activities with special activity tags)", 0));
        level7RadioButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Level 7 - colors (level 3 plus colors)", 0));
        okPushButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("SettingsTimetableHtmlLevelForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsTimetableHtmlLevelForm_template: public Ui_SettingsTimetableHtmlLevelForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSTIMETABLEHTMLLEVELFORM_TEMPLATE_H
