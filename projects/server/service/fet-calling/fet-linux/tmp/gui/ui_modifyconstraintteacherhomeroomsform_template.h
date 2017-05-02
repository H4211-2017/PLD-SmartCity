/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteacherhomeroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERHOMEROOMSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERHOMEROOMSFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherHomeRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teacherTextLabel;
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
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherHomeRoomsForm_template)
    {
        if (ModifyConstraintTeacherHomeRoomsForm_template->objectName().isEmpty())
            ModifyConstraintTeacherHomeRoomsForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherHomeRoomsForm_template"));
        ModifyConstraintTeacherHomeRoomsForm_template->resize(550, 509);
        gridLayout = new QGridLayout(ModifyConstraintTeacherHomeRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teacherTextLabel = new QLabel(ModifyConstraintTeacherHomeRoomsForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setWordWrap(false);

        gridLayout->addWidget(teacherTextLabel, 0, 0, 1, 2);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherHomeRoomsForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(ModifyConstraintTeacherHomeRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(ModifyConstraintTeacherHomeRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(ModifyConstraintTeacherHomeRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(ModifyConstraintTeacherHomeRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(ModifyConstraintTeacherHomeRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherHomeRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherHomeRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherHomeRoomsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherHomeRoomsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(ModifyConstraintTeacherHomeRoomsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherHomeRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherHomeRoomsForm_template)
    {
        ModifyConstraintTeacherHomeRoomsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Modify teacher home rooms", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Teacher", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherHomeRoomsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherHomeRoomsForm_template: public Ui_ModifyConstraintTeacherHomeRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERHOMEROOMSFORM_TEMPLATE_H
