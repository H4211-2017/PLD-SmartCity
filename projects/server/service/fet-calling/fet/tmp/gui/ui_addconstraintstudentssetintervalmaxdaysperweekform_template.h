/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetintervalmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *spacer1;
    QHBoxLayout *hboxLayout2;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QSpacerItem *spacer1_2;
    QVBoxLayout *vboxLayout1;
    QLabel *endTextLabel;
    QComboBox *endHourComboBox;
    QVBoxLayout *vboxLayout2;
    QLabel *startTextLabel;
    QComboBox *startHourComboBox;
    QSpacerItem *spacer1_3;

    void setupUi(QDialog *AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template)
    {
        if (AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template"));
        AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->resize(535, 368);
        gridLayout = new QGridLayout(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 8, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 7, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 6, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        maxDaysTextLabel = new QLabel(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout2, 5, 0, 1, 1);

        spacer1_2 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1_2, 4, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        endTextLabel = new QLabel(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        endTextLabel->setObjectName(QStringLiteral("endTextLabel"));
        endTextLabel->setFrameShape(QFrame::NoFrame);
        endTextLabel->setFrameShadow(QFrame::Plain);
        endTextLabel->setWordWrap(false);

        vboxLayout1->addWidget(endTextLabel);

        endHourComboBox = new QComboBox(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        endHourComboBox->setObjectName(QStringLiteral("endHourComboBox"));
        endHourComboBox->setEditable(false);
        endHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        endHourComboBox->setAutoCompletion(false);
        endHourComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(endHourComboBox);


        gridLayout->addLayout(vboxLayout1, 3, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        startTextLabel = new QLabel(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        startTextLabel->setObjectName(QStringLiteral("startTextLabel"));
        startTextLabel->setFrameShape(QFrame::NoFrame);
        startTextLabel->setFrameShadow(QFrame::Plain);
        startTextLabel->setWordWrap(false);

        vboxLayout2->addWidget(startTextLabel);

        startHourComboBox = new QComboBox(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        startHourComboBox->setObjectName(QStringLiteral("startHourComboBox"));
        startHourComboBox->setEditable(false);
        startHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        startHourComboBox->setAutoCompletion(false);
        startHourComboBox->setDuplicatesEnabled(false);

        vboxLayout2->addWidget(startHourComboBox);


        gridLayout->addLayout(vboxLayout2, 2, 0, 1, 1);

        spacer1_3 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1_3, 1, 0, 1, 1);


        retranslateUi(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template)
    {
        AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Add students set interval max days per week", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Students set", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Close", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        maxDaysTextLabel->setText(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Max days per week", 0));
        endTextLabel->setText(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Interval end hour", 0));
        startTextLabel->setText(QApplication::translate("AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Interval start hour", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template: public Ui_AddConstraintStudentsSetIntervalMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
