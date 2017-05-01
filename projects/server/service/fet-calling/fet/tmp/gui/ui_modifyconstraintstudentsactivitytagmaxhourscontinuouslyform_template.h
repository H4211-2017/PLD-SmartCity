/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsactivitytagmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel_2;
    QComboBox *activityTagsComboBox;
    QSpacerItem *spacer6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template)
    {
        if (ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template->objectName().isEmpty())
            ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template"));
        ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template->resize(454, 237);
        gridLayout = new QGridLayout(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel_2 = new QLabel(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        studentsTextLabel_2->setObjectName(QStringLiteral("studentsTextLabel_2"));
        studentsTextLabel_2->setFrameShape(QFrame::NoFrame);
        studentsTextLabel_2->setFrameShadow(QFrame::Plain);
        studentsTextLabel_2->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel_2);

        activityTagsComboBox = new QComboBox(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));
        activityTagsComboBox->setEditable(false);
        activityTagsComboBox->setInsertPolicy(QComboBox::NoInsert);
        activityTagsComboBox->setAutoCompletion(false);
        activityTagsComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(activityTagsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        spacer6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer6, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maxHoursTextLabel = new QLabel(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template)
    {
        ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template", "Modify students activity tag max hours continuously", 0));
        studentsTextLabel_2->setText(QApplication::translate("ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template", "Activity tag", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template: public Ui_ModifyConstraintStudentsActivityTagMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
