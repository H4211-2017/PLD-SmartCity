/********************************************************************************
** Form generated from reading UI file 'constraintstudentssetmaxbuildingchangesperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *studentsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template)
    {
        if (ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->objectName().isEmpty())
            ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->setObjectName(QStringLiteral("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template"));
        ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->resize(536, 486);
        gridLayout_2 = new QGridLayout(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template)
    {
        ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Constraints students set max building changes per week", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template: public Ui_ConstraintStudentsSetMaxBuildingChangesPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
