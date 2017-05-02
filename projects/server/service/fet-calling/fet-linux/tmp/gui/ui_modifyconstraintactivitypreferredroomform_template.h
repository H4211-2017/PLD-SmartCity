/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitypreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintActivityPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QLineEdit *weightLineEdit;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QLabel *activitiesTextLabel;
    QComboBox *activitiesComboBox;
    QLabel *weightTextLabel;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QLabel *permTextLabel;
    QCheckBox *permLockedCheckBox;
    QSpacerItem *spacer2;

    void setupUi(QDialog *ModifyConstraintActivityPreferredRoomForm_template)
    {
        if (ModifyConstraintActivityPreferredRoomForm_template->objectName().isEmpty())
            ModifyConstraintActivityPreferredRoomForm_template->setObjectName(QStringLiteral("ModifyConstraintActivityPreferredRoomForm_template"));
        ModifyConstraintActivityPreferredRoomForm_template->resize(636, 412);
        gridLayout = new QGridLayout(ModifyConstraintActivityPreferredRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightLineEdit = new QLineEdit(ModifyConstraintActivityPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 5, 0, 1, 1);

        roomsTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        gridLayout->addWidget(roomsTextLabel, 2, 0, 1, 1);

        roomsComboBox = new QComboBox(ModifyConstraintActivityPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout->addWidget(roomsComboBox, 3, 0, 1, 1);

        activitiesTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setFrameShape(QFrame::NoFrame);
        activitiesTextLabel->setFrameShadow(QFrame::Plain);
        activitiesTextLabel->setWordWrap(false);

        gridLayout->addWidget(activitiesTextLabel, 0, 0, 1, 1);

        activitiesComboBox = new QComboBox(ModifyConstraintActivityPreferredRoomForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));

        gridLayout->addWidget(activitiesComboBox, 1, 0, 1, 1);

        weightTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintActivityPreferredRoomForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivityPreferredRoomForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 9, 0, 1, 1);

        permTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomForm_template);
        permTextLabel->setObjectName(QStringLiteral("permTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(permTextLabel->sizePolicy().hasHeightForWidth());
        permTextLabel->setSizePolicy(sizePolicy);
        permTextLabel->setAlignment(Qt::AlignVCenter);
        permTextLabel->setWordWrap(true);

        gridLayout->addWidget(permTextLabel, 8, 0, 1, 1);

        permLockedCheckBox = new QCheckBox(ModifyConstraintActivityPreferredRoomForm_template);
        permLockedCheckBox->setObjectName(QStringLiteral("permLockedCheckBox"));
        permLockedCheckBox->setChecked(true);

        gridLayout->addWidget(permLockedCheckBox, 7, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 6, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        roomsTextLabel->setBuddy(roomsComboBox);
        activitiesTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifyConstraintActivityPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivityPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivityPreferredRoomForm_template)
    {
        ModifyConstraintActivityPreferredRoomForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Modify activity preferred room", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Room", 0));
        activitiesTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Activity", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Cancel", 0));
        permTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Select this if you want this constraint not to be unlockable from the 'Timetable' menu (recommended). You can always remove this constraint from the constraints dialogs or uncheck \"permanently locked\" checkbox by editing this constraint", 0));
        permLockedCheckBox->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomForm_template", "Permanently locked", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivityPreferredRoomForm_template: public Ui_ModifyConstraintActivityPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H
