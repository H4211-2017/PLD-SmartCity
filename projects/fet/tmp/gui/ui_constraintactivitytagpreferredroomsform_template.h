/********************************************************************************
** Form generated from reading UI file 'constraintactivitytagpreferredroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConstraintActivityTagPreferredRoomsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *constraintsTextLabel;
    QLabel *currentConstraintTextLabel;
    QListWidget *constraintsListWidget;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox_2;
    QGridLayout *gridLayout;
    QComboBox *activityTagsComboBox;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivityTagPreferredRoomsForm_template)
    {
        if (ConstraintActivityTagPreferredRoomsForm_template->objectName().isEmpty())
            ConstraintActivityTagPreferredRoomsForm_template->setObjectName(QStringLiteral("ConstraintActivityTagPreferredRoomsForm_template"));
        ConstraintActivityTagPreferredRoomsForm_template->resize(511, 443);
        gridLayout_2 = new QGridLayout(ConstraintActivityTagPreferredRoomsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintActivityTagPreferredRoomsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(constraintsTextLabel, 0, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintActivityTagPreferredRoomsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(currentConstraintTextLabel, 0, 2, 1, 2);

        constraintsListWidget = new QListWidget(ConstraintActivityTagPreferredRoomsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_2->addWidget(constraintsListWidget, 1, 0, 2, 2);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivityTagPreferredRoomsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_2->addWidget(currentConstraintTextEdit, 1, 2, 1, 2);

        filterGroupBox_2 = new QGroupBox(ConstraintActivityTagPreferredRoomsForm_template);
        filterGroupBox_2->setObjectName(QStringLiteral("filterGroupBox_2"));
        gridLayout = new QGridLayout(filterGroupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        activityTagsComboBox = new QComboBox(filterGroupBox_2);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox_2, 2, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivityTagPreferredRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout_2->addWidget(addConstraintPushButton, 3, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivityTagPreferredRoomsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout_2->addWidget(modifyConstraintPushButton, 3, 1, 1, 2);

        removeConstraintPushButton = new QPushButton(ConstraintActivityTagPreferredRoomsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout_2->addWidget(removeConstraintPushButton, 3, 3, 1, 1);

        closePushButton = new QPushButton(ConstraintActivityTagPreferredRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout_2->addWidget(closePushButton, 4, 1, 1, 2);


        retranslateUi(ConstraintActivityTagPreferredRoomsForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivityTagPreferredRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivityTagPreferredRoomsForm_template)
    {
        ConstraintActivityTagPreferredRoomsForm_template->setWindowTitle(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Constraints activity tag preferred rooms", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Current constraint", 0));
        filterGroupBox_2->setTitle(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivityTagPreferredRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivityTagPreferredRoomsForm_template: public Ui_ConstraintActivityTagPreferredRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITYTAGPREFERREDROOMSFORM_TEMPLATE_H
