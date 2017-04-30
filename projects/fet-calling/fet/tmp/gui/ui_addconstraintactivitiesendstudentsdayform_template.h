/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitiesendstudentsdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITIESENDSTUDENTSDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITIESENDSTUDENTSDAYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintActivitiesEndStudentsDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *instructionsTextLabel;
    QSpacerItem *spacer1;
    QVBoxLayout *verticalLayout_2;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QVBoxLayout *verticalLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivitiesEndStudentsDayForm_template)
    {
        if (AddConstraintActivitiesEndStudentsDayForm_template->objectName().isEmpty())
            AddConstraintActivitiesEndStudentsDayForm_template->setObjectName(QStringLiteral("AddConstraintActivitiesEndStudentsDayForm_template"));
        AddConstraintActivitiesEndStudentsDayForm_template->resize(562, 312);
        gridLayout = new QGridLayout(AddConstraintActivitiesEndStudentsDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        instructionsTextLabel = new QLabel(AddConstraintActivitiesEndStudentsDayForm_template);
        instructionsTextLabel->setObjectName(QStringLiteral("instructionsTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructionsTextLabel->sizePolicy().hasHeightForWidth());
        instructionsTextLabel->setSizePolicy(sizePolicy);
        instructionsTextLabel->setWordWrap(true);

        gridLayout->addWidget(instructionsTextLabel, 0, 0, 1, 2);

        spacer1 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        teachersTextLabel = new QLabel(AddConstraintActivitiesEndStudentsDayForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(teachersTextLabel);

        teachersComboBox = new QComboBox(AddConstraintActivitiesEndStudentsDayForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        verticalLayout_2->addWidget(teachersComboBox);

        subjectsTextLabel = new QLabel(AddConstraintActivitiesEndStudentsDayForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(subjectsTextLabel);

        subjectsComboBox = new QComboBox(AddConstraintActivitiesEndStudentsDayForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        verticalLayout_2->addWidget(subjectsComboBox);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        studentsTextLabel = new QLabel(AddConstraintActivitiesEndStudentsDayForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(AddConstraintActivitiesEndStudentsDayForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        verticalLayout->addWidget(studentsComboBox);

        activityTagsTextLabel = new QLabel(AddConstraintActivitiesEndStudentsDayForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(activityTagsTextLabel);

        activityTagsComboBox = new QComboBox(AddConstraintActivitiesEndStudentsDayForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        verticalLayout->addWidget(activityTagsComboBox);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        spacer2 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(AddConstraintActivitiesEndStudentsDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivitiesEndStudentsDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        addConstraintPushButton = new QPushButton(AddConstraintActivitiesEndStudentsDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout1->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintActivitiesEndStudentsDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout1, 5, 0, 1, 2);


        retranslateUi(AddConstraintActivitiesEndStudentsDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivitiesEndStudentsDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivitiesEndStudentsDayForm_template)
    {
        AddConstraintActivitiesEndStudentsDayForm_template->setWindowTitle(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Add activities end students day", 0));
        instructionsTextLabel->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Instructions: you can choose a set of activities with a certain teacher (or blank for all teachers), students set, subject and activity tag.", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Teacher", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Subject", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Students set", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Activity tag", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivitiesEndStudentsDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivitiesEndStudentsDayForm_template: public Ui_AddConstraintActivitiesEndStudentsDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITIESENDSTUDENTSDAYFORM_TEMPLATE_H
