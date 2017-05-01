/********************************************************************************
** Form generated from reading UI file 'constraintteachersmaxbuildingchangesperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintTeachersMaxBuildingChangesPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeachersMaxBuildingChangesPerDayForm_template)
    {
        if (ConstraintTeachersMaxBuildingChangesPerDayForm_template->objectName().isEmpty())
            ConstraintTeachersMaxBuildingChangesPerDayForm_template->setObjectName(QStringLiteral("ConstraintTeachersMaxBuildingChangesPerDayForm_template"));
        ConstraintTeachersMaxBuildingChangesPerDayForm_template->resize(537, 487);
        gridLayout = new QGridLayout(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(ConstraintTeachersMaxBuildingChangesPerDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeachersMaxBuildingChangesPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeachersMaxBuildingChangesPerDayForm_template)
    {
        ConstraintTeachersMaxBuildingChangesPerDayForm_template->setWindowTitle(QApplication::translate("ConstraintTeachersMaxBuildingChangesPerDayForm_template", "Constraints teachers max building changes per day", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeachersMaxBuildingChangesPerDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeachersMaxBuildingChangesPerDayForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeachersMaxBuildingChangesPerDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeachersMaxBuildingChangesPerDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeachersMaxBuildingChangesPerDayForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeachersMaxBuildingChangesPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeachersMaxBuildingChangesPerDayForm_template: public Ui_ConstraintTeachersMaxBuildingChangesPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
