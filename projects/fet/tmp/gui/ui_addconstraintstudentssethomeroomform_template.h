/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssethomeroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETHOMEROOMFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETHOMEROOMFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetHomeRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QVBoxLayout *vboxLayout1;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QSpacerItem *spacer1;
    QVBoxLayout *vboxLayout2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsSetHomeRoomForm_template)
    {
        if (AddConstraintStudentsSetHomeRoomForm_template->objectName().isEmpty())
            AddConstraintStudentsSetHomeRoomForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetHomeRoomForm_template"));
        AddConstraintStudentsSetHomeRoomForm_template->resize(441, 265);
        gridLayout = new QGridLayout(AddConstraintStudentsSetHomeRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(AddConstraintStudentsSetHomeRoomForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetHomeRoomForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        vboxLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        roomsTextLabel = new QLabel(AddConstraintStudentsSetHomeRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        vboxLayout1->addWidget(roomsTextLabel);

        roomsComboBox = new QComboBox(AddConstraintStudentsSetHomeRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        vboxLayout1->addWidget(roomsComboBox);


        gridLayout->addLayout(vboxLayout1, 1, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 2, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        weightTextLabel = new QLabel(AddConstraintStudentsSetHomeRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetHomeRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout2->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout2, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetHomeRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetHomeRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddConstraintStudentsSetHomeRoomForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetHomeRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetHomeRoomForm_template)
    {
        AddConstraintStudentsSetHomeRoomForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetHomeRoomForm_template", "Add students set home room", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomForm_template", "Students set", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetHomeRoomForm_template: public Ui_AddConstraintStudentsSetHomeRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETHOMEROOMFORM_TEMPLATE_H
