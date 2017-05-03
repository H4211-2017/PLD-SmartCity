/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_ModifyConstraintStudentsSetMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *minRestingHoursSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QCheckBox *circularCheckBox;
    QSpacerItem *spacer9;
    QVBoxLayout *verticalLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;

    void setupUi(QDialog *ModifyConstraintStudentsSetMinRestingHoursForm_template)
    {
        if (ModifyConstraintStudentsSetMinRestingHoursForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetMinRestingHoursForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetMinRestingHoursForm_template"));
        ModifyConstraintStudentsSetMinRestingHoursForm_template->resize(634, 343);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        minRestingHoursSpinBox = new QSpinBox(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        horizontalLayout_2->addWidget(minRestingHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        circularCheckBox = new QCheckBox(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 4, 0, 1, 2);

        spacer9 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer9, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetMinRestingHoursForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);


        retranslateUi(ModifyConstraintStudentsSetMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetMinRestingHoursForm_template)
    {
        ModifyConstraintStudentsSetMinRestingHoursForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetMinRestingHoursForm_template", "Modify students set min resting hours", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintStudentsSetMinRestingHoursForm_template", "Min resting hours", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMinRestingHoursForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMinRestingHoursForm_template", "Cancel", 0));
        circularCheckBox->setText(QApplication::translate("ModifyConstraintStudentsSetMinRestingHoursForm_template", "Circular", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMinRestingHoursForm_template", "Students", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetMinRestingHoursForm_template: public Ui_ModifyConstraintStudentsSetMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H
