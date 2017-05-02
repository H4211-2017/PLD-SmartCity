/********************************************************************************
** Form generated from reading UI file 'helpfaqform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPFAQFORM_TEMPLATE_H
#define UI_HELPFAQFORM_TEMPLATE_H

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

class Ui_HelpFaqForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *closePushButton;

    void setupUi(QDialog *HelpFaqForm_template)
    {
        if (HelpFaqForm_template->objectName().isEmpty())
            HelpFaqForm_template->setObjectName(QStringLiteral("HelpFaqForm_template"));
        HelpFaqForm_template->resize(560, 510);
        gridLayout = new QGridLayout(HelpFaqForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(HelpFaqForm_template);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        closePushButton = new QPushButton(HelpFaqForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 1, 0, 1, 1);


        retranslateUi(HelpFaqForm_template);

        QMetaObject::connectSlotsByName(HelpFaqForm_template);
    } // setupUi

    void retranslateUi(QDialog *HelpFaqForm_template)
    {
        HelpFaqForm_template->setWindowTitle(QApplication::translate("HelpFaqForm_template", "Frequently asked questions", 0));
        closePushButton->setText(QApplication::translate("HelpFaqForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpFaqForm_template: public Ui_HelpFaqForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFAQFORM_TEMPLATE_H
