/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitytagpreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H

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

class Ui_AddConstraintActivityTagPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *subjectsTextLabel_2;
    QComboBox *activityTagsComboBox;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivityTagPreferredRoomForm_template)
    {
        if (AddConstraintActivityTagPreferredRoomForm_template->objectName().isEmpty())
            AddConstraintActivityTagPreferredRoomForm_template->setObjectName(QStringLiteral("AddConstraintActivityTagPreferredRoomForm_template"));
        AddConstraintActivityTagPreferredRoomForm_template->resize(523, 249);
        gridLayout = new QGridLayout(AddConstraintActivityTagPreferredRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        subjectsTextLabel_2 = new QLabel(AddConstraintActivityTagPreferredRoomForm_template);
        subjectsTextLabel_2->setObjectName(QStringLiteral("subjectsTextLabel_2"));
        subjectsTextLabel_2->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel_2->setFrameShadow(QFrame::Plain);
        subjectsTextLabel_2->setWordWrap(false);

        verticalLayout->addWidget(subjectsTextLabel_2);

        activityTagsComboBox = new QComboBox(AddConstraintActivityTagPreferredRoomForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        verticalLayout->addWidget(activityTagsComboBox);

        roomsTextLabel = new QLabel(AddConstraintActivityTagPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(roomsTextLabel);

        roomsComboBox = new QComboBox(AddConstraintActivityTagPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        verticalLayout->addWidget(roomsComboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintActivityTagPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivityTagPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        verticalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintActivityTagPreferredRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintActivityTagPreferredRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        subjectsTextLabel_2->setBuddy(roomsComboBox);
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddConstraintActivityTagPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivityTagPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivityTagPreferredRoomForm_template)
    {
        AddConstraintActivityTagPreferredRoomForm_template->setWindowTitle(QApplication::translate("AddConstraintActivityTagPreferredRoomForm_template", "Add activity tag preferred room", 0));
        subjectsTextLabel_2->setText(QApplication::translate("AddConstraintActivityTagPreferredRoomForm_template", "Activity tag", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintActivityTagPreferredRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivityTagPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivityTagPreferredRoomForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivityTagPreferredRoomForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivityTagPreferredRoomForm_template: public Ui_AddConstraintActivityTagPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITYTAGPREFERREDROOMFORM_TEMPLATE_H
