/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetmaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETMAXSPANPERDAYFORM_TEMPLATE_H

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

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsSetMaxSpanPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *studentsTextLabel;
    QLabel *weightTextLabel;
    QSpinBox *maxSpanSpinBox;
    QLabel *textLabel1;
    QLineEdit *weightLineEdit;
    QComboBox *studentsComboBox;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QSpacerItem *spacer1;

    void setupUi(QDialog *AddConstraintStudentsSetMaxSpanPerDayForm_template)
    {
        if (AddConstraintStudentsSetMaxSpanPerDayForm_template->objectName().isEmpty())
            AddConstraintStudentsSetMaxSpanPerDayForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetMaxSpanPerDayForm_template"));
        AddConstraintStudentsSetMaxSpanPerDayForm_template->resize(620, 227);
        gridLayout = new QGridLayout(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        studentsTextLabel = new QLabel(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 1, 0, 1, 3);

        weightTextLabel = new QLabel(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 3, 0, 1, 1);

        maxSpanSpinBox = new QSpinBox(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        maxSpanSpinBox->setObjectName(QStringLiteral("maxSpanSpinBox"));

        gridLayout->addWidget(maxSpanSpinBox, 4, 2, 1, 1);

        textLabel1 = new QLabel(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 4, 0, 1, 2);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 3, 1, 1, 2);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(studentsComboBox, 2, 0, 1, 3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetMaxSpanPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 3);

        spacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 0, 0, 1, 3);


        retranslateUi(AddConstraintStudentsSetMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetMaxSpanPerDayForm_template)
    {
        AddConstraintStudentsSetMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetMaxSpanPerDayForm_template", "Add students set max span per day", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxSpanPerDayForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxSpanPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsSetMaxSpanPerDayForm_template", "Max span per day", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxSpanPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxSpanPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetMaxSpanPerDayForm_template: public Ui_AddConstraintStudentsSetMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETMAXSPANPERDAYFORM_TEMPLATE_H
