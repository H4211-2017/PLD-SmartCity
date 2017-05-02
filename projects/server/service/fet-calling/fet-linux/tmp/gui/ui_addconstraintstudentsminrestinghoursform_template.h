/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMINRESTINGHOURSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_AddConstraintStudentsMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QLineEdit *weightLineEdit;
    QSpinBox *minRestingHoursSpinBox;
    QLabel *weightTextLabel;
    QLabel *textLabel1;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QSpacerItem *spacer6;
    QCheckBox *circularCheckBox;

    void setupUi(QDialog *AddConstraintStudentsMinRestingHoursForm_template)
    {
        if (AddConstraintStudentsMinRestingHoursForm_template->objectName().isEmpty())
            AddConstraintStudentsMinRestingHoursForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMinRestingHoursForm_template"));
        AddConstraintStudentsMinRestingHoursForm_template->resize(592, 227);
        gridLayout = new QGridLayout(AddConstraintStudentsMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightLineEdit = new QLineEdit(AddConstraintStudentsMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 1, 1, 1, 1);

        minRestingHoursSpinBox = new QSpinBox(AddConstraintStudentsMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        gridLayout->addWidget(minRestingHoursSpinBox, 2, 1, 1, 1);

        weightTextLabel = new QLabel(AddConstraintStudentsMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 1, 0, 1, 1);

        textLabel1 = new QLabel(AddConstraintStudentsMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMinRestingHoursForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMinRestingHoursForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        spacer6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer6, 0, 0, 1, 2);

        circularCheckBox = new QCheckBox(AddConstraintStudentsMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 3, 0, 1, 2);


        retranslateUi(AddConstraintStudentsMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMinRestingHoursForm_template)
    {
        AddConstraintStudentsMinRestingHoursForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMinRestingHoursForm_template", "Add students min resting hours", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsMinRestingHoursForm_template", "Min resting hours", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMinRestingHoursForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMinRestingHoursForm_template", "Close", 0));
        circularCheckBox->setText(QApplication::translate("AddConstraintStudentsMinRestingHoursForm_template", "Circular", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMinRestingHoursForm_template: public Ui_AddConstraintStudentsMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMINRESTINGHOURSFORM_TEMPLATE_H
