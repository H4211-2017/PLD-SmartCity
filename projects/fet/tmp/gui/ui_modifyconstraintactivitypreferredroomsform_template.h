/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitypreferredroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITYPREFERREDROOMSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITYPREFERREDROOMSFORM_TEMPLATE_H

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

class Ui_ModifyConstraintActivityPreferredRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *activitiesTextLabel;
    QComboBox *activitiesComboBox;
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

    void setupUi(QDialog *ModifyConstraintActivityPreferredRoomsForm_template)
    {
        if (ModifyConstraintActivityPreferredRoomsForm_template->objectName().isEmpty())
            ModifyConstraintActivityPreferredRoomsForm_template->setObjectName(QStringLiteral("ModifyConstraintActivityPreferredRoomsForm_template"));
        ModifyConstraintActivityPreferredRoomsForm_template->resize(603, 497);
        gridLayout = new QGridLayout(ModifyConstraintActivityPreferredRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        activitiesTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomsForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setWordWrap(false);

        gridLayout->addWidget(activitiesTextLabel, 0, 0, 1, 2);

        activitiesComboBox = new QComboBox(ModifyConstraintActivityPreferredRoomsForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));

        gridLayout->addWidget(activitiesComboBox, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(ModifyConstraintActivityPreferredRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(ModifyConstraintActivityPreferredRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(ModifyConstraintActivityPreferredRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivityPreferredRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivityPreferredRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintActivityPreferredRoomsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivityPreferredRoomsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(ModifyConstraintActivityPreferredRoomsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivityPreferredRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivityPreferredRoomsForm_template)
    {
        ModifyConstraintActivityPreferredRoomsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Modify activity preferred rooms", 0));
        activitiesTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Activity", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredRoomsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivityPreferredRoomsForm_template: public Ui_ModifyConstraintActivityPreferredRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITYPREFERREDROOMSFORM_TEMPLATE_H
