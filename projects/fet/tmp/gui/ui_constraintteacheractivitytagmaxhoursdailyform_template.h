/********************************************************************************
** Form generated from reading UI file 'constraintteacheractivitytagmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H

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

class Ui_ConstraintTeacherActivityTagMaxHoursDailyForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *teachersComboBox;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeacherActivityTagMaxHoursDailyForm_template)
    {
        if (ConstraintTeacherActivityTagMaxHoursDailyForm_template->objectName().isEmpty())
            ConstraintTeacherActivityTagMaxHoursDailyForm_template->setObjectName(QStringLiteral("ConstraintTeacherActivityTagMaxHoursDailyForm_template"));
        ConstraintTeacherActivityTagMaxHoursDailyForm_template->resize(543, 500);
        gridLayout_2 = new QGridLayout(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 2);

        label = new QLabel(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 2, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout, 2, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 0, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 1, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        helpPushButton = new QPushButton(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 2);


        retranslateUi(ConstraintTeacherActivityTagMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeacherActivityTagMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeacherActivityTagMaxHoursDailyForm_template)
    {
        ConstraintTeacherActivityTagMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Constraints teacher activity tag max hours daily", 0));
        textLabel1->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "This constraint ensures that the specified teacher does not have more than max hours daily of activities with the specified activity tag.", 0));
        label->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "IMPORTANT: this constraint is not perfectly optimized. Press Help button for more information. Use with caution, as explained.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeacherActivityTagMaxHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeacherActivityTagMaxHoursDailyForm_template: public Ui_ConstraintTeacherActivityTagMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
