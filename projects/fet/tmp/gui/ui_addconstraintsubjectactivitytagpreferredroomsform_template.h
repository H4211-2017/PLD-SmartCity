/********************************************************************************
** Form generated from reading UI file 'addconstraintsubjectactivitytagpreferredroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H

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

class Ui_AddConstraintSubjectActivityTagPreferredRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QVBoxLayout *verticalLayout;
    QLabel *roomsTextLabel;
    QListWidget *roomsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *selectedRoomsTextLabel;
    QListWidget *selectedRoomsListWidget;
    QPushButton *clearPushButton;
    QVBoxLayout *vboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintSubjectActivityTagPreferredRoomsForm_template)
    {
        if (AddConstraintSubjectActivityTagPreferredRoomsForm_template->objectName().isEmpty())
            AddConstraintSubjectActivityTagPreferredRoomsForm_template->setObjectName(QStringLiteral("AddConstraintSubjectActivityTagPreferredRoomsForm_template"));
        AddConstraintSubjectActivityTagPreferredRoomsForm_template->resize(581, 515);
        gridLayout = new QGridLayout(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subjectsTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 0, 1, 2);

        subjectsComboBox = new QComboBox(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 1, 0, 1, 2);

        activityTagsTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 2, 0, 1, 2);

        activityTagsComboBox = new QComboBox(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 3, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        roomsTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(roomsTextLabel);

        roomsListWidget = new QListWidget(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));

        verticalLayout->addWidget(roomsListWidget);


        gridLayout->addLayout(verticalLayout, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        selectedRoomsTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        selectedRoomsTextLabel->setObjectName(QStringLiteral("selectedRoomsTextLabel"));
        selectedRoomsTextLabel->setFrameShape(QFrame::NoFrame);
        selectedRoomsTextLabel->setFrameShadow(QFrame::Plain);
        selectedRoomsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(selectedRoomsTextLabel);

        selectedRoomsListWidget = new QListWidget(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        selectedRoomsListWidget->setObjectName(QStringLiteral("selectedRoomsListWidget"));

        verticalLayout_2->addWidget(selectedRoomsListWidget);

        clearPushButton = new QPushButton(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout_2->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout_2, 4, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(vboxLayout, 5, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);


        retranslateUi(AddConstraintSubjectActivityTagPreferredRoomsForm_template);

        QMetaObject::connectSlotsByName(AddConstraintSubjectActivityTagPreferredRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintSubjectActivityTagPreferredRoomsForm_template)
    {
        AddConstraintSubjectActivityTagPreferredRoomsForm_template->setWindowTitle(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Add subject activity tag preferred rooms", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Activity tag", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Rooms", 0));
        selectedRoomsTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Selected", "It refers to a list of selected rooms"));
        clearPushButton->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Clear", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintSubjectActivityTagPreferredRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintSubjectActivityTagPreferredRoomsForm_template: public Ui_AddConstraintSubjectActivityTagPreferredRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSUBJECTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H
