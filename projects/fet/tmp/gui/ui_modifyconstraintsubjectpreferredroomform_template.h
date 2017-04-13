/********************************************************************************
** Form generated from reading UI file 'modifyconstraintsubjectpreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSUBJECTPREFERREDROOMFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSUBJECTPREFERREDROOMFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintSubjectPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintSubjectPreferredRoomForm_template)
    {
        if (ModifyConstraintSubjectPreferredRoomForm_template->objectName().isEmpty())
            ModifyConstraintSubjectPreferredRoomForm_template->setObjectName(QStringLiteral("ModifyConstraintSubjectPreferredRoomForm_template"));
        ModifyConstraintSubjectPreferredRoomForm_template->resize(477, 242);
        gridLayout = new QGridLayout(ModifyConstraintSubjectPreferredRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        subjectsTextLabel = new QLabel(ModifyConstraintSubjectPreferredRoomForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel->setFrameShadow(QFrame::Plain);
        subjectsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(subjectsTextLabel);

        subjectsComboBox = new QComboBox(ModifyConstraintSubjectPreferredRoomForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        verticalLayout->addWidget(subjectsComboBox);

        roomsTextLabel = new QLabel(ModifyConstraintSubjectPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(roomsTextLabel);

        roomsComboBox = new QComboBox(ModifyConstraintSubjectPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        verticalLayout->addWidget(roomsComboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        weightTextLabel = new QLabel(ModifyConstraintSubjectPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 2, 0, 1, 2);

        weightLineEdit = new QLineEdit(ModifyConstraintSubjectPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 3, 0, 1, 2);

        okPushButton = new QPushButton(ModifyConstraintSubjectPreferredRoomForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout->addWidget(okPushButton, 4, 0, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintSubjectPreferredRoomForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 4, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        subjectsTextLabel->setBuddy(roomsComboBox);
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifyConstraintSubjectPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintSubjectPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintSubjectPreferredRoomForm_template)
    {
        ModifyConstraintSubjectPreferredRoomForm_template->setWindowTitle(QApplication::translate("ModifyConstraintSubjectPreferredRoomForm_template", "Modify subject preferred room", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomForm_template", "Subject", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintSubjectPreferredRoomForm_template: public Ui_ModifyConstraintSubjectPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSUBJECTPREFERREDROOMFORM_TEMPLATE_H
