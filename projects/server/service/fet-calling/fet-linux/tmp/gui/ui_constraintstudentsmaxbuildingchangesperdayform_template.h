/********************************************************************************
** Form generated from reading UI file 'constraintstudentsmaxbuildingchangesperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintStudentsMaxBuildingChangesPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintStudentsMaxBuildingChangesPerDayForm_template)
    {
        if (ConstraintStudentsMaxBuildingChangesPerDayForm_template->objectName().isEmpty())
            ConstraintStudentsMaxBuildingChangesPerDayForm_template->setObjectName(QStringLiteral("ConstraintStudentsMaxBuildingChangesPerDayForm_template"));
        ConstraintStudentsMaxBuildingChangesPerDayForm_template->resize(531, 475);
        gridLayout = new QGridLayout(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(ConstraintStudentsMaxBuildingChangesPerDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsMaxBuildingChangesPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsMaxBuildingChangesPerDayForm_template)
    {
        ConstraintStudentsMaxBuildingChangesPerDayForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsMaxBuildingChangesPerDayForm_template", "Constraints students max building changes per day", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsMaxBuildingChangesPerDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsMaxBuildingChangesPerDayForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxBuildingChangesPerDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxBuildingChangesPerDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxBuildingChangesPerDayForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsMaxBuildingChangesPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsMaxBuildingChangesPerDayForm_template: public Ui_ConstraintStudentsMaxBuildingChangesPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
