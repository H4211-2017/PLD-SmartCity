/********************************************************************************
** Form generated from reading UI file 'constraintteachersactivitytagmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H

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

class Ui_ConstraintTeachersActivityTagMaxHoursDailyForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeachersActivityTagMaxHoursDailyForm_template)
    {
        if (ConstraintTeachersActivityTagMaxHoursDailyForm_template->objectName().isEmpty())
            ConstraintTeachersActivityTagMaxHoursDailyForm_template->setObjectName(QStringLiteral("ConstraintTeachersActivityTagMaxHoursDailyForm_template"));
        ConstraintTeachersActivityTagMaxHoursDailyForm_template->resize(537, 500);
        gridLayout_2 = new QGridLayout(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 2);

        label = new QLabel(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 1, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 2, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        helpPushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 2);


        retranslateUi(ConstraintTeachersActivityTagMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeachersActivityTagMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeachersActivityTagMaxHoursDailyForm_template)
    {
        ConstraintTeachersActivityTagMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Constraints teachers activity tag max hours daily", 0));
        textLabel1->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "This constraint ensures that all teachers do not have more than max hours daily of activities with the specified activity tag.", 0));
        label->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "IMPORTANT: this constraint is not perfectly optimized. Press Help button for more information. Use with caution, as explained.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeachersActivityTagMaxHoursDailyForm_template: public Ui_ConstraintTeachersActivityTagMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
