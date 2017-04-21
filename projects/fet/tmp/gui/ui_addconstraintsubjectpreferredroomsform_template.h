/********************************************************************************
** Form generated from reading UI file 'addconstraintsubjectpreferredroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSUBJECTPREFERREDROOMSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSUBJECTPREFERREDROOMSFORM_TEMPLATE_H

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

class Ui_AddConstraintSubjectPreferredRoomsForm_template
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
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintSubjectPreferredRoomsForm_template)
    {
        if (AddConstraintSubjectPreferredRoomsForm_template->objectName().isEmpty())
            AddConstraintSubjectPreferredRoomsForm_template->setObjectName(QStringLiteral("AddConstraintSubjectPreferredRoomsForm_template"));
        AddConstraintSubjectPreferredRoomsForm_template->resize(581, 511);
        gridLayout = new QGridLayout(AddConstraintSubjectPreferredRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subjectsTextLabel = new QLabel(AddConstraintSubjectPreferredRoomsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 0, 1, 2);

        subjectsComboBox = new QComboBox(AddConstraintSubjectPreferredRoomsForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(AddConstraintSubjectPreferredRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(AddConstraintSubjectPreferredRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(AddConstraintSubjectPreferredRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(AddConstraintSubjectPreferredRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(AddConstraintSubjectPreferredRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(AddConstraintSubjectPreferredRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintSubjectPreferredRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintSubjectPreferredRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintSubjectPreferredRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(AddConstraintSubjectPreferredRoomsForm_template);

        QMetaObject::connectSlotsByName(AddConstraintSubjectPreferredRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintSubjectPreferredRoomsForm_template)
    {
        AddConstraintSubjectPreferredRoomsForm_template->setWindowTitle(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Add subject preferred rooms", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Subject", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintSubjectPreferredRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintSubjectPreferredRoomsForm_template: public Ui_AddConstraintSubjectPreferredRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSUBJECTPREFERREDROOMSFORM_TEMPLATE_H
