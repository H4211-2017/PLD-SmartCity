/********************************************************************************
** Form generated from reading UI file 'constraintactivitiessamestartingdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITIESSAMESTARTINGDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITIESSAMESTARTINGDAYFORM_TEMPLATE_H

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

class Ui_ConstraintActivitiesSameStartingDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *adviceTextLabel;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivitiesSameStartingDayForm_template)
    {
        if (ConstraintActivitiesSameStartingDayForm_template->objectName().isEmpty())
            ConstraintActivitiesSameStartingDayForm_template->setObjectName(QStringLiteral("ConstraintActivitiesSameStartingDayForm_template"));
        ConstraintActivitiesSameStartingDayForm_template->resize(539, 482);
        gridLayout = new QGridLayout(ConstraintActivitiesSameStartingDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        adviceTextLabel = new QLabel(ConstraintActivitiesSameStartingDayForm_template);
        adviceTextLabel->setObjectName(QStringLiteral("adviceTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adviceTextLabel->sizePolicy().hasHeightForWidth());
        adviceTextLabel->setSizePolicy(sizePolicy);
        adviceTextLabel->setFrameShape(QFrame::NoFrame);
        adviceTextLabel->setFrameShadow(QFrame::Plain);
        adviceTextLabel->setWordWrap(true);

        gridLayout->addWidget(adviceTextLabel, 0, 0, 1, 4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintActivitiesSameStartingDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintActivitiesSameStartingDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintActivitiesSameStartingDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivitiesSameStartingDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout->addWidget(addConstraintPushButton, 2, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout->addWidget(modifyConstraintPushButton, 2, 1, 1, 2);

        removeConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout->addWidget(removeConstraintPushButton, 2, 3, 1, 1);

        helpPushButton = new QPushButton(ConstraintActivitiesSameStartingDayForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        gridLayout->addWidget(helpPushButton, 3, 0, 1, 2);

        closePushButton = new QPushButton(ConstraintActivitiesSameStartingDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 3, 2, 1, 2);


        retranslateUi(ConstraintActivitiesSameStartingDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivitiesSameStartingDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivitiesSameStartingDayForm_template)
    {
        ConstraintActivitiesSameStartingDayForm_template->setWindowTitle(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Constraints activities same starting day", 0));
        adviceTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Please try to read Help/Important tips, advice 2). It is IMPORTANT to remove redundant min days constraints after adding constraints same starting day. Please also click Help button here for information.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivitiesSameStartingDayForm_template: public Ui_ConstraintActivitiesSameStartingDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITIESSAMESTARTINGDAYFORM_TEMPLATE_H
