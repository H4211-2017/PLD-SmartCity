/********************************************************************************
** Form generated from reading UI file 'addconstraintteacherhomeroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H

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

class Ui_AddConstraintTeacherHomeRoomForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QVBoxLayout *vboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *spacer1;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QVBoxLayout *vboxLayout2;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;

    void setupUi(QDialog *AddConstraintTeacherHomeRoomForm_template)
    {
        if (AddConstraintTeacherHomeRoomForm_template->objectName().isEmpty())
            AddConstraintTeacherHomeRoomForm_template->setObjectName(QStringLiteral("AddConstraintTeacherHomeRoomForm_template"));
        AddConstraintTeacherHomeRoomForm_template->resize(463, 273);
        gridLayout = new QGridLayout(AddConstraintTeacherHomeRoomForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        roomsTextLabel = new QLabel(AddConstraintTeacherHomeRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(roomsTextLabel);

        roomsComboBox = new QComboBox(AddConstraintTeacherHomeRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        vboxLayout->addWidget(roomsComboBox);


        gridLayout->addLayout(vboxLayout, 1, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        weightTextLabel = new QLabel(AddConstraintTeacherHomeRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherHomeRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout1, 2, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherHomeRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherHomeRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        teachersTextLabel = new QLabel(AddConstraintTeacherHomeRoomForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        vboxLayout2->addWidget(teachersTextLabel);

        teachersComboBox = new QComboBox(AddConstraintTeacherHomeRoomForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        vboxLayout2->addWidget(teachersComboBox);


        gridLayout->addLayout(vboxLayout2, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddConstraintTeacherHomeRoomForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherHomeRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherHomeRoomForm_template)
    {
        AddConstraintTeacherHomeRoomForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherHomeRoomForm_template", "Add teacher home room", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintTeacherHomeRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherHomeRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherHomeRoomForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherHomeRoomForm_template", "Close", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintTeacherHomeRoomForm_template", "Teacher", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherHomeRoomForm_template: public Ui_AddConstraintTeacherHomeRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H
