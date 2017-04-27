/********************************************************************************
** Form generated from reading UI file 'addconstraintteachernotavailabletimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERNOTAVAILABLETIMESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERNOTAVAILABLETIMESFORM_TEMPLATE_H

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

class Ui_AddConstraintTeacherNotAvailableTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QGridLayout *upGridLayout;
    QGridLayout *teacherGridLayout;
    QSpacerItem *spacer1;
    QComboBox *teachersComboBox;
    QLabel *teacherTextLabel;
    QVBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QTableWidget *notAllowedTimesTable;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAvailablePushButton;
    QLabel *label;
    QPushButton *setAllNotAvailablePushButton;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QPushButton *pushButton5;

    void setupUi(QDialog *AddConstraintTeacherNotAvailableTimesForm_template)
    {
        if (AddConstraintTeacherNotAvailableTimesForm_template->objectName().isEmpty())
            AddConstraintTeacherNotAvailableTimesForm_template->setObjectName(QStringLiteral("AddConstraintTeacherNotAvailableTimesForm_template"));
        AddConstraintTeacherNotAvailableTimesForm_template->resize(655, 532);
        gridLayout_2 = new QGridLayout(AddConstraintTeacherNotAvailableTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(AddConstraintTeacherNotAvailableTimesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 1);

        upGridLayout = new QGridLayout();
        upGridLayout->setSpacing(6);
        upGridLayout->setObjectName(QStringLiteral("upGridLayout"));
        teacherGridLayout = new QGridLayout();
        teacherGridLayout->setSpacing(6);
        teacherGridLayout->setObjectName(QStringLiteral("teacherGridLayout"));
        spacer1 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        teacherGridLayout->addItem(spacer1, 0, 1, 1, 1);

        teachersComboBox = new QComboBox(AddConstraintTeacherNotAvailableTimesForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        teacherGridLayout->addWidget(teachersComboBox, 1, 0, 1, 2);

        teacherTextLabel = new QLabel(AddConstraintTeacherNotAvailableTimesForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        teacherGridLayout->addWidget(teacherTextLabel, 0, 0, 1, 1);


        upGridLayout->addLayout(teacherGridLayout, 0, 0, 1, 1);

        weightBoxLayout = new QVBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintTeacherNotAvailableTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherNotAvailableTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        upGridLayout->addLayout(weightBoxLayout, 0, 1, 1, 1);


        gridLayout_2->addLayout(upGridLayout, 1, 0, 1, 1);

        notAllowedTimesTable = new QTableWidget(AddConstraintTeacherNotAvailableTimesForm_template);
        notAllowedTimesTable->setObjectName(QStringLiteral("notAllowedTimesTable"));

        gridLayout_2->addWidget(notAllowedTimesTable, 2, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAvailablePushButton = new QPushButton(AddConstraintTeacherNotAvailableTimesForm_template);
        setAllAvailablePushButton->setObjectName(QStringLiteral("setAllAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllAvailablePushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintTeacherNotAvailableTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 3);

        setAllNotAvailablePushButton = new QPushButton(AddConstraintTeacherNotAvailableTimesForm_template);
        setAllNotAvailablePushButton->setObjectName(QStringLiteral("setAllNotAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllNotAvailablePushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintTeacherNotAvailableTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintTeacherNotAvailableTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);

        pushButton5 = new QPushButton(AddConstraintTeacherNotAvailableTimesForm_template);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));

        buttonsGridLayout->addWidget(pushButton5, 1, 3, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 3, 0, 1, 1);


        retranslateUi(AddConstraintTeacherNotAvailableTimesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherNotAvailableTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherNotAvailableTimesForm_template)
    {
        AddConstraintTeacherNotAvailableTimesForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Add teacher not available times", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Note: this constraint does not induce gaps for teachers. If a teacher has lessons before and after a not available period, there will be no gaps counted", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Weight percentage (necessary: 100%)", 0));
        setAllAvailablePushButton->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Set all available", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAvailablePushButton->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Set all not available", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Close", 0));
        pushButton5->setText(QApplication::translate("AddConstraintTeacherNotAvailableTimesForm_template", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherNotAvailableTimesForm_template: public Ui_AddConstraintTeacherNotAvailableTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERNOTAVAILABLETIMESFORM_TEMPLATE_H
