/********************************************************************************
** Form generated from reading UI file 'modifystudentsgroupform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUDENTSGROUPFORM_TEMPLATE_H
#define UI_MODIFYSTUDENTSGROUPFORM_TEMPLATE_H

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

class Ui_ModifyStudentsGroupForm_template
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
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyStudentsGroupForm_template)
    {
        if (ModifyStudentsGroupForm_template->objectName().isEmpty())
            ModifyStudentsGroupForm_template->setObjectName(QStringLiteral("ModifyStudentsGroupForm_template"));
        ModifyStudentsGroupForm_template->resize(346, 243);
        gridLayout = new QGridLayout(ModifyStudentsGroupForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        yearTextLabel = new QLabel(ModifyStudentsGroupForm_template);
        yearTextLabel->setObjectName(QStringLiteral("yearTextLabel"));
        yearTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(yearTextLabel);

        yearNameLineEdit = new QLineEdit(ModifyStudentsGroupForm_template);
        yearNameLineEdit->setObjectName(QStringLiteral("yearNameLineEdit"));
        yearNameLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(yearNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nameTextLabel = new QLabel(ModifyStudentsGroupForm_template);
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setFrameShape(QFrame::NoFrame);
        nameTextLabel->setFrameShadow(QFrame::Plain);
        nameTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(nameTextLabel);

        nameLineEdit = new QLineEdit(ModifyStudentsGroupForm_template);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        numberTextLabel = new QLabel(ModifyStudentsGroupForm_template);
        numberTextLabel->setObjectName(QStringLiteral("numberTextLabel"));
        numberTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(numberTextLabel);

        numberSpinBox = new QSpinBox(ModifyStudentsGroupForm_template);
        numberSpinBox->setObjectName(QStringLiteral("numberSpinBox"));
        numberSpinBox->setMinimum(0);
        numberSpinBox->setMaximum(1000);
        numberSpinBox->setValue(0);

        horizontalLayout_3->addWidget(numberSpinBox);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        okPushButton = new QPushButton(ModifyStudentsGroupForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_4->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyStudentsGroupForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_4->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        retranslateUi(ModifyStudentsGroupForm_template);

        QMetaObject::connectSlotsByName(ModifyStudentsGroupForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyStudentsGroupForm_template)
    {
        ModifyStudentsGroupForm_template->setWindowTitle(QApplication::translate("ModifyStudentsGroupForm_template", "Modify students group", 0));
        yearTextLabel->setText(QApplication::translate("ModifyStudentsGroupForm_template", "Year", 0));
        nameTextLabel->setText(QApplication::translate("ModifyStudentsGroupForm_template", "Name", 0));
        numberTextLabel->setText(QApplication::translate("ModifyStudentsGroupForm_template", "Number of students", 0));
        okPushButton->setText(QApplication::translate("ModifyStudentsGroupForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyStudentsGroupForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyStudentsGroupForm_template: public Ui_ModifyStudentsGroupForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUDENTSGROUPFORM_TEMPLATE_H
