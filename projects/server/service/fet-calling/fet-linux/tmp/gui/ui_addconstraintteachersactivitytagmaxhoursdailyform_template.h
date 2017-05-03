/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersactivitytagmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintTeachersActivityTagMaxHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *activityTagTextLabel;
    QComboBox *activityTagsComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeachersActivityTagMaxHoursDailyForm_template)
    {
        if (AddConstraintTeachersActivityTagMaxHoursDailyForm_template->objectName().isEmpty())
            AddConstraintTeachersActivityTagMaxHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintTeachersActivityTagMaxHoursDailyForm_template"));
        AddConstraintTeachersActivityTagMaxHoursDailyForm_template->resize(471, 222);
        gridLayout = new QGridLayout(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTagTextLabel = new QLabel(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        activityTagTextLabel->setObjectName(QStringLiteral("activityTagTextLabel"));
        activityTagTextLabel->setFrameShape(QFrame::NoFrame);
        activityTagTextLabel->setFrameShadow(QFrame::Plain);
        activityTagTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTagTextLabel);

        activityTagsComboBox = new QComboBox(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));
        activityTagsComboBox->setEditable(false);
        activityTagsComboBox->setInsertPolicy(QComboBox::NoInsert);
        activityTagsComboBox->setAutoCompletion(false);
        activityTagsComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(activityTagsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maxHoursTextLabel = new QLabel(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 1);


        retranslateUi(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersActivityTagMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersActivityTagMaxHoursDailyForm_template)
    {
        AddConstraintTeachersActivityTagMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursDailyForm_template", "Add teachers activity tag max hours daily", 0));
        activityTagTextLabel->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursDailyForm_template", "Activity tag", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursDailyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursDailyForm_template", "Max hours daily", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersActivityTagMaxHoursDailyForm_template: public Ui_AddConstraintTeachersActivityTagMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
