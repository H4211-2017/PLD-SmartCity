/********************************************************************************
** Form generated from reading UI file 'addconstraintteacherhomeroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERHOMEROOMSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERHOMEROOMSFORM_TEMPLATE_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintTeacherHomeRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *roomsTextLabel;
    QListWidget *roomsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *selectedRoomsTextLabel;
    QListWidget *selectedRoomsListWidget;
    QPushButton *clearPushButton;
    QVBoxLayout *vboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeacherHomeRoomsForm_template)
    {
        if (AddConstraintTeacherHomeRoomsForm_template->objectName().isEmpty())
            AddConstraintTeacherHomeRoomsForm_template->setObjectName(QStringLiteral("AddConstraintTeacherHomeRoomsForm_template"));
        AddConstraintTeacherHomeRoomsForm_template->resize(594, 540);
        gridLayout = new QGridLayout(AddConstraintTeacherHomeRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(AddConstraintTeacherHomeRoomsForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 2);

        teachersComboBox = new QComboBox(AddConstraintTeacherHomeRoomsForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(AddConstraintTeacherHomeRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(AddConstraintTeacherHomeRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(AddConstraintTeacherHomeRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(AddConstraintTeacherHomeRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(AddConstraintTeacherHomeRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(AddConstraintTeacherHomeRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherHomeRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherHomeRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherHomeRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(AddConstraintTeacherHomeRoomsForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherHomeRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherHomeRoomsForm_template)
    {
        AddConstraintTeacherHomeRoomsForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Add teacher home rooms", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Teacher", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherHomeRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherHomeRoomsForm_template: public Ui_AddConstraintTeacherHomeRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERHOMEROOMSFORM_TEMPLATE_H
