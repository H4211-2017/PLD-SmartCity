/********************************************************************************
** Form generated from reading UI file 'addconstraintsubjectactivitytagpreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H

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

class Ui_AddConstraintSubjectActivityTagPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *subjectsTextLabel_2;
    QComboBox *activityTagsComboBox;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintSubjectActivityTagPreferredRoomForm_template)
    {
        if (AddConstraintSubjectActivityTagPreferredRoomForm_template->objectName().isEmpty())
            AddConstraintSubjectActivityTagPreferredRoomForm_template->setObjectName(QStringLiteral("AddConstraintSubjectActivityTagPreferredRoomForm_template"));
        AddConstraintSubjectActivityTagPreferredRoomForm_template->resize(503, 306);
        gridLayout = new QGridLayout(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        subjectsTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel->setFrameShadow(QFrame::Plain);
        subjectsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(subjectsTextLabel);

        subjectsComboBox = new QComboBox(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        verticalLayout->addWidget(subjectsComboBox);

        subjectsTextLabel_2 = new QLabel(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        subjectsTextLabel_2->setObjectName(QStringLiteral("subjectsTextLabel_2"));
        subjectsTextLabel_2->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel_2->setFrameShadow(QFrame::Plain);
        subjectsTextLabel_2->setWordWrap(false);

        verticalLayout->addWidget(subjectsTextLabel_2);

        activityTagsComboBox = new QComboBox(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        verticalLayout->addWidget(activityTagsComboBox);

        roomsTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(roomsTextLabel);

        roomsComboBox = new QComboBox(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        verticalLayout->addWidget(roomsComboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        verticalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 2);

        addConstraintPushButton = new QPushButton(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout->addWidget(addConstraintPushButton, 3, 0, 1, 1);

        closePushButton = new QPushButton(AddConstraintSubjectActivityTagPreferredRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        subjectsTextLabel->setBuddy(roomsComboBox);
        subjectsTextLabel_2->setBuddy(roomsComboBox);
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddConstraintSubjectActivityTagPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(AddConstraintSubjectActivityTagPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintSubjectActivityTagPreferredRoomForm_template)
    {
        AddConstraintSubjectActivityTagPreferredRoomForm_template->setWindowTitle(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomForm_template", "Add subject activity tag preferred room", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomForm_template", "Subject", 0));
        subjectsTextLabel_2->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomForm_template", "Activity tag", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintSubjectActivityTagPreferredRoomForm_template: public Ui_AddConstraintSubjectActivityTagPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
