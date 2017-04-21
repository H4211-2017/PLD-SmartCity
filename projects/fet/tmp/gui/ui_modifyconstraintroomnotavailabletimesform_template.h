/********************************************************************************
** Form generated from reading UI file 'modifyconstraintroomnotavailabletimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H

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

class Ui_ModifyConstraintRoomNotAvailableTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *roomsGridLayout;
    QLabel *roomTextLabel;
    QSpacerItem *spacer3;
    QComboBox *roomsComboBox;
    QVBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QTableWidget *notAllowedTimesTable;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAvailablePushButton;
    QLabel *label;
    QPushButton *setAllNotAvailablePushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintRoomNotAvailableTimesForm_template)
    {
        if (ModifyConstraintRoomNotAvailableTimesForm_template->objectName().isEmpty())
            ModifyConstraintRoomNotAvailableTimesForm_template->setObjectName(QStringLiteral("ModifyConstraintRoomNotAvailableTimesForm_template"));
        ModifyConstraintRoomNotAvailableTimesForm_template->resize(614, 553);
        gridLayout_2 = new QGridLayout(ModifyConstraintRoomNotAvailableTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        roomsGridLayout = new QGridLayout();
        roomsGridLayout->setSpacing(6);
        roomsGridLayout->setObjectName(QStringLiteral("roomsGridLayout"));
        roomTextLabel = new QLabel(ModifyConstraintRoomNotAvailableTimesForm_template);
        roomTextLabel->setObjectName(QStringLiteral("roomTextLabel"));
        roomTextLabel->setFrameShape(QFrame::NoFrame);
        roomTextLabel->setFrameShadow(QFrame::Plain);
        roomTextLabel->setWordWrap(false);

        roomsGridLayout->addWidget(roomTextLabel, 0, 0, 1, 1);

        spacer3 = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        roomsGridLayout->addItem(spacer3, 0, 1, 1, 1);

        roomsComboBox = new QComboBox(ModifyConstraintRoomNotAvailableTimesForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        roomsGridLayout->addWidget(roomsComboBox, 1, 0, 1, 2);


        gridLayout_2->addLayout(roomsGridLayout, 0, 0, 1, 1);

        weightBoxLayout = new QVBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintRoomNotAvailableTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintRoomNotAvailableTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 0, 1, 1, 1);

        notAllowedTimesTable = new QTableWidget(ModifyConstraintRoomNotAvailableTimesForm_template);
        notAllowedTimesTable->setObjectName(QStringLiteral("notAllowedTimesTable"));

        gridLayout_2->addWidget(notAllowedTimesTable, 1, 0, 1, 2);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAvailablePushButton = new QPushButton(ModifyConstraintRoomNotAvailableTimesForm_template);
        setAllAvailablePushButton->setObjectName(QStringLiteral("setAllAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllAvailablePushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintRoomNotAvailableTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAvailablePushButton = new QPushButton(ModifyConstraintRoomNotAvailableTimesForm_template);
        setAllNotAvailablePushButton->setObjectName(QStringLiteral("setAllNotAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllNotAvailablePushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintRoomNotAvailableTimesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintRoomNotAvailableTimesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        roomTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifyConstraintRoomNotAvailableTimesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintRoomNotAvailableTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintRoomNotAvailableTimesForm_template)
    {
        ModifyConstraintRoomNotAvailableTimesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "Modify room not available times", 0));
        roomTextLabel->setText(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        setAllAvailablePushButton->setText(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "Set all available", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAvailablePushButton->setText(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "Set all not available", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintRoomNotAvailableTimesForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintRoomNotAvailableTimesForm_template: public Ui_ModifyConstraintRoomNotAvailableTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H
