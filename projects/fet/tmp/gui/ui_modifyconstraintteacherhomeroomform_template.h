/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteacherhomeroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherHomeRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QLineEdit *weightLineEdit;
    QLabel *weightTextLabel;
    QSpacerItem *spacer3;
    QComboBox *teachersComboBox;
    QLabel *teachersTextLabel;

    void setupUi(QDialog *ModifyConstraintTeacherHomeRoomForm_template)
    {
        if (ModifyConstraintTeacherHomeRoomForm_template->objectName().isEmpty())
            ModifyConstraintTeacherHomeRoomForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherHomeRoomForm_template"));
        ModifyConstraintTeacherHomeRoomForm_template->resize(467, 270);
        gridLayout = new QGridLayout(ModifyConstraintTeacherHomeRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cancelPushButton = new QPushButton(ModifyConstraintTeacherHomeRoomForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 7, 1, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintTeacherHomeRoomForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout->addWidget(okPushButton, 7, 0, 1, 1);

        roomsTextLabel = new QLabel(ModifyConstraintTeacherHomeRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        gridLayout->addWidget(roomsTextLabel, 2, 0, 1, 1);

        roomsComboBox = new QComboBox(ModifyConstraintTeacherHomeRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout->addWidget(roomsComboBox, 3, 0, 1, 2);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherHomeRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 5, 0, 1, 2);

        weightTextLabel = new QLabel(ModifyConstraintTeacherHomeRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 2);

        spacer3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer3, 6, 0, 1, 2);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherHomeRoomForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 2);

        teachersTextLabel = new QLabel(ModifyConstraintTeacherHomeRoomForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifyConstraintTeacherHomeRoomForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherHomeRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherHomeRoomForm_template)
    {
        ModifyConstraintTeacherHomeRoomForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherHomeRoomForm_template", "Modify teacher home room", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomForm_template", "Cancel", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomForm_template", "Ok", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomForm_template", "Teacher", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherHomeRoomForm_template: public Ui_ModifyConstraintTeacherHomeRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H
