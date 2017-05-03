/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetnotavailabletimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETNOTAVAILABLETIMESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETNOTAVAILABLETIMESFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetNotAvailableTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QGridLayout *studentsGridLayout;
    QComboBox *studentsComboBox;
    QSpacerItem *spacer1;
    QLabel *studentsTextLabel;
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

    void setupUi(QDialog *ModifyConstraintStudentsSetNotAvailableTimesForm_template)
    {
        if (ModifyConstraintStudentsSetNotAvailableTimesForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetNotAvailableTimesForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetNotAvailableTimesForm_template"));
        ModifyConstraintStudentsSetNotAvailableTimesForm_template->resize(616, 544);
        gridLayout_2 = new QGridLayout(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 2);

        studentsGridLayout = new QGridLayout();
        studentsGridLayout->setSpacing(6);
        studentsGridLayout->setObjectName(QStringLiteral("studentsGridLayout"));
        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        studentsGridLayout->addWidget(studentsComboBox, 1, 0, 1, 2);

        spacer1 = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        studentsGridLayout->addItem(spacer1, 0, 1, 1, 1);

        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        studentsGridLayout->addWidget(studentsTextLabel, 0, 0, 1, 1);


        gridLayout_2->addLayout(studentsGridLayout, 1, 0, 1, 1);

        weightBoxLayout = new QVBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 1, 1, 1, 1);

        notAllowedTimesTable = new QTableWidget(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        notAllowedTimesTable->setObjectName(QStringLiteral("notAllowedTimesTable"));

        gridLayout_2->addWidget(notAllowedTimesTable, 2, 0, 1, 2);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAvailablePushButton = new QPushButton(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        setAllAvailablePushButton->setObjectName(QStringLiteral("setAllAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllAvailablePushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAvailablePushButton = new QPushButton(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        setAllNotAvailablePushButton->setObjectName(QStringLiteral("setAllNotAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllNotAvailablePushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 3, 0, 1, 2);


        retranslateUi(ModifyConstraintStudentsSetNotAvailableTimesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetNotAvailableTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetNotAvailableTimesForm_template)
    {
        ModifyConstraintStudentsSetNotAvailableTimesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "Modify students set not available times", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "This constraint does not induce gaps (or early not respected) for students. If a students set has lessons before and after this not available period, there will be no gaps counted", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "Weight percentage (necessary: 100%)", 0));
        setAllAvailablePushButton->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "Set all available", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAvailablePushButton->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "Set all not available", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetNotAvailableTimesForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetNotAvailableTimesForm_template: public Ui_ModifyConstraintStudentsSetNotAvailableTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETNOTAVAILABLETIMESFORM_TEMPLATE_H
