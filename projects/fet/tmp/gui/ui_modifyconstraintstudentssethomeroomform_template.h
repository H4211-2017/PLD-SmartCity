/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssethomeroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETHOMEROOMFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETHOMEROOMFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetHomeRoomForm_template
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
    QComboBox *studentsComboBox;
    QLabel *studentsTextLabel;

    void setupUi(QDialog *ModifyConstraintStudentsSetHomeRoomForm_template)
    {
        if (ModifyConstraintStudentsSetHomeRoomForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetHomeRoomForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetHomeRoomForm_template"));
        ModifyConstraintStudentsSetHomeRoomForm_template->resize(441, 270);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetHomeRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetHomeRoomForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 7, 1, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintStudentsSetHomeRoomForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout->addWidget(okPushButton, 7, 0, 1, 1);

        roomsTextLabel = new QLabel(ModifyConstraintStudentsSetHomeRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        gridLayout->addWidget(roomsTextLabel, 2, 0, 1, 1);

        roomsComboBox = new QComboBox(ModifyConstraintStudentsSetHomeRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout->addWidget(roomsComboBox, 3, 0, 1, 2);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetHomeRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 5, 0, 1, 2);

        weightTextLabel = new QLabel(ModifyConstraintStudentsSetHomeRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 2);

        spacer3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer3, 6, 0, 1, 2);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetHomeRoomForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 0, 1, 2);

        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetHomeRoomForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 0, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ModifyConstraintStudentsSetHomeRoomForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetHomeRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetHomeRoomForm_template)
    {
        ModifyConstraintStudentsSetHomeRoomForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetHomeRoomForm_template", "Modify students set home room", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomForm_template", "Cancel", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomForm_template", "Ok", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomForm_template", "Students set", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetHomeRoomForm_template: public Ui_ModifyConstraintStudentsSetHomeRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETHOMEROOMFORM_TEMPLATE_H
