/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachermaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherMaxHoursContinuouslyForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherMaxHoursContinuouslyForm_template)
    {
        if (ModifyConstraintTeacherMaxHoursContinuouslyForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMaxHoursContinuouslyForm_template"));
        ModifyConstraintTeacherMaxHoursContinuouslyForm_template->resize(477, 226);
        gridLayout = new QGridLayout(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_3->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);


        retranslateUi(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMaxHoursContinuouslyForm_template)
    {
        ModifyConstraintTeacherMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMaxHoursContinuouslyForm_template", "Modify teacher max hours continuously", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxHoursContinuouslyForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxHoursContinuouslyForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxHoursContinuouslyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMaxHoursContinuouslyForm_template: public Ui_ModifyConstraintTeacherMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
