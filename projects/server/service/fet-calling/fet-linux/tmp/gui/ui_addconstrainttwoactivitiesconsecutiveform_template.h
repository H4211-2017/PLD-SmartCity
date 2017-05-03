/********************************************************************************
** Form generated from reading UI file 'addconstrainttwoactivitiesconsecutiveform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H

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

class Ui_AddConstraintTwoActivitiesConsecutiveForm_template
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

    void setupUi(QDialog *AddConstraintTwoActivitiesConsecutiveForm_template)
    {
        if (AddConstraintTwoActivitiesConsecutiveForm_template->objectName().isEmpty())
            AddConstraintTwoActivitiesConsecutiveForm_template->setObjectName(QStringLiteral("AddConstraintTwoActivitiesConsecutiveForm_template"));
        AddConstraintTwoActivitiesConsecutiveForm_template->resize(679, 419);
        gridLayout_2 = new QGridLayout(AddConstraintTwoActivitiesConsecutiveForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(AddConstraintTwoActivitiesConsecutiveForm_template);
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
        activityTextLabel = new QLabel(AddConstraintTwoActivitiesConsecutiveForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        firstActivitiesComboBox = new QComboBox(AddConstraintTwoActivitiesConsecutiveForm_template);
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
        activityTextLabel_2 = new QLabel(AddConstraintTwoActivitiesConsecutiveForm_template);
        activityTextLabel_2->setObjectName(QStringLiteral("activityTextLabel_2"));
        activityTextLabel_2->setFrameShape(QFrame::NoFrame);
        activityTextLabel_2->setFrameShadow(QFrame::Plain);
        activityTextLabel_2->setWordWrap(false);

        vboxLayout1->addWidget(activityTextLabel_2);

        secondActivitiesComboBox = new QComboBox(AddConstraintTwoActivitiesConsecutiveForm_template);
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
        weightTextLabel = new QLabel(AddConstraintTwoActivitiesConsecutiveForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTwoActivitiesConsecutiveForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(hboxLayout, 4, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        addConstraintPushButton = new QPushButton(AddConstraintTwoActivitiesConsecutiveForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout1->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTwoActivitiesConsecutiveForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);


        gridLayout_2->addLayout(hboxLayout1, 5, 0, 1, 1);


        retranslateUi(AddConstraintTwoActivitiesConsecutiveForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTwoActivitiesConsecutiveForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTwoActivitiesConsecutiveForm_template)
    {
        AddConstraintTwoActivitiesConsecutiveForm_template->setWindowTitle(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Add two activities consecutive", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Activity tag", 0));
        activityTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "First activity", 0));
        activityTextLabel_2->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Second activity", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTwoActivitiesConsecutiveForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTwoActivitiesConsecutiveForm_template: public Ui_AddConstraintTwoActivitiesConsecutiveForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H
