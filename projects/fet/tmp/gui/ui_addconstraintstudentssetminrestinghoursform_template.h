/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer1;
    QVBoxLayout *verticalLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *minRestingHoursSpinBox;
    QCheckBox *circularCheckBox;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsSetMinRestingHoursForm_template)
    {
        if (AddConstraintStudentsSetMinRestingHoursForm_template->objectName().isEmpty())
            AddConstraintStudentsSetMinRestingHoursForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetMinRestingHoursForm_template"));
        AddConstraintStudentsSetMinRestingHoursForm_template->resize(620, 285);
        gridLayout = new QGridLayout(AddConstraintStudentsSetMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        studentsTextLabel = new QLabel(AddConstraintStudentsSetMinRestingHoursForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetMinRestingHoursForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(AddConstraintStudentsSetMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(AddConstraintStudentsSetMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        minRestingHoursSpinBox = new QSpinBox(AddConstraintStudentsSetMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        horizontalLayout_2->addWidget(minRestingHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        circularCheckBox = new QCheckBox(AddConstraintStudentsSetMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 4, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetMinRestingHoursForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetMinRestingHoursForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 1);


        retranslateUi(AddConstraintStudentsSetMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetMinRestingHoursForm_template)
    {
        AddConstraintStudentsSetMinRestingHoursForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetMinRestingHoursForm_template", "Add students set min resting hours", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMinRestingHoursForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsSetMinRestingHoursForm_template", "Min resting hours", 0));
        circularCheckBox->setText(QApplication::translate("AddConstraintStudentsSetMinRestingHoursForm_template", "Circular", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetMinRestingHoursForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetMinRestingHoursForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetMinRestingHoursForm_template: public Ui_AddConstraintStudentsSetMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H
