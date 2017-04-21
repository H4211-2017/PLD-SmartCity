/********************************************************************************
** Form generated from reading UI file 'addconstrainttwoactivitiesorderedform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H

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

class Ui_AddConstraintTwoActivitiesOrderedForm_template
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
    QComboBox *firstActivitiesComboBox;
    QVBoxLayout *vboxLayout1;
    QLabel *activityTextLabel_2;
    QComboBox *secondActivitiesComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTwoActivitiesOrderedForm_template)
    {
        if (AddConstraintTwoActivitiesOrderedForm_template->objectName().isEmpty())
            AddConstraintTwoActivitiesOrderedForm_template->setObjectName(QStringLiteral("AddConstraintTwoActivitiesOrderedForm_template"));
        AddConstraintTwoActivitiesOrderedForm_template->resize(670, 415);
        gridLayout_2 = new QGridLayout(AddConstraintTwoActivitiesOrderedForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(AddConstraintTwoActivitiesOrderedForm_template);
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
        activityTextLabel = new QLabel(AddConstraintTwoActivitiesOrderedForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        firstActivitiesComboBox = new QComboBox(AddConstraintTwoActivitiesOrderedForm_template);
        firstActivitiesComboBox->setObjectName(QStringLiteral("firstActivitiesComboBox"));
        firstActivitiesComboBox->setEditable(false);
        firstActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        firstActivitiesComboBox->setAutoCompletion(false);
        firstActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(firstActivitiesComboBox);


        gridLayout_2->addLayout(vboxLayout, 1, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        activityTextLabel_2 = new QLabel(AddConstraintTwoActivitiesOrderedForm_template);
        activityTextLabel_2->setObjectName(QStringLiteral("activityTextLabel_2"));
        activityTextLabel_2->setFrameShape(QFrame::NoFrame);
        activityTextLabel_2->setFrameShadow(QFrame::Plain);
        activityTextLabel_2->setWordWrap(false);

        vboxLayout1->addWidget(activityTextLabel_2);

        secondActivitiesComboBox = new QComboBox(AddConstraintTwoActivitiesOrderedForm_template);
        secondActivitiesComboBox->setObjectName(QStringLiteral("secondActivitiesComboBox"));
        secondActivitiesComboBox->setEditable(false);
        secondActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        secondActivitiesComboBox->setAutoCompletion(false);
        secondActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(secondActivitiesComboBox);


        gridLayout_2->addLayout(vboxLayout1, 2, 0, 1, 1);

        spacer2 = new QSpacerItem(21, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer2, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(AddConstraintTwoActivitiesOrderedForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTwoActivitiesOrderedForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(hboxLayout, 4, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        addConstraintPushButton = new QPushButton(AddConstraintTwoActivitiesOrderedForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout1->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTwoActivitiesOrderedForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);


        gridLayout_2->addLayout(hboxLayout1, 5, 0, 1, 1);


        retranslateUi(AddConstraintTwoActivitiesOrderedForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTwoActivitiesOrderedForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTwoActivitiesOrderedForm_template)
    {
        AddConstraintTwoActivitiesOrderedForm_template->setWindowTitle(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Add two activities ordered", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Activity tag", 0));
        activityTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "First activity", 0));
        activityTextLabel_2->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Second activity", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTwoActivitiesOrderedForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTwoActivitiesOrderedForm_template: public Ui_AddConstraintTwoActivitiesOrderedForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H
