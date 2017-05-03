/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssethomeroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetHomeRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
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

    void setupUi(QDialog *ModifyConstraintStudentsSetHomeRoomsForm_template)
    {
        if (ModifyConstraintStudentsSetHomeRoomsForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetHomeRoomsForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetHomeRoomsForm_template"));
        ModifyConstraintStudentsSetHomeRoomsForm_template->resize(598, 524);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetHomeRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetHomeRoomsForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 0, 0, 1, 2);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetHomeRoomsForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(ModifyConstraintStudentsSetHomeRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(ModifyConstraintStudentsSetHomeRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(ModifyConstraintStudentsSetHomeRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(ModifyConstraintStudentsSetHomeRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(ModifyConstraintStudentsSetHomeRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetHomeRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetHomeRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetHomeRoomsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetHomeRoomsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(ModifyConstraintStudentsSetHomeRoomsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetHomeRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetHomeRoomsForm_template)
    {
        ModifyConstraintStudentsSetHomeRoomsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Modify students set home rooms", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Students set", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetHomeRoomsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetHomeRoomsForm_template: public Ui_ModifyConstraintStudentsSetHomeRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H
