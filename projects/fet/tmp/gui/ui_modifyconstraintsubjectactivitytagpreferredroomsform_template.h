/********************************************************************************
** Form generated from reading UI file 'modifyconstraintsubjectactivitytagpreferredroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H

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

class Ui_ModifyConstraintSubjectActivityTagPreferredRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *subjectsTextLabel_2;
    QComboBox *activityTagsComboBox;
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

    void setupUi(QDialog *ModifyConstraintSubjectActivityTagPreferredRoomsForm_template)
    {
        if (ModifyConstraintSubjectActivityTagPreferredRoomsForm_template->objectName().isEmpty())
            ModifyConstraintSubjectActivityTagPreferredRoomsForm_template->setObjectName(QStringLiteral("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template"));
        ModifyConstraintSubjectActivityTagPreferredRoomsForm_template->resize(603, 556);
        gridLayout = new QGridLayout(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subjectsTextLabel = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 0, 1, 2);

        subjectsComboBox = new QComboBox(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 1, 0, 1, 2);

        subjectsTextLabel_2 = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        subjectsTextLabel_2->setObjectName(QStringLiteral("subjectsTextLabel_2"));
        subjectsTextLabel_2->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel_2, 2, 0, 1, 2);

        activityTagsComboBox = new QComboBox(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 3, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        roomsTextLabel = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout_2->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout_2, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedRoomsTextLabel = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 4, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 5, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);


        retranslateUi(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintSubjectActivityTagPreferredRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintSubjectActivityTagPreferredRoomsForm_template)
    {
        ModifyConstraintSubjectActivityTagPreferredRoomsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Modify subject activity tag preferred rooms", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Subject", 0));
        subjectsTextLabel_2->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Activity tag", 0));
        roomsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintSubjectActivityTagPreferredRoomsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintSubjectActivityTagPreferredRoomsForm_template: public Ui_ModifyConstraintSubjectActivityTagPreferredRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H
