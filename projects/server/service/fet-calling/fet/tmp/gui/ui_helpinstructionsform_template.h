/********************************************************************************
** Form generated from reading UI file 'helpinstructionsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPINSTRUCTIONSFORM_TEMPLATE_H
#define UI_HELPINSTRUCTIONSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HelpInstructionsForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *closePushButton;

    void setupUi(QDialog *HelpInstructionsForm_template)
    {
        if (HelpInstructionsForm_template->objectName().isEmpty())
            HelpInstructionsForm_template->setObjectName(QStringLiteral("HelpInstructionsForm_template"));
        HelpInstructionsForm_template->resize(560, 510);
        gridLayout = new QGridLayout(HelpInstructionsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(HelpInstructionsForm_template);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        closePushButton = new QPushButton(HelpInstructionsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 1, 0, 1, 1);


        retranslateUi(HelpInstructionsForm_template);

        QMetaObject::connectSlotsByName(HelpInstructionsForm_template);
    } // setupUi

    void retranslateUi(QDialog *HelpInstructionsForm_template)
    {
        HelpInstructionsForm_template->setWindowTitle(QApplication::translate("HelpInstructionsForm_template", "Instructions", 0));
        closePushButton->setText(QApplication::translate("HelpInstructionsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpInstructionsForm_template: public Ui_HelpInstructionsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPINSTRUCTIONSFORM_TEMPLATE_H
