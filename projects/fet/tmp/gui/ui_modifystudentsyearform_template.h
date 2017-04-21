/********************************************************************************
** Form generated from reading UI file 'modifystudentsyearform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUDENTSYEARFORM_TEMPLATE_H
#define UI_MODIFYSTUDENTSYEARFORM_TEMPLATE_H

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

class Ui_ModifyStudentsYearForm_template
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
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyStudentsYearForm_template)
    {
        if (ModifyStudentsYearForm_template->objectName().isEmpty())
            ModifyStudentsYearForm_template->setObjectName(QStringLiteral("ModifyStudentsYearForm_template"));
        ModifyStudentsYearForm_template->resize(329, 207);
        gridLayout = new QGridLayout(ModifyStudentsYearForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nameTextLabel = new QLabel(ModifyStudentsYearForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(ModifyStudentsYearForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout->addWidget(nameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        numberTextLabel = new QLabel(ModifyStudentsYearForm_template);
        numberTextLabel->setObjectName(QStringLiteral("numberTextLabel"));
        numberTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(numberTextLabel);

        numberSpinBox = new QSpinBox(ModifyStudentsYearForm_template);
        numberSpinBox->setObjectName(QStringLiteral("numberSpinBox"));
        numberSpinBox->setMinimum(0);
        numberSpinBox->setMaximum(1000);
        numberSpinBox->setValue(0);

        horizontalLayout_2->addWidget(numberSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        okPushButton = new QPushButton(ModifyStudentsYearForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_3->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyStudentsYearForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_3->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(ModifyStudentsYearForm_template);

        QMetaObject::connectSlotsByName(ModifyStudentsYearForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyStudentsYearForm_template)
    {
        ModifyStudentsYearForm_template->setWindowTitle(QApplication::translate("ModifyStudentsYearForm_template", "Modify students year", 0));
        nameTextLabel->setText(QApplication::translate("ModifyStudentsYearForm_template", "Name", 0));
        numberTextLabel->setText(QApplication::translate("ModifyStudentsYearForm_template", "Number of students", 0));
        okPushButton->setText(QApplication::translate("ModifyStudentsYearForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyStudentsYearForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyStudentsYearForm_template: public Ui_ModifyStudentsYearForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUDENTSYEARFORM_TEMPLATE_H
