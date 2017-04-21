/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssethomeroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetHomeRoomsForm_template
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
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsSetHomeRoomsForm_template)
    {
        if (AddConstraintStudentsSetHomeRoomsForm_template->objectName().isEmpty())
            AddConstraintStudentsSetHomeRoomsForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetHomeRoomsForm_template"));
        AddConstraintStudentsSetHomeRoomsForm_template->resize(614, 540);
        gridLayout = new QGridLayout(AddConstraintStudentsSetHomeRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        studentsTextLabel = new QLabel(AddConstraintStudentsSetHomeRoomsForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 0, 0, 1, 2);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetHomeRoomsForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(AddConstraintStudentsSetHomeRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(AddConstraintStudentsSetHomeRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(AddConstraintStudentsSetHomeRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(AddConstraintStudentsSetHomeRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(AddConstraintStudentsSetHomeRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(AddConstraintStudentsSetHomeRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetHomeRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetHomeRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetHomeRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(AddConstraintStudentsSetHomeRoomsForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetHomeRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetHomeRoomsForm_template)
    {
        AddConstraintStudentsSetHomeRoomsForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Add students set home rooms", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Students set", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetHomeRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetHomeRoomsForm_template: public Ui_AddConstraintStudentsSetHomeRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H
