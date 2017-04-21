/********************************************************************************
** Form generated from reading UI file 'addstudentsyearform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTSYEARFORM_TEMPLATE_H
#define UI_ADDSTUDENTSYEARFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddStudentsYearForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *nameTextLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *numberTextLabel;
    QSpinBox *numberSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addStudentsYearPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddStudentsYearForm_template)
    {
        if (AddStudentsYearForm_template->objectName().isEmpty())
            AddStudentsYearForm_template->setObjectName(QStringLiteral("AddStudentsYearForm_template"));
        AddStudentsYearForm_template->resize(304, 228);
        gridLayout = new QGridLayout(AddStudentsYearForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nameTextLabel = new QLabel(AddStudentsYearForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(AddStudentsYearForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout->addWidget(nameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        numberTextLabel = new QLabel(AddStudentsYearForm_template);
        numberTextLabel->setObjectName(QStringLiteral("numberTextLabel"));
        numberTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(numberTextLabel);

        numberSpinBox = new QSpinBox(AddStudentsYearForm_template);
        numberSpinBox->setObjectName(QStringLiteral("numberSpinBox"));
        numberSpinBox->setMinimum(0);
        numberSpinBox->setMaximum(1000);
        numberSpinBox->setValue(0);

        horizontalLayout_2->addWidget(numberSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addStudentsYearPushButton = new QPushButton(AddStudentsYearForm_template);
        addStudentsYearPushButton->setObjectName(QStringLiteral("addStudentsYearPushButton"));

        horizontalLayout_3->addWidget(addStudentsYearPushButton);

        closePushButton = new QPushButton(AddStudentsYearForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_3->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(AddStudentsYearForm_template);

        QMetaObject::connectSlotsByName(AddStudentsYearForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddStudentsYearForm_template)
    {
        AddStudentsYearForm_template->setWindowTitle(QApplication::translate("AddStudentsYearForm_template", "Add students year", 0));
        nameTextLabel->setText(QApplication::translate("AddStudentsYearForm_template", "Name", 0));
        numberTextLabel->setText(QApplication::translate("AddStudentsYearForm_template", "Number of students", 0));
        addStudentsYearPushButton->setText(QApplication::translate("AddStudentsYearForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddStudentsYearForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddStudentsYearForm_template: public Ui_AddStudentsYearForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTSYEARFORM_TEMPLATE_H
