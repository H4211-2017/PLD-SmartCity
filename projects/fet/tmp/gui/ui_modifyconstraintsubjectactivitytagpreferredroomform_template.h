/********************************************************************************
** Form generated from reading UI file 'modifyconstraintsubjectactivitytagpreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H

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

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintSubjectActivityTagPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *subjectsTextLabel_2;
    QComboBox *activityTagsComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintSubjectActivityTagPreferredRoomForm_template)
    {
        if (ModifyConstraintSubjectActivityTagPreferredRoomForm_template->objectName().isEmpty())
            ModifyConstraintSubjectActivityTagPreferredRoomForm_template->setObjectName(QStringLiteral("ModifyConstraintSubjectActivityTagPreferredRoomForm_template"));
        ModifyConstraintSubjectActivityTagPreferredRoomForm_template->resize(450, 302);
        gridLayout = new QGridLayout(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subjectsTextLabel = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel->setFrameShadow(QFrame::Plain);
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 0, 1, 1);

        subjectsComboBox = new QComboBox(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 1, 0, 1, 2);

        subjectsTextLabel_2 = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        subjectsTextLabel_2->setObjectName(QStringLiteral("subjectsTextLabel_2"));
        subjectsTextLabel_2->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel_2->setFrameShadow(QFrame::Plain);
        subjectsTextLabel_2->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel_2, 2, 0, 1, 2);

        activityTagsComboBox = new QComboBox(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 2);

        roomsTextLabel = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        gridLayout->addWidget(roomsTextLabel, 5, 0, 1, 1);

        roomsComboBox = new QComboBox(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout->addWidget(roomsComboBox, 6, 0, 1, 2);

        weightTextLabel = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 7, 0, 1, 2);

        weightLineEdit = new QLineEdit(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 8, 0, 1, 2);

        okPushButton = new QPushButton(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout->addWidget(okPushButton, 9, 0, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 9, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        subjectsTextLabel->setBuddy(roomsComboBox);
        subjectsTextLabel_2->setBuddy(roomsComboBox);
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintSubjectActivityTagPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintSubjectActivityTagPreferredRoomForm_template)
    {
        ModifyConstraintSubjectActivityTagPreferredRoomForm_template->setWindowTitle(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomForm_template", "Modify subject activity tag preferred room", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomForm_template", "Subject", 0));
        subjectsTextLabel_2->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomForm_template", "Activity tag", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintSubjectActivityTagPreferredRoomForm_template: public Ui_ModifyConstraintSubjectActivityTagPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
