/********************************************************************************
** Form generated from reading UI file 'removeredundantconfirmationform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEREDUNDANTCONFIRMATIONFORM_TEMPLATE_H
#define UI_REMOVEREDUNDANTCONFIRMATIONFORM_TEMPLATE_H

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

class Ui_RemoveRedundantConfirmationForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QCheckBox *dontShowAgainCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *continuePushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *RemoveRedundantConfirmationForm_template)
    {
        if (RemoveRedundantConfirmationForm_template->objectName().isEmpty())
            RemoveRedundantConfirmationForm_template->setObjectName(QStringLiteral("RemoveRedundantConfirmationForm_template"));
        RemoveRedundantConfirmationForm_template->resize(693, 467);
        gridLayout = new QGridLayout(RemoveRedundantConfirmationForm_template);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(RemoveRedundantConfirmationForm_template);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 4);

        dontShowAgainCheckBox = new QCheckBox(RemoveRedundantConfirmationForm_template);
        dontShowAgainCheckBox->setObjectName(QStringLiteral("dontShowAgainCheckBox"));

        gridLayout->addWidget(dontShowAgainCheckBox, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(607, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        continuePushButton = new QPushButton(RemoveRedundantConfirmationForm_template);
        continuePushButton->setObjectName(QStringLiteral("continuePushButton"));

        gridLayout->addWidget(continuePushButton, 1, 2, 1, 1);

        cancelPushButton = new QPushButton(RemoveRedundantConfirmationForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 1, 3, 1, 1);


        retranslateUi(RemoveRedundantConfirmationForm_template);

        QMetaObject::connectSlotsByName(RemoveRedundantConfirmationForm_template);
    } // setupUi

    void retranslateUi(QDialog *RemoveRedundantConfirmationForm_template)
    {
        RemoveRedundantConfirmationForm_template->setWindowTitle(QApplication::translate("RemoveRedundantConfirmationForm_template", "Instructions and confirmation of remove redundant constraints", 0));
        dontShowAgainCheckBox->setText(QApplication::translate("RemoveRedundantConfirmationForm_template", "Don't show this again", 0));
        continuePushButton->setText(QApplication::translate("RemoveRedundantConfirmationForm_template", "Continue", 0));
        cancelPushButton->setText(QApplication::translate("RemoveRedundantConfirmationForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveRedundantConfirmationForm_template: public Ui_RemoveRedundantConfirmationForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEREDUNDANTCONFIRMATIONFORM_TEMPLATE_H
