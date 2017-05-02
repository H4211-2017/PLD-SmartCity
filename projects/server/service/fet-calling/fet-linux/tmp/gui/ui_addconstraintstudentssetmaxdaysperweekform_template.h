/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QSpacerItem *spacer1;
    QSpacerItem *spacer1_3;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;

    void setupUi(QDialog *AddConstraintStudentsSetMaxDaysPerWeekForm_template)
    {
        if (AddConstraintStudentsSetMaxDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintStudentsSetMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetMaxDaysPerWeekForm_template"));
        AddConstraintStudentsSetMaxDaysPerWeekForm_template->resize(535, 368);
        gridLayout = new QGridLayout(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        maxDaysTextLabel = new QLabel(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 3, 0, 1, 1);

        spacer1_3 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1_3, 1, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(AddConstraintStudentsSetMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetMaxDaysPerWeekForm_template)
    {
        AddConstraintStudentsSetMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetMaxDaysPerWeekForm_template", "Add students set max days per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxDaysPerWeekForm_template", "Close", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        maxDaysTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxDaysPerWeekForm_template", "Max days per week", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxDaysPerWeekForm_template", "Students set", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetMaxDaysPerWeekForm_template: public Ui_AddConstraintStudentsSetMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETMAXDAYSPERWEEKFORM_TEMPLATE_H
