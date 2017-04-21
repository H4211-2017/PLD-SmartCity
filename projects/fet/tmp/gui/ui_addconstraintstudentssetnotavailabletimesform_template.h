/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetnotavailabletimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETNOTAVAILABLETIMESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETNOTAVAILABLETIMESFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetNotAvailableTimesForm_template
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
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QPushButton *pushButton8;

    void setupUi(QDialog *AddConstraintStudentsSetNotAvailableTimesForm_template)
    {
        if (AddConstraintStudentsSetNotAvailableTimesForm_template->objectName().isEmpty())
            AddConstraintStudentsSetNotAvailableTimesForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetNotAvailableTimesForm_template"));
        AddConstraintStudentsSetNotAvailableTimesForm_template->resize(642, 530);
        gridLayout_2 = new QGridLayout(AddConstraintStudentsSetNotAvailableTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(AddConstraintStudentsSetNotAvailableTimesForm_template);
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
        studentsComboBox = new QComboBox(AddConstraintStudentsSetNotAvailableTimesForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        studentsGridLayout->addWidget(studentsComboBox, 1, 0, 1, 2);

        spacer1 = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        studentsGridLayout->addItem(spacer1, 0, 1, 1, 1);

        studentsTextLabel = new QLabel(AddConstraintStudentsSetNotAvailableTimesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        studentsGridLayout->addWidget(studentsTextLabel, 0, 0, 1, 1);


        gridLayout_2->addLayout(studentsGridLayout, 1, 0, 1, 1);

        weightBoxLayout = new QVBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintStudentsSetNotAvailableTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetNotAvailableTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 1, 1, 1, 1);

        notAllowedTimesTable = new QTableWidget(AddConstraintStudentsSetNotAvailableTimesForm_template);
        notAllowedTimesTable->setObjectName(QStringLiteral("notAllowedTimesTable"));

        gridLayout_2->addWidget(notAllowedTimesTable, 2, 0, 1, 2);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAvailablePushButton = new QPushButton(AddConstraintStudentsSetNotAvailableTimesForm_template);
        setAllAvailablePushButton->setObjectName(QStringLiteral("setAllAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllAvailablePushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintStudentsSetNotAvailableTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 3);

        setAllNotAvailablePushButton = new QPushButton(AddConstraintStudentsSetNotAvailableTimesForm_template);
        setAllNotAvailablePushButton->setObjectName(QStringLiteral("setAllNotAvailablePushButton"));

        buttonsGridLayout->addWidget(setAllNotAvailablePushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetNotAvailableTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintStudentsSetNotAvailableTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);

        pushButton8 = new QPushButton(AddConstraintStudentsSetNotAvailableTimesForm_template);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));

        buttonsGridLayout->addWidget(pushButton8, 1, 3, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 3, 0, 1, 2);


        retranslateUi(AddConstraintStudentsSetNotAvailableTimesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetNotAvailableTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetNotAvailableTimesForm_template)
    {
        AddConstraintStudentsSetNotAvailableTimesForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Add students set not available times", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Note: this constraint does not induce gaps (or early not respected) for students. If a students set has lessons before and after a not available period, there will be no gaps counted", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Weight percentage (necessary: 100%)", 0));
        setAllAvailablePushButton->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Set all available", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAvailablePushButton->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Set all not available", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Close", 0));
        pushButton8->setText(QApplication::translate("AddConstraintStudentsSetNotAvailableTimesForm_template", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetNotAvailableTimesForm_template: public Ui_AddConstraintStudentsSetNotAvailableTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETNOTAVAILABLETIMESFORM_TEMPLATE_H
