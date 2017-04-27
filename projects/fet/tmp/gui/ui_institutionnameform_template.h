/********************************************************************************
** Form generated from reading UI file 'institutionnameform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTITUTIONNAMEFORM_TEMPLATE_H
#define UI_INSTITUTIONNAMEFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InstitutionNameForm_template
{
public:
    QGridLayout *gridLayout;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;
    QLineEdit *institutionNameLineEdit;

    void setupUi(QDialog *InstitutionNameForm_template)
    {
        if (InstitutionNameForm_template->objectName().isEmpty())
            InstitutionNameForm_template->setObjectName(QStringLiteral("InstitutionNameForm_template"));
        InstitutionNameForm_template->resize(493, 128);
        gridLayout = new QGridLayout(InstitutionNameForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cancelPushButton = new QPushButton(InstitutionNameForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 1, 1, 1, 1);

        okPushButton = new QPushButton(InstitutionNameForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout->addWidget(okPushButton, 1, 0, 1, 1);

        institutionNameLineEdit = new QLineEdit(InstitutionNameForm_template);
        institutionNameLineEdit->setObjectName(QStringLiteral("institutionNameLineEdit"));

        gridLayout->addWidget(institutionNameLineEdit, 0, 0, 1, 2);


        retranslateUi(InstitutionNameForm_template);

        QMetaObject::connectSlotsByName(InstitutionNameForm_template);
    } // setupUi

    void retranslateUi(QDialog *InstitutionNameForm_template)
    {
        InstitutionNameForm_template->setWindowTitle(QApplication::translate("InstitutionNameForm_template", "Institution name", 0));
        cancelPushButton->setText(QApplication::translate("InstitutionNameForm_template", "Cancel", 0));
        okPushButton->setText(QApplication::translate("InstitutionNameForm_template", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class InstitutionNameForm_template: public Ui_InstitutionNameForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTITUTIONNAMEFORM_TEMPLATE_H
