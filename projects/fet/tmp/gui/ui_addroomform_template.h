/********************************************************************************
** Form generated from reading UI file 'addroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROOMFORM_TEMPLATE_H
#define UI_ADDROOMFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *nameTextLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *addRoomPushButton;
    QPushButton *closePushButton;
    QPushButton *helpPushButton;
    QHBoxLayout *hboxLayout2;
    QLabel *capacityTextLabel;
    QSpinBox *capacitySpinBox;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel1;
    QComboBox *buildingsComboBox;

    void setupUi(QDialog *AddRoomForm_template)
    {
        if (AddRoomForm_template->objectName().isEmpty())
            AddRoomForm_template->setObjectName(QStringLiteral("AddRoomForm_template"));
        AddRoomForm_template->resize(379, 277);
        gridLayout = new QGridLayout(AddRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        nameTextLabel = new QLabel(AddRoomForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        hboxLayout->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(AddRoomForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        hboxLayout->addWidget(nameLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        addRoomPushButton = new QPushButton(AddRoomForm_template);
        addRoomPushButton->setObjectName(QStringLiteral("addRoomPushButton"));
        addRoomPushButton->setDefault(true);

        hboxLayout1->addWidget(addRoomPushButton);

        closePushButton = new QPushButton(AddRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);

        helpPushButton = new QPushButton(AddRoomForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        hboxLayout1->addWidget(helpPushButton);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        capacityTextLabel = new QLabel(AddRoomForm_template);
        capacityTextLabel->setObjectName(QStringLiteral("capacityTextLabel"));
        capacityTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(capacityTextLabel);

        capacitySpinBox = new QSpinBox(AddRoomForm_template);
        capacitySpinBox->setObjectName(QStringLiteral("capacitySpinBox"));
        capacitySpinBox->setMinimum(1);
        capacitySpinBox->setMaximum(1000);
        capacitySpinBox->setValue(1000);

        hboxLayout2->addWidget(capacitySpinBox);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        textLabel1 = new QLabel(AddRoomForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout3->addWidget(textLabel1);

        buildingsComboBox = new QComboBox(AddRoomForm_template);
        buildingsComboBox->setObjectName(QStringLiteral("buildingsComboBox"));

        hboxLayout3->addWidget(buildingsComboBox);


        gridLayout->addLayout(hboxLayout3, 1, 0, 1, 1);


        retranslateUi(AddRoomForm_template);

        QMetaObject::connectSlotsByName(AddRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddRoomForm_template)
    {
        AddRoomForm_template->setWindowTitle(QApplication::translate("AddRoomForm_template", "Add room", 0));
        nameTextLabel->setText(QApplication::translate("AddRoomForm_template", "Name", 0));
        addRoomPushButton->setText(QApplication::translate("AddRoomForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddRoomForm_template", "Close", 0));
        helpPushButton->setText(QApplication::translate("AddRoomForm_template", "Help", 0));
        capacityTextLabel->setText(QApplication::translate("AddRoomForm_template", "Capacity", 0));
        textLabel1->setText(QApplication::translate("AddRoomForm_template", "Building", 0));
    } // retranslateUi

};

namespace Ui {
    class AddRoomForm_template: public Ui_AddRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROOMFORM_TEMPLATE_H
