/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsactivitytagmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsActivityTagMaxHoursDailyForm_template
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsActivityTagMaxHoursDailyForm_template)
    {
        if (AddConstraintStudentsActivityTagMaxHoursDailyForm_template->objectName().isEmpty())
            AddConstraintStudentsActivityTagMaxHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintStudentsActivityTagMaxHoursDailyForm_template"));
        AddConstraintStudentsActivityTagMaxHoursDailyForm_template->resize(498, 239);
        verticalLayout_2 = new QVBoxLayout(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        activityTagsTextLabel = new QLabel(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setFrameShape(QFrame::NoFrame);
        activityTagsTextLabel->setFrameShadow(QFrame::Plain);
        activityTagsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(activityTagsTextLabel);

        activityTagsComboBox = new QComboBox(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));
        activityTagsComboBox->setEditable(false);
        activityTagsComboBox->setInsertPolicy(QComboBox::NoInsert);
        activityTagsComboBox->setAutoCompletion(false);
        activityTagsComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(activityTagsComboBox);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        verticalLayout_2->addLayout(hboxLayout);


        retranslateUi(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsActivityTagMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsActivityTagMaxHoursDailyForm_template)
    {
        AddConstraintStudentsActivityTagMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsActivityTagMaxHoursDailyForm_template", "Add students activity tag max hours daily", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintStudentsActivityTagMaxHoursDailyForm_template", "Activity tag", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsActivityTagMaxHoursDailyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintStudentsActivityTagMaxHoursDailyForm_template", "Max hours daily", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsActivityTagMaxHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsActivityTagMaxHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsActivityTagMaxHoursDailyForm_template: public Ui_AddConstraintStudentsActivityTagMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
