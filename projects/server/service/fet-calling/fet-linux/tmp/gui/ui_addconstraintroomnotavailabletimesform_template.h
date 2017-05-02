/********************************************************************************
** Form generated from reading UI file 'addconstraintroomnotavailabletimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintRoomNotAvailableTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *roomGridLayout;
    QSpacerItem *spacer2;
    QComboBox *roomsComboBox;
    QLabel *roomTextLabel;
    QVBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QTableWidget *notAllowedTimesTable;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAvailablePushButton;
    QLabel *label;
    QPushButton *setAllNotAvailablePushButton;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintRoomNotAvailableTimesForm_template)
    {
        if (AddConstraintRoomNotAvailableTimesForm_template->objectName().isEmpty())
            AddConstraintRoomNotAvailableTimesForm_template->setObjectName(QStringLiteral("AddConstraintRoomNotAvailableTimesForm_template"));
        AddConstraintRoomNotAvailableTimesForm_template->resize(621, 533);
        gridLayout_2 = new QGridLayout(AddConstraintRoomNotAvailableTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        roomGridLayout = new QGridLayout();
        roomGridLayout->setSpacing(6);
        roomGridLayout->setObjectName(QStringLiteral("roomGridLayout"));
        spacer2 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        roomGridLayout->addItem(spacer2, 0, 1, 1, 1);

        roomsComboBox = new QComboBox(AddConstraintRoomNotAvailableTimesForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        roomGridLayout->addWidget(roomsComboBox, 1, 0, 1, 2);

        roomTextLabel = new QLabel(AddConstraintRoomNotAvailableTimesForm_template);
        roomTextLabel->setObjectName(QStringLiteral("roomTextLabel"));
        roomTextLabel->setFrameShape(QFrame::NoFrame);
        roomTextLabel->setFrameShadow(QFrame::Plain);
        roomTextLabel->setWordWrap(false);

        roomGridLayout->addWidget(roomTextLabel, 0, 0, 1, 1);


        gridLayout_2->addLayout(roomGridLayout, 0, 0, 1, 1);

        weightBoxLayout = new QVBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintRoomNotAvailableTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintRoomNotAvailableTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 0, 1, 1, 1);

        notAllowedTimesTable = new QTableWidget(AddConstraintRoomNotAvailableTimesForm_template);
        notAllowedTimesTable->setObjectName(QStringLiteral("notAllowedTimesTable"));

        gridLayout_2->addWidget(notAllowedTimesTable, 1, 0, 1, 2);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAvailablePushButton = new QPushButton(AddConstraintRoomNotAvailableTimesForm_template);
        setAllAvailablePushButton->setObjectName(QStringLiteral("setAllAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllAvailablePushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintRoomNotAvailableTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAvailablePushButton = new QPushButton(AddConstraintRoomNotAvailableTimesForm_template);
        setAllNotAvailablePushButton->setObjectName(QStringLiteral("setAllNotAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllNotAvailablePushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintRoomNotAvailableTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintRoomNotAvailableTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        roomTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddConstraintRoomNotAvailableTimesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintRoomNotAvailableTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintRoomNotAvailableTimesForm_template)
    {
        AddConstraintRoomNotAvailableTimesForm_template->setWindowTitle(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "Add room not available times", 0));
        roomTextLabel->setText(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        setAllAvailablePushButton->setText(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "Set all available", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAvailablePushButton->setText(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "Set all not available", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintRoomNotAvailableTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintRoomNotAvailableTimesForm_template: public Ui_AddConstraintRoomNotAvailableTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H
