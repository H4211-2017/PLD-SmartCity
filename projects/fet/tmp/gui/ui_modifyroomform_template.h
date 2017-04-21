/********************************************************************************
** Form generated from reading UI file 'modifyroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYROOMFORM_TEMPLATE_H
#define UI_MODIFYROOMFORM_TEMPLATE_H

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

class Ui_ModifyRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *capacityTextLabel;
    QSpinBox *capacitySpinBox;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QComboBox *buildingsComboBox;
    QHBoxLayout *hboxLayout3;
    QLabel *nameTextLabel;
    QLineEdit *nameLineEdit;

    void setupUi(QDialog *ModifyRoomForm_template)
    {
        if (ModifyRoomForm_template->objectName().isEmpty())
            ModifyRoomForm_template->setObjectName(QStringLiteral("ModifyRoomForm_template"));
        ModifyRoomForm_template->resize(380, 257);
        gridLayout = new QGridLayout(ModifyRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyRoomForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyRoomForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        capacityTextLabel = new QLabel(ModifyRoomForm_template);
        capacityTextLabel->setObjectName(QStringLiteral("capacityTextLabel"));
        capacityTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(capacityTextLabel);

        capacitySpinBox = new QSpinBox(ModifyRoomForm_template);
        capacitySpinBox->setObjectName(QStringLiteral("capacitySpinBox"));
        capacitySpinBox->setMinimum(1);
        capacitySpinBox->setMaximum(1000);
        capacitySpinBox->setValue(1000);

        hboxLayout1->addWidget(capacitySpinBox);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel1 = new QLabel(ModifyRoomForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1);

        buildingsComboBox = new QComboBox(ModifyRoomForm_template);
        buildingsComboBox->setObjectName(QStringLiteral("buildingsComboBox"));

        hboxLayout2->addWidget(buildingsComboBox);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        nameTextLabel = new QLabel(ModifyRoomForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        hboxLayout3->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(ModifyRoomForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        hboxLayout3->addWidget(nameLineEdit);


        gridLayout->addLayout(hboxLayout3, 0, 0, 1, 1);


        retranslateUi(ModifyRoomForm_template);

        QMetaObject::connectSlotsByName(ModifyRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyRoomForm_template)
    {
        ModifyRoomForm_template->setWindowTitle(QApplication::translate("ModifyRoomForm_template", "Modify room", 0));
        okPushButton->setText(QApplication::translate("ModifyRoomForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyRoomForm_template", "Cancel", 0));
        capacityTextLabel->setText(QApplication::translate("ModifyRoomForm_template", "Capacity", 0));
        textLabel1->setText(QApplication::translate("ModifyRoomForm_template", "Building", 0));
        nameTextLabel->setText(QApplication::translate("ModifyRoomForm_template", "Name", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyRoomForm_template: public Ui_ModifyRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYROOMFORM_TEMPLATE_H
