/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsmaxbuildingchangesperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsMaxBuildingChangesPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QSpinBox *maxChangesSpinBox;

    void setupUi(QDialog *AddConstraintStudentsMaxBuildingChangesPerWeekForm_template)
    {
        if (AddConstraintStudentsMaxBuildingChangesPerWeekForm_template->objectName().isEmpty())
            AddConstraintStudentsMaxBuildingChangesPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMaxBuildingChangesPerWeekForm_template"));
        AddConstraintStudentsMaxBuildingChangesPerWeekForm_template->resize(478, 190);
        gridLayout = new QGridLayout(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel1 = new QLabel(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1);

        maxChangesSpinBox = new QSpinBox(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
        maxChangesSpinBox->setObjectName(QStringLiteral("maxChangesSpinBox"));

        hboxLayout2->addWidget(maxChangesSpinBox);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);


        retranslateUi(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMaxBuildingChangesPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMaxBuildingChangesPerWeekForm_template)
    {
        AddConstraintStudentsMaxBuildingChangesPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMaxBuildingChangesPerWeekForm_template", "Add students max building changes per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMaxBuildingChangesPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMaxBuildingChangesPerWeekForm_template", "Close", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxBuildingChangesPerWeekForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsMaxBuildingChangesPerWeekForm_template", "Max building changes per week", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMaxBuildingChangesPerWeekForm_template: public Ui_AddConstraintStudentsMaxBuildingChangesPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
