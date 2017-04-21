/********************************************************************************
** Form generated from reading UI file 'spreadconfirmationform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPREADCONFIRMATIONFORM_TEMPLATE_H
#define UI_SPREADCONFIRMATIONFORM_TEMPLATE_H

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

class Ui_SpreadConfirmationForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QCheckBox *dontShowAgainCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *continuePushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *SpreadConfirmationForm_template)
    {
        if (SpreadConfirmationForm_template->objectName().isEmpty())
            SpreadConfirmationForm_template->setObjectName(QStringLiteral("SpreadConfirmationForm_template"));
        SpreadConfirmationForm_template->resize(762, 540);
        gridLayout = new QGridLayout(SpreadConfirmationForm_template);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(SpreadConfirmationForm_template);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 4);

        dontShowAgainCheckBox = new QCheckBox(SpreadConfirmationForm_template);
        dontShowAgainCheckBox->setObjectName(QStringLiteral("dontShowAgainCheckBox"));

        gridLayout->addWidget(dontShowAgainCheckBox, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(607, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        continuePushButton = new QPushButton(SpreadConfirmationForm_template);
        continuePushButton->setObjectName(QStringLiteral("continuePushButton"));

        gridLayout->addWidget(continuePushButton, 1, 2, 1, 1);

        cancelPushButton = new QPushButton(SpreadConfirmationForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 1, 3, 1, 1);


        retranslateUi(SpreadConfirmationForm_template);

        QMetaObject::connectSlotsByName(SpreadConfirmationForm_template);
    } // setupUi

    void retranslateUi(QDialog *SpreadConfirmationForm_template)
    {
        SpreadConfirmationForm_template->setWindowTitle(QApplication::translate("SpreadConfirmationForm_template", "Instructions and confirmation of spreading activities", 0));
        dontShowAgainCheckBox->setText(QApplication::translate("SpreadConfirmationForm_template", "Don't show this again", 0));
        continuePushButton->setText(QApplication::translate("SpreadConfirmationForm_template", "Continue", 0));
        cancelPushButton->setText(QApplication::translate("SpreadConfirmationForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SpreadConfirmationForm_template: public Ui_SpreadConfirmationForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPREADCONFIRMATIONFORM_TEMPLATE_H
