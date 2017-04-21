/********************************************************************************
** Form generated from reading UI file 'constraintteachermaxbuildingchangesperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintTeacherMaxBuildingChangesPerDayForm_template
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeacherMaxBuildingChangesPerDayForm_template)
    {
        if (ConstraintTeacherMaxBuildingChangesPerDayForm_template->objectName().isEmpty())
            ConstraintTeacherMaxBuildingChangesPerDayForm_template->setObjectName(QStringLiteral("ConstraintTeacherMaxBuildingChangesPerDayForm_template"));
        ConstraintTeacherMaxBuildingChangesPerDayForm_template->resize(535, 481);
        gridLayout_2 = new QGridLayout(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersComboBox = new QComboBox(groupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintTeacherMaxBuildingChangesPerDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeacherMaxBuildingChangesPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeacherMaxBuildingChangesPerDayForm_template)
    {
        ConstraintTeacherMaxBuildingChangesPerDayForm_template->setWindowTitle(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Constraints teacher max building changes per day", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Current constraint", 0));
        groupBox->setTitle(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeacherMaxBuildingChangesPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeacherMaxBuildingChangesPerDayForm_template: public Ui_ConstraintTeacherMaxBuildingChangesPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
