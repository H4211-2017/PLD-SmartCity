/********************************************************************************
** Form generated from reading UI file 'addstudentsgroupform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTSGROUPFORM_TEMPLATE_H
#define UI_ADDSTUDENTSGROUPFORM_TEMPLATE_H

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

class Ui_AddStudentsGroupForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *yearTextLabel;
    QLineEdit *yearNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameTextLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *numberTextLabel;
    QSpinBox *numberSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addStudentsGroupPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddStudentsGroupForm_template)
    {
        if (AddStudentsGroupForm_template->objectName().isEmpty())
            AddStudentsGroupForm_template->setObjectName(QStringLiteral("AddStudentsGroupForm_template"));
        AddStudentsGroupForm_template->resize(312, 286);
        gridLayout = new QGridLayout(AddStudentsGroupForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        yearTextLabel = new QLabel(AddStudentsGroupForm_template);
        yearTextLabel->setObjectName(QStringLiteral("yearTextLabel"));
        yearTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(yearTextLabel);

        yearNameLineEdit = new QLineEdit(AddStudentsGroupForm_template);
        yearNameLineEdit->setObjectName(QStringLiteral("yearNameLineEdit"));
        yearNameLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(yearNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nameTextLabel = new QLabel(AddStudentsGroupForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(AddStudentsGroupForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        numberTextLabel = new QLabel(AddStudentsGroupForm_template);
        numberTextLabel->setObjectName(QStringLiteral("numberTextLabel"));
        numberTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(numberTextLabel);

        numberSpinBox = new QSpinBox(AddStudentsGroupForm_template);
        numberSpinBox->setObjectName(QStringLiteral("numberSpinBox"));
        numberSpinBox->setMinimum(0);
        numberSpinBox->setMaximum(1000);
        numberSpinBox->setValue(0);

        horizontalLayout_3->addWidget(numberSpinBox);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        addStudentsGroupPushButton = new QPushButton(AddStudentsGroupForm_template);
        addStudentsGroupPushButton->setObjectName(QStringLiteral("addStudentsGroupPushButton"));

        horizontalLayout_4->addWidget(addStudentsGroupPushButton);

        closePushButton = new QPushButton(AddStudentsGroupForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_4->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        retranslateUi(AddStudentsGroupForm_template);

        QMetaObject::connectSlotsByName(AddStudentsGroupForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddStudentsGroupForm_template)
    {
        AddStudentsGroupForm_template->setWindowTitle(QApplication::translate("AddStudentsGroupForm_template", "Add students group", 0));
        yearTextLabel->setText(QApplication::translate("AddStudentsGroupForm_template", "Year", 0));
        nameTextLabel->setText(QApplication::translate("AddStudentsGroupForm_template", "Name", 0));
        numberTextLabel->setText(QApplication::translate("AddStudentsGroupForm_template", "Number of students", 0));
        addStudentsGroupPushButton->setText(QApplication::translate("AddStudentsGroupForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddStudentsGroupForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddStudentsGroupForm_template: public Ui_AddStudentsGroupForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTSGROUPFORM_TEMPLATE_H
