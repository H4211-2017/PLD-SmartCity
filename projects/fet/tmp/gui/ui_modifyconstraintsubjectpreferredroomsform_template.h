/********************************************************************************
** Form generated from reading UI file 'modifyconstraintsubjectpreferredroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSUBJECTPREFERREDROOMSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSUBJECTPREFERREDROOMSFORM_TEMPLATE_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintSubjectPreferredRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *roomsTextLabel;
    QListWidget *roomsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *selectedRoomsTextLabel;
    QListWidget *selectedRoomsListWidget;
    QPushButton *clearPushButton;
    QVBoxLayout *vboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintSubjectPreferredRoomsForm_template)
    {
        if (ModifyConstraintSubjectPreferredRoomsForm_template->objectName().isEmpty())
            ModifyConstraintSubjectPreferredRoomsForm_template->setObjectName(QStringLiteral("ModifyConstraintSubjectPreferredRoomsForm_template"));
        ModifyConstraintSubjectPreferredRoomsForm_template->resize(566, 527);
        gridLayout = new QGridLayout(ModifyConstraintSubjectPreferredRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subjectsTextLabel = new QLabel(ModifyConstraintSubjectPreferredRoomsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 0, 1, 2);

        subjectsComboBox = new QComboBox(ModifyConstraintSubjectPreferredRoomsForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(ModifyConstraintSubjectPreferredRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(ModifyConstraintSubjectPreferredRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(ModifyConstraintSubjectPreferredRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(ModifyConstraintSubjectPreferredRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(ModifyConstraintSubjectPreferredRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintSubjectPreferredRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintSubjectPreferredRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintSubjectPreferredRoomsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintSubjectPreferredRoomsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(ModifyConstraintSubjectPreferredRoomsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintSubjectPreferredRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintSubjectPreferredRoomsForm_template)
    {
        ModifyConstraintSubjectPreferredRoomsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Modify subject preferred rooms", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Subject", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintSubjectPreferredRoomsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintSubjectPreferredRoomsForm_template: public Ui_ModifyConstraintSubjectPreferredRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSUBJECTPREFERREDROOMSFORM_TEMPLATE_H
