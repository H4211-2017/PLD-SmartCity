/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitypreferredstartingtimeform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITYPREFERREDSTARTINGTIMEFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITYPREFERREDSTARTINGTIMEFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintActivityPreferredStartingTimeForm_template
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *teachersTextLabel;
    QLabel *studentsTextLabel;
    QComboBox *teachersComboBox;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QLabel *activityTagsTextLabel;
    QComboBox *subjectsComboBox;
    QComboBox *activityTagsComboBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *vboxLayout;
    QLabel *activityTextLabel;
    QComboBox *activitiesComboBox;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QGroupBox *periodGroupBox;
    QGridLayout *gridLayout;
    QLabel *dayTextLabel;
    QLabel *startHourTextLabel;
    QComboBox *dayComboBox;
    QComboBox *startHourComboBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *permLockedCheckBox;
    QLabel *permTextLabel;
    QHBoxLayout *hboxLayout1;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivityPreferredStartingTimeForm_template)
    {
        if (AddConstraintActivityPreferredStartingTimeForm_template->objectName().isEmpty())
            AddConstraintActivityPreferredStartingTimeForm_template->setObjectName(QStringLiteral("AddConstraintActivityPreferredStartingTimeForm_template"));
        AddConstraintActivityPreferredStartingTimeForm_template->resize(700, 555);
        gridLayout_3 = new QGridLayout(AddConstraintActivityPreferredStartingTimeForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(AddConstraintActivityPreferredStartingTimeForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        teachersTextLabel = new QLabel(groupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsTextLabel = new QLabel(groupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(studentsTextLabel, 0, 1, 1, 1);

        teachersComboBox = new QComboBox(groupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout_2->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(groupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout_2->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsTextLabel = new QLabel(groupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(subjectsTextLabel, 2, 0, 1, 1);

        activityTagsTextLabel = new QLabel(groupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(activityTagsTextLabel, 2, 1, 1, 1);

        subjectsComboBox = new QComboBox(groupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout_2->addWidget(subjectsComboBox, 3, 0, 1, 1);

        activityTagsComboBox = new QComboBox(groupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout_2->addWidget(activityTagsComboBox, 3, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTextLabel = new QLabel(AddConstraintActivityPreferredStartingTimeForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        activitiesComboBox = new QComboBox(AddConstraintActivityPreferredStartingTimeForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));
        activitiesComboBox->setEditable(false);
        activitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        activitiesComboBox->setAutoCompletion(false);
        activitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(activitiesComboBox);


        gridLayout_3->addLayout(vboxLayout, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(AddConstraintActivityPreferredStartingTimeForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivityPreferredStartingTimeForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout_3->addLayout(hboxLayout, 3, 0, 1, 1);

        periodGroupBox = new QGroupBox(AddConstraintActivityPreferredStartingTimeForm_template);
        periodGroupBox->setObjectName(QStringLiteral("periodGroupBox"));
        gridLayout = new QGridLayout(periodGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dayTextLabel = new QLabel(periodGroupBox);
        dayTextLabel->setObjectName(QStringLiteral("dayTextLabel"));
        dayTextLabel->setWordWrap(false);

        gridLayout->addWidget(dayTextLabel, 0, 0, 1, 1);

        startHourTextLabel = new QLabel(periodGroupBox);
        startHourTextLabel->setObjectName(QStringLiteral("startHourTextLabel"));
        startHourTextLabel->setWordWrap(false);

        gridLayout->addWidget(startHourTextLabel, 0, 1, 1, 1);

        dayComboBox = new QComboBox(periodGroupBox);
        dayComboBox->setObjectName(QStringLiteral("dayComboBox"));
        dayComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(dayComboBox, 1, 0, 1, 1);

        startHourComboBox = new QComboBox(periodGroupBox);
        startHourComboBox->setObjectName(QStringLiteral("startHourComboBox"));
        startHourComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(startHourComboBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(periodGroupBox, 4, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        permLockedCheckBox = new QCheckBox(AddConstraintActivityPreferredStartingTimeForm_template);
        permLockedCheckBox->setObjectName(QStringLiteral("permLockedCheckBox"));
        permLockedCheckBox->setChecked(true);

        vboxLayout1->addWidget(permLockedCheckBox);

        permTextLabel = new QLabel(AddConstraintActivityPreferredStartingTimeForm_template);
        permTextLabel->setObjectName(QStringLiteral("permTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(permTextLabel->sizePolicy().hasHeightForWidth());
        permTextLabel->setSizePolicy(sizePolicy);
        permTextLabel->setAlignment(Qt::AlignVCenter);
        permTextLabel->setWordWrap(true);

        vboxLayout1->addWidget(permTextLabel);


        gridLayout_3->addLayout(vboxLayout1, 5, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        addConstraintPushButton = new QPushButton(AddConstraintActivityPreferredStartingTimeForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout1->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintActivityPreferredStartingTimeForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);


        gridLayout_3->addLayout(hboxLayout1, 6, 0, 1, 1);


        retranslateUi(AddConstraintActivityPreferredStartingTimeForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivityPreferredStartingTimeForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivityPreferredStartingTimeForm_template)
    {
        AddConstraintActivityPreferredStartingTimeForm_template->setWindowTitle(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Add activity preferred starting time", 0));
        groupBox->setTitle(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Activity tag", 0));
        activityTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Activity", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        periodGroupBox->setTitle(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Period", 0));
        dayTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Day", 0));
        startHourTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Start hour", 0));
        permLockedCheckBox->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Permanently locked", 0));
        permTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Select this if you want this constraint not to be unlockable from the 'Timetable' menu (recommended). You can always remove this constraint from the constraints dialogs or uncheck \"permanently locked\" checkbox by editing this constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivityPreferredStartingTimeForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivityPreferredStartingTimeForm_template: public Ui_AddConstraintActivityPreferredStartingTimeForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITYPREFERREDSTARTINGTIMEFORM_TEMPLATE_H
