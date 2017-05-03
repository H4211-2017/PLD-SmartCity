/********************************************************************************
** Form generated from reading UI file 'constraintteachermaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_ConstraintTeacherMaxHoursContinuouslyForm_template
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

    void setupUi(QDialog *ConstraintTeacherMaxHoursContinuouslyForm_template)
    {
        if (ConstraintTeacherMaxHoursContinuouslyForm_template->objectName().isEmpty())
            ConstraintTeacherMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("ConstraintTeacherMaxHoursContinuouslyForm_template"));
        ConstraintTeacherMaxHoursContinuouslyForm_template->resize(534, 487);
        gridLayout_2 = new QGridLayout(ConstraintTeacherMaxHoursContinuouslyForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintTeacherMaxHoursContinuouslyForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeacherMaxHoursContinuouslyForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintTeacherMaxHoursContinuouslyForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeacherMaxHoursContinuouslyForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintTeacherMaxHoursContinuouslyForm_template);
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
        addConstraintPushButton = new QPushButton(ConstraintTeacherMaxHoursContinuouslyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeacherMaxHoursContinuouslyForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeacherMaxHoursContinuouslyForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeacherMaxHoursContinuouslyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintTeacherMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeacherMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeacherMaxHoursContinuouslyForm_template)
    {
        ConstraintTeacherMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Constraints teacher max hours continuously", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeacherMaxHoursContinuouslyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeacherMaxHoursContinuouslyForm_template: public Ui_ConstraintTeacherMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
