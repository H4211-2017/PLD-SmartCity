/********************************************************************************
** Form generated from reading UI file 'constraintactivitiessamestartinghourform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITIESSAMESTARTINGHOURFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITIESSAMESTARTINGHOURFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintActivitiesSameStartingHourForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivitiesSameStartingHourForm_template)
    {
        if (ConstraintActivitiesSameStartingHourForm_template->objectName().isEmpty())
            ConstraintActivitiesSameStartingHourForm_template->setObjectName(QStringLiteral("ConstraintActivitiesSameStartingHourForm_template"));
        ConstraintActivitiesSameStartingHourForm_template->resize(531, 463);
        gridLayout = new QGridLayout(ConstraintActivitiesSameStartingHourForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintActivitiesSameStartingHourForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintActivitiesSameStartingHourForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintActivitiesSameStartingHourForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivitiesSameStartingHourForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingHourForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout->addWidget(addConstraintPushButton, 1, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingHourForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout->addWidget(modifyConstraintPushButton, 1, 1, 1, 2);

        removeConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingHourForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout->addWidget(removeConstraintPushButton, 1, 3, 1, 1);

        closePushButton = new QPushButton(ConstraintActivitiesSameStartingHourForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 2, 1, 1, 2);


        retranslateUi(ConstraintActivitiesSameStartingHourForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivitiesSameStartingHourForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivitiesSameStartingHourForm_template)
    {
        ConstraintActivitiesSameStartingHourForm_template->setWindowTitle(QApplication::translate("ConstraintActivitiesSameStartingHourForm_template", "Constraints activities same starting hour", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingHourForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingHourForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingHourForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingHourForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingHourForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingHourForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivitiesSameStartingHourForm_template: public Ui_ConstraintActivitiesSameStartingHourForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITIESSAMESTARTINGHOURFORM_TEMPLATE_H
