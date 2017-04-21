/********************************************************************************
** Form generated from reading UI file 'modifystudentssubgroupform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUDENTSSUBGROUPFORM_TEMPLATE_H
#define UI_MODIFYSTUDENTSSUBGROUPFORM_TEMPLATE_H

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

class Ui_ModifyStudentsSubgroupForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *yearTextLabel;
    QLineEdit *yearNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *groupTextLabel;
    QLineEdit *groupNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *nameTextLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *numberTextLabel;
    QSpinBox *numberSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyStudentsSubgroupForm_template)
    {
        if (ModifyStudentsSubgroupForm_template->objectName().isEmpty())
            ModifyStudentsSubgroupForm_template->setObjectName(QStringLiteral("ModifyStudentsSubgroupForm_template"));
        ModifyStudentsSubgroupForm_template->resize(371, 275);
        gridLayout = new QGridLayout(ModifyStudentsSubgroupForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        yearTextLabel = new QLabel(ModifyStudentsSubgroupForm_template);
        yearTextLabel->setObjectName(QStringLiteral("yearTextLabel"));
        yearTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(yearTextLabel);

        yearNameLineEdit = new QLineEdit(ModifyStudentsSubgroupForm_template);
        yearNameLineEdit->setObjectName(QStringLiteral("yearNameLineEdit"));
        yearNameLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(yearNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupTextLabel = new QLabel(ModifyStudentsSubgroupForm_template);
        groupTextLabel->setObjectName(QStringLiteral("groupTextLabel"));
        groupTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(groupTextLabel);

        groupNameLineEdit = new QLineEdit(ModifyStudentsSubgroupForm_template);
        groupNameLineEdit->setObjectName(QStringLiteral("groupNameLineEdit"));
        groupNameLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(groupNameLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        nameTextLabel = new QLabel(ModifyStudentsSubgroupForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(ModifyStudentsSubgroupForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_3->addWidget(nameLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        numberTextLabel = new QLabel(ModifyStudentsSubgroupForm_template);
        numberTextLabel->setObjectName(QStringLiteral("numberTextLabel"));
        numberTextLabel->setWordWrap(false);

        horizontalLayout_4->addWidget(numberTextLabel);

        numberSpinBox = new QSpinBox(ModifyStudentsSubgroupForm_template);
        numberSpinBox->setObjectName(QStringLiteral("numberSpinBox"));
        numberSpinBox->setMinimum(0);
        numberSpinBox->setMaximum(1000);
        numberSpinBox->setValue(0);

        horizontalLayout_4->addWidget(numberSpinBox);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        okPushButton = new QPushButton(ModifyStudentsSubgroupForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_5->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyStudentsSubgroupForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_5->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);


        retranslateUi(ModifyStudentsSubgroupForm_template);

        QMetaObject::connectSlotsByName(ModifyStudentsSubgroupForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyStudentsSubgroupForm_template)
    {
        ModifyStudentsSubgroupForm_template->setWindowTitle(QApplication::translate("ModifyStudentsSubgroupForm_template", "Modify students subgroup", 0));
        yearTextLabel->setText(QApplication::translate("ModifyStudentsSubgroupForm_template", "Year", 0));
        groupTextLabel->setText(QApplication::translate("ModifyStudentsSubgroupForm_template", "Group", 0));
        nameTextLabel->setText(QApplication::translate("ModifyStudentsSubgroupForm_template", "Name", 0));
        numberTextLabel->setText(QApplication::translate("ModifyStudentsSubgroupForm_template", "Number of students", 0));
        okPushButton->setText(QApplication::translate("ModifyStudentsSubgroupForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyStudentsSubgroupForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyStudentsSubgroupForm_template: public Ui_ModifyStudentsSubgroupForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUDENTSSUBGROUPFORM_TEMPLATE_H
