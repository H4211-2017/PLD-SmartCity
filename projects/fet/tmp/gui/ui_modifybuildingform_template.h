/********************************************************************************
** Form generated from reading UI file 'modifybuildingform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYBUILDINGFORM_TEMPLATE_H
#define UI_MODIFYBUILDINGFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModifyBuildingForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *nameTextLabel;
    QLineEdit *nameLineEdit;

    void setupUi(QDialog *ModifyBuildingForm_template)
    {
        if (ModifyBuildingForm_template->objectName().isEmpty())
            ModifyBuildingForm_template->setObjectName(QStringLiteral("ModifyBuildingForm_template"));
        ModifyBuildingForm_template->resize(379, 170);
        gridLayout = new QGridLayout(ModifyBuildingForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyBuildingForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyBuildingForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        nameTextLabel = new QLabel(ModifyBuildingForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(ModifyBuildingForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        hboxLayout1->addWidget(nameLineEdit);


        gridLayout->addLayout(hboxLayout1, 0, 0, 1, 1);


        retranslateUi(ModifyBuildingForm_template);

        QMetaObject::connectSlotsByName(ModifyBuildingForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyBuildingForm_template)
    {
        ModifyBuildingForm_template->setWindowTitle(QApplication::translate("ModifyBuildingForm_template", "Modify Building Dialog", 0));
        okPushButton->setText(QApplication::translate("ModifyBuildingForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyBuildingForm_template", "Cancel", 0));
        nameTextLabel->setText(QApplication::translate("ModifyBuildingForm_template", "Name", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyBuildingForm_template: public Ui_ModifyBuildingForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYBUILDINGFORM_TEMPLATE_H
