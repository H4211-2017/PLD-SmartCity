/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersintervalmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersIntervalMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
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
    QVBoxLayout *vboxLayout;
    QLabel *endTextLabel;
    QComboBox *endHourComboBox;
    QVBoxLayout *vboxLayout1;
    QLabel *startTextLabel;
    QComboBox *startHourComboBox;

    void setupUi(QDialog *AddConstraintTeachersIntervalMaxDaysPerWeekForm_template)
    {
        if (AddConstraintTeachersIntervalMaxDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintTeachersIntervalMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template"));
        AddConstraintTeachersIntervalMaxDaysPerWeekForm_template->resize(446, 272);
        gridLayout = new QGridLayout(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 5, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 4, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        maxDaysTextLabel = new QLabel(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);

        spacer1_2 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1_2, 2, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        endTextLabel = new QLabel(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        endTextLabel->setObjectName(QStringLiteral("endTextLabel"));
        endTextLabel->setFrameShape(QFrame::NoFrame);
        endTextLabel->setFrameShadow(QFrame::Plain);
        endTextLabel->setWordWrap(false);

        vboxLayout->addWidget(endTextLabel);

        endHourComboBox = new QComboBox(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        endHourComboBox->setObjectName(QStringLiteral("endHourComboBox"));
        endHourComboBox->setEditable(false);
        endHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        endHourComboBox->setAutoCompletion(false);
        endHourComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(endHourComboBox);


        gridLayout->addLayout(vboxLayout, 1, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        startTextLabel = new QLabel(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        startTextLabel->setObjectName(QStringLiteral("startTextLabel"));
        startTextLabel->setFrameShape(QFrame::NoFrame);
        startTextLabel->setFrameShadow(QFrame::Plain);
        startTextLabel->setWordWrap(false);

        vboxLayout1->addWidget(startTextLabel);

        startHourComboBox = new QComboBox(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
        startHourComboBox->setObjectName(QStringLiteral("startHourComboBox"));
        startHourComboBox->setEditable(false);
        startHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        startHourComboBox->setAutoCompletion(false);
        startHourComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(startHourComboBox);


        gridLayout->addLayout(vboxLayout1, 0, 0, 1, 1);


        retranslateUi(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersIntervalMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersIntervalMaxDaysPerWeekForm_template)
    {
        AddConstraintTeachersIntervalMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template", "Add teachers interval max days per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template", "Close", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        maxDaysTextLabel->setText(QApplication::translate("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template", "Max days per week", 0));
        endTextLabel->setText(QApplication::translate("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template", "Interval end hour", 0));
        startTextLabel->setText(QApplication::translate("AddConstraintTeachersIntervalMaxDaysPerWeekForm_template", "Interval start hour", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersIntervalMaxDaysPerWeekForm_template: public Ui_AddConstraintTeachersIntervalMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
