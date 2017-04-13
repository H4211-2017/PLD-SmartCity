/********************************************************************************
** Form generated from reading UI file 'addbuildingform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBUILDINGFORM_TEMPLATE_H
#define UI_ADDBUILDINGFORM_TEMPLATE_H

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

class Ui_AddBuildingForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *nameTextLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *addBuildingPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddBuildingForm_template)
    {
        if (AddBuildingForm_template->objectName().isEmpty())
            AddBuildingForm_template->setObjectName(QStringLiteral("AddBuildingForm_template"));
        AddBuildingForm_template->resize(379, 163);
        gridLayout = new QGridLayout(AddBuildingForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        nameTextLabel = new QLabel(AddBuildingForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        hboxLayout->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(AddBuildingForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        hboxLayout->addWidget(nameLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        addBuildingPushButton = new QPushButton(AddBuildingForm_template);
        addBuildingPushButton->setObjectName(QStringLiteral("addBuildingPushButton"));
        addBuildingPushButton->setDefault(true);

        hboxLayout1->addWidget(addBuildingPushButton);

        closePushButton = new QPushButton(AddBuildingForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);


        retranslateUi(AddBuildingForm_template);

        QMetaObject::connectSlotsByName(AddBuildingForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddBuildingForm_template)
    {
        AddBuildingForm_template->setWindowTitle(QApplication::translate("AddBuildingForm_template", "Add building", 0));
        nameTextLabel->setText(QApplication::translate("AddBuildingForm_template", "Name", 0));
        addBuildingPushButton->setText(QApplication::translate("AddBuildingForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddBuildingForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddBuildingForm_template: public Ui_AddBuildingForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBUILDINGFORM_TEMPLATE_H
