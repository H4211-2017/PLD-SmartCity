/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersactivitytagmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template
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

    void setupUi(QDialog *AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template)
    {
        if (AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->objectName().isEmpty())
            AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template"));
        AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->resize(471, 222);
        gridLayout = new QGridLayout(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTagTextLabel = new QLabel(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        activityTagTextLabel->setObjectName(QStringLiteral("activityTagTextLabel"));
        activityTagTextLabel->setFrameShape(QFrame::NoFrame);
        activityTagTextLabel->setFrameShadow(QFrame::Plain);
        activityTagTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTagTextLabel);

        activityTagsComboBox = new QComboBox(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
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
        weightTextLabel = new QLabel(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maxHoursTextLabel = new QLabel(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 1);


        retranslateUi(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template)
    {
        AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Add teachers activity tag max hours continuously", 0));
        activityTagTextLabel->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Activity tag", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template: public Ui_AddConstraintTeachersActivityTagMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
