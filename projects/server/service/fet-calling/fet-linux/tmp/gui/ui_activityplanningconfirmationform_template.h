/********************************************************************************
** Form generated from reading UI file 'activityplanningconfirmationform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITYPLANNINGCONFIRMATIONFORM_TEMPLATE_H
#define UI_ACTIVITYPLANNINGCONFIRMATIONFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ActivityPlanningConfirmationForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QCheckBox *dontShowAgainCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *continuePushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ActivityPlanningConfirmationForm_template)
    {
        if (ActivityPlanningConfirmationForm_template->objectName().isEmpty())
            ActivityPlanningConfirmationForm_template->setObjectName(QStringLiteral("ActivityPlanningConfirmationForm_template"));
        ActivityPlanningConfirmationForm_template->resize(650, 430);
        gridLayout = new QGridLayout(ActivityPlanningConfirmationForm_template);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(ActivityPlanningConfirmationForm_template);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dontShowAgainCheckBox = new QCheckBox(ActivityPlanningConfirmationForm_template);
        dontShowAgainCheckBox->setObjectName(QStringLiteral("dontShowAgainCheckBox"));

        horizontalLayout->addWidget(dontShowAgainCheckBox);

        horizontalSpacer = new QSpacerItem(607, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        continuePushButton = new QPushButton(ActivityPlanningConfirmationForm_template);
        continuePushButton->setObjectName(QStringLiteral("continuePushButton"));

        horizontalLayout->addWidget(continuePushButton);

        cancelPushButton = new QPushButton(ActivityPlanningConfirmationForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(ActivityPlanningConfirmationForm_template);

        QMetaObject::connectSlotsByName(ActivityPlanningConfirmationForm_template);
    } // setupUi

    void retranslateUi(QDialog *ActivityPlanningConfirmationForm_template)
    {
        ActivityPlanningConfirmationForm_template->setWindowTitle(QApplication::translate("ActivityPlanningConfirmationForm_template", "Instructions and confirmation of activity planning", 0));
        dontShowAgainCheckBox->setText(QApplication::translate("ActivityPlanningConfirmationForm_template", "Don't show this again", 0));
        continuePushButton->setText(QApplication::translate("ActivityPlanningConfirmationForm_template", "Continue", 0));
        cancelPushButton->setText(QApplication::translate("ActivityPlanningConfirmationForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ActivityPlanningConfirmationForm_template: public Ui_ActivityPlanningConfirmationForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITYPLANNINGCONFIRMATIONFORM_TEMPLATE_H
