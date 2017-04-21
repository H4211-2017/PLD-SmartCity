/********************************************************************************
** Form generated from reading UI file 'addconstraintactivityendsstudentsdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_AddConstraintActivityEndsStudentsDayForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QLabel *studentsTextLabel;
    QComboBox *teachersComboBox;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QLabel *activityTagsTextLabel;
    QComboBox *subjectsComboBox;
    QComboBox *activityTagsComboBox;
    QVBoxLayout *vboxLayout;
    QLabel *activityTextLabel;
    QComboBox *activitiesComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivityEndsStudentsDayForm_template)
    {
        if (AddConstraintActivityEndsStudentsDayForm_template->objectName().isEmpty())
            AddConstraintActivityEndsStudentsDayForm_template->setObjectName(QStringLiteral("AddConstraintActivityEndsStudentsDayForm_template"));
        AddConstraintActivityEndsStudentsDayForm_template->resize(617, 374);
        gridLayout_2 = new QGridLayout(AddConstraintActivityEndsStudentsDayForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(AddConstraintActivityEndsStudentsDayForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 2, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 2, 1, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 3, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 3, 1, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 0, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTextLabel = new QLabel(AddConstraintActivityEndsStudentsDayForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        activitiesComboBox = new QComboBox(AddConstraintActivityEndsStudentsDayForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));
        activitiesComboBox->setEditable(false);
        activitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        activitiesComboBox->setAutoCompletion(false);
        activitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(activitiesComboBox);


        gridLayout_2->addLayout(vboxLayout, 1, 0, 1, 1);

        spacer2 = new QSpacerItem(21, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer2, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(AddConstraintActivityEndsStudentsDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivityEndsStudentsDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(hboxLayout, 3, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        addConstraintPushButton = new QPushButton(AddConstraintActivityEndsStudentsDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout1->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintActivityEndsStudentsDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);


        gridLayout_2->addLayout(hboxLayout1, 4, 0, 1, 1);


        retranslateUi(AddConstraintActivityEndsStudentsDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivityEndsStudentsDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivityEndsStudentsDayForm_template)
    {
        AddConstraintActivityEndsStudentsDayForm_template->setWindowTitle(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Add activity ends students day", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Activity tag", 0));
        activityTextLabel->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Activity", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivityEndsStudentsDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivityEndsStudentsDayForm_template: public Ui_AddConstraintActivityEndsStudentsDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H
