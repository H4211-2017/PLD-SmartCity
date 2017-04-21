/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitytagpreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H

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

class Ui_ModifyConstraintActivityTagPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *subjectsTextLabel_2;
    QComboBox *activityTagsComboBox;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivityTagPreferredRoomForm_template)
    {
        if (ModifyConstraintActivityTagPreferredRoomForm_template->objectName().isEmpty())
            ModifyConstraintActivityTagPreferredRoomForm_template->setObjectName(QStringLiteral("ModifyConstraintActivityTagPreferredRoomForm_template"));
        ModifyConstraintActivityTagPreferredRoomForm_template->resize(523, 244);
        gridLayout = new QGridLayout(ModifyConstraintActivityTagPreferredRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        subjectsTextLabel_2 = new QLabel(ModifyConstraintActivityTagPreferredRoomForm_template);
        subjectsTextLabel_2->setObjectName(QStringLiteral("subjectsTextLabel_2"));
        subjectsTextLabel_2->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel_2->setFrameShadow(QFrame::Plain);
        subjectsTextLabel_2->setWordWrap(false);

        verticalLayout->addWidget(subjectsTextLabel_2);

        activityTagsComboBox = new QComboBox(ModifyConstraintActivityTagPreferredRoomForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        verticalLayout->addWidget(activityTagsComboBox);

        roomsTextLabel = new QLabel(ModifyConstraintActivityTagPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(roomsTextLabel);

        roomsComboBox = new QComboBox(ModifyConstraintActivityTagPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        verticalLayout->addWidget(roomsComboBox);

        weightTextLabel = new QLabel(ModifyConstraintActivityTagPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        verticalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivityTagPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        verticalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintActivityTagPreferredRoomForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivityTagPreferredRoomForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        subjectsTextLabel_2->setBuddy(roomsComboBox);
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifyConstraintActivityTagPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivityTagPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivityTagPreferredRoomForm_template)
    {
        ModifyConstraintActivityTagPreferredRoomForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivityTagPreferredRoomForm_template", "Modify activity tag preferred room", 0));
        subjectsTextLabel_2->setText(QApplication::translate("ModifyConstraintActivityTagPreferredRoomForm_template", "Activity tag", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintActivityTagPreferredRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivityTagPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivityTagPreferredRoomForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivityTagPreferredRoomForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivityTagPreferredRoomForm_template: public Ui_ModifyConstraintActivityTagPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
