/********************************************************************************
** Form generated from reading UI file 'constraintteachermaxgapsperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERMAXGAPSPERDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERMAXGAPSPERDAYFORM_TEMPLATE_H

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

class Ui_ConstraintTeacherMaxGapsPerDayForm_template
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeacherMaxGapsPerDayForm_template)
    {
        if (ConstraintTeacherMaxGapsPerDayForm_template->objectName().isEmpty())
            ConstraintTeacherMaxGapsPerDayForm_template->setObjectName(QStringLiteral("ConstraintTeacherMaxGapsPerDayForm_template"));
        ConstraintTeacherMaxGapsPerDayForm_template->resize(536, 465);
        gridLayout_2 = new QGridLayout(ConstraintTeacherMaxGapsPerDayForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintTeacherMaxGapsPerDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeacherMaxGapsPerDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintTeacherMaxGapsPerDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeacherMaxGapsPerDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintTeacherMaxGapsPerDayForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeacherMaxGapsPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeacherMaxGapsPerDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeacherMaxGapsPerDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeacherMaxGapsPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintTeacherMaxGapsPerDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeacherMaxGapsPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeacherMaxGapsPerDayForm_template)
    {
        ConstraintTeacherMaxGapsPerDayForm_template->setWindowTitle(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Constraints teacher max gaps per day", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeacherMaxGapsPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeacherMaxGapsPerDayForm_template: public Ui_ConstraintTeacherMaxGapsPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERMAXGAPSPERDAYFORM_TEMPLATE_H
