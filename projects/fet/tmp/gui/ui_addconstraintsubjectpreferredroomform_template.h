/********************************************************************************
** Form generated from reading UI file 'addconstraintsubjectpreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSUBJECTPREFERREDROOMFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSUBJECTPREFERREDROOMFORM_TEMPLATE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintSubjectPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintSubjectPreferredRoomForm_template)
    {
        if (AddConstraintSubjectPreferredRoomForm_template->objectName().isEmpty())
            AddConstraintSubjectPreferredRoomForm_template->setObjectName(QStringLiteral("AddConstraintSubjectPreferredRoomForm_template"));
        AddConstraintSubjectPreferredRoomForm_template->resize(509, 231);
        gridLayout = new QGridLayout(AddConstraintSubjectPreferredRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        subjectsTextLabel = new QLabel(AddConstraintSubjectPreferredRoomForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel->setFrameShadow(QFrame::Plain);
        subjectsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(subjectsTextLabel);

        subjectsComboBox = new QComboBox(AddConstraintSubjectPreferredRoomForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        verticalLayout_2->addWidget(subjectsComboBox);

        roomsTextLabel = new QLabel(AddConstraintSubjectPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsComboBox = new QComboBox(AddConstraintSubjectPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        verticalLayout_2->addWidget(roomsComboBox);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        weightTextLabel = new QLabel(AddConstraintSubjectPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        verticalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintSubjectPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        verticalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintSubjectPreferredRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintSubjectPreferredRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        subjectsTextLabel->setBuddy(roomsComboBox);
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddConstraintSubjectPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(AddConstraintSubjectPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintSubjectPreferredRoomForm_template)
    {
        AddConstraintSubjectPreferredRoomForm_template->setWindowTitle(QApplication::translate("AddConstraintSubjectPreferredRoomForm_template", "Add subject preferred room", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintSubjectPreferredRoomForm_template", "Subject", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintSubjectPreferredRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintSubjectPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintSubjectPreferredRoomForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintSubjectPreferredRoomForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintSubjectPreferredRoomForm_template: public Ui_AddConstraintSubjectPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSUBJECTPREFERREDROOMFORM_TEMPLATE_H
