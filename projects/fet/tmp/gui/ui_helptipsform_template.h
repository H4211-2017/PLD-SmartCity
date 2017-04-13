/********************************************************************************
** Form generated from reading UI file 'helptipsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPTIPSFORM_TEMPLATE_H
#define UI_HELPTIPSFORM_TEMPLATE_H

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

class Ui_HelpTipsForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *closePushButton;

    void setupUi(QDialog *HelpTipsForm_template)
    {
        if (HelpTipsForm_template->objectName().isEmpty())
            HelpTipsForm_template->setObjectName(QStringLiteral("HelpTipsForm_template"));
        HelpTipsForm_template->resize(560, 510);
        gridLayout = new QGridLayout(HelpTipsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(HelpTipsForm_template);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        closePushButton = new QPushButton(HelpTipsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 1, 0, 1, 1);


        retranslateUi(HelpTipsForm_template);

        QMetaObject::connectSlotsByName(HelpTipsForm_template);
    } // setupUi

    void retranslateUi(QDialog *HelpTipsForm_template)
    {
        HelpTipsForm_template->setWindowTitle(QApplication::translate("HelpTipsForm_template", "Important tips", 0));
        closePushButton->setText(QApplication::translate("HelpTipsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpTipsForm_template: public Ui_HelpTipsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPTIPSFORM_TEMPLATE_H
