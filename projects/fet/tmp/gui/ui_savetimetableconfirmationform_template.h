/********************************************************************************
** Form generated from reading UI file 'savetimetableconfirmationform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVETIMETABLECONFIRMATIONFORM_TEMPLATE_H
#define UI_SAVETIMETABLECONFIRMATIONFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SaveTimetableConfirmationForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QCheckBox *dontShowAgainCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *continuePushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *SaveTimetableConfirmationForm_template)
    {
        if (SaveTimetableConfirmationForm_template->objectName().isEmpty())
            SaveTimetableConfirmationForm_template->setObjectName(QStringLiteral("SaveTimetableConfirmationForm_template"));
        SaveTimetableConfirmationForm_template->resize(693, 467);
        gridLayout = new QGridLayout(SaveTimetableConfirmationForm_template);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(SaveTimetableConfirmationForm_template);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 4);

        dontShowAgainCheckBox = new QCheckBox(SaveTimetableConfirmationForm_template);
        dontShowAgainCheckBox->setObjectName(QStringLiteral("dontShowAgainCheckBox"));

        gridLayout->addWidget(dontShowAgainCheckBox, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(607, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        continuePushButton = new QPushButton(SaveTimetableConfirmationForm_template);
        continuePushButton->setObjectName(QStringLiteral("continuePushButton"));

        gridLayout->addWidget(continuePushButton, 1, 2, 1, 1);

        cancelPushButton = new QPushButton(SaveTimetableConfirmationForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 1, 3, 1, 1);


        retranslateUi(SaveTimetableConfirmationForm_template);

        QMetaObject::connectSlotsByName(SaveTimetableConfirmationForm_template);
    } // setupUi

    void retranslateUi(QDialog *SaveTimetableConfirmationForm_template)
    {
        SaveTimetableConfirmationForm_template->setWindowTitle(QApplication::translate("SaveTimetableConfirmationForm_template", "Instructions and confirmation for saving data and timetable", 0));
        dontShowAgainCheckBox->setText(QApplication::translate("SaveTimetableConfirmationForm_template", "Don't show this again", 0));
        continuePushButton->setText(QApplication::translate("SaveTimetableConfirmationForm_template", "Continue", 0));
        cancelPushButton->setText(QApplication::translate("SaveTimetableConfirmationForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveTimetableConfirmationForm_template: public Ui_SaveTimetableConfirmationForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVETIMETABLECONFIRMATIONFORM_TEMPLATE_H
