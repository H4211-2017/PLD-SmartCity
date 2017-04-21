/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachernotavailabletimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERNOTAVAILABLETIMESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERNOTAVAILABLETIMESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintTeacherNotAvailableTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QGridLayout *teacherGridLayout;
    QComboBox *teachersComboBox;
    QSpacerItem *spacer4;
    QLabel *teacherTextLabel;
    QVBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QTableWidget *notAllowedTimesTable;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAvailablePushButton;
    QLabel *label;
    QPushButton *setAllNotAvailablePushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherNotAvailableTimesForm_template)
    {
        if (ModifyConstraintTeacherNotAvailableTimesForm_template->objectName().isEmpty())
            ModifyConstraintTeacherNotAvailableTimesForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherNotAvailableTimesForm_template"));
        ModifyConstraintTeacherNotAvailableTimesForm_template->resize(634, 555);
        gridLayout_2 = new QGridLayout(ModifyConstraintTeacherNotAvailableTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintTeacherNotAvailableTimesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 2);

        teacherGridLayout = new QGridLayout();
        teacherGridLayout->setSpacing(6);
        teacherGridLayout->setObjectName(QStringLiteral("teacherGridLayout"));
        teachersComboBox = new QComboBox(ModifyConstraintTeacherNotAvailableTimesForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        teacherGridLayout->addWidget(teachersComboBox, 1, 0, 1, 2);

        spacer4 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        teacherGridLayout->addItem(spacer4, 0, 1, 1, 1);

        teacherTextLabel = new QLabel(ModifyConstraintTeacherNotAvailableTimesForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        teacherGridLayout->addWidget(teacherTextLabel, 0, 0, 1, 1);


        gridLayout_2->addLayout(teacherGridLayout, 1, 0, 1, 1);

        weightBoxLayout = new QVBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherNotAvailableTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherNotAvailableTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 1, 1, 1, 1);

        notAllowedTimesTable = new QTableWidget(ModifyConstraintTeacherNotAvailableTimesForm_template);
        notAllowedTimesTable->setObjectName(QStringLiteral("notAllowedTimesTable"));

        gridLayout_2->addWidget(notAllowedTimesTable, 2, 0, 1, 2);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAvailablePushButton = new QPushButton(ModifyConstraintTeacherNotAvailableTimesForm_template);
        setAllAvailablePushButton->setObjectName(QStringLiteral("setAllAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllAvailablePushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintTeacherNotAvailableTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAvailablePushButton = new QPushButton(ModifyConstraintTeacherNotAvailableTimesForm_template);
        setAllNotAvailablePushButton->setObjectName(QStringLiteral("setAllNotAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllNotAvailablePushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintTeacherNotAvailableTimesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherNotAvailableTimesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 3, 0, 1, 2);


        retranslateUi(ModifyConstraintTeacherNotAvailableTimesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherNotAvailableTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherNotAvailableTimesForm_template)
    {
        ModifyConstraintTeacherNotAvailableTimesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "Modify teacher not available times", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "This constraint does not induce gaps for teachers. If a teacher has lessons before and after this not available period, there will be no gaps counted", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "Weight percentage (necessary: 100%)", 0));
        setAllAvailablePushButton->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "Set all available", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAvailablePushButton->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "Set all not available", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherNotAvailableTimesForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherNotAvailableTimesForm_template: public Ui_ModifyConstraintTeacherNotAvailableTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERNOTAVAILABLETIMESFORM_TEMPLATE_H
