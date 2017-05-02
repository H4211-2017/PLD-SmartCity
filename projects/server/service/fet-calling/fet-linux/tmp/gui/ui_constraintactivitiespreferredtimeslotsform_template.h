/********************************************************************************
** Form generated from reading UI file 'constraintactivitiespreferredtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H

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

class Ui_ConstraintActivitiesPreferredTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *instructionsTextLabel_2;
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

    void setupUi(QDialog *ConstraintActivitiesPreferredTimeSlotsForm_template)
    {
        if (ConstraintActivitiesPreferredTimeSlotsForm_template->objectName().isEmpty())
            ConstraintActivitiesPreferredTimeSlotsForm_template->setObjectName(QStringLiteral("ConstraintActivitiesPreferredTimeSlotsForm_template"));
        ConstraintActivitiesPreferredTimeSlotsForm_template->resize(538, 488);
        gridLayout = new QGridLayout(ConstraintActivitiesPreferredTimeSlotsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        instructionsTextLabel_2 = new QLabel(ConstraintActivitiesPreferredTimeSlotsForm_template);
        instructionsTextLabel_2->setObjectName(QStringLiteral("instructionsTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructionsTextLabel_2->sizePolicy().hasHeightForWidth());
        instructionsTextLabel_2->setSizePolicy(sizePolicy);
        instructionsTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(instructionsTextLabel_2, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintActivitiesPreferredTimeSlotsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintActivitiesPreferredTimeSlotsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintActivitiesPreferredTimeSlotsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivitiesPreferredTimeSlotsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintActivitiesPreferredTimeSlotsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintActivitiesPreferredTimeSlotsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintActivitiesPreferredTimeSlotsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintActivitiesPreferredTimeSlotsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintActivitiesPreferredTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivitiesPreferredTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivitiesPreferredTimeSlotsForm_template)
    {
        ConstraintActivitiesPreferredTimeSlotsForm_template->setWindowTitle(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Constraints activities preferred time slots", 0));
        instructionsTextLabel_2->setText(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Each hour slot of each considered activity must be allowed by this constraint (more restrictive than preferred starting times for activities with duration greater than 1)", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivitiesPreferredTimeSlotsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivitiesPreferredTimeSlotsForm_template: public Ui_ConstraintActivitiesPreferredTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
