/********************************************************************************
** Form generated from reading UI file 'modifyconstraintbasiccompulsorytimeform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H

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

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintBasicCompulsoryTimeForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintBasicCompulsoryTimeForm_template)
    {
        if (ModifyConstraintBasicCompulsoryTimeForm_template->objectName().isEmpty())
            ModifyConstraintBasicCompulsoryTimeForm_template->setObjectName(QStringLiteral("ModifyConstraintBasicCompulsoryTimeForm_template"));
        ModifyConstraintBasicCompulsoryTimeForm_template->resize(387, 176);
        gridLayout = new QGridLayout(ModifyConstraintBasicCompulsoryTimeForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintBasicCompulsoryTimeForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintBasicCompulsoryTimeForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintBasicCompulsoryTimeForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintBasicCompulsoryTimeForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(ModifyConstraintBasicCompulsoryTimeForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintBasicCompulsoryTimeForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintBasicCompulsoryTimeForm_template)
    {
        ModifyConstraintBasicCompulsoryTimeForm_template->setWindowTitle(QApplication::translate("ModifyConstraintBasicCompulsoryTimeForm_template", "Modify basic compulsory time", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintBasicCompulsoryTimeForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintBasicCompulsoryTimeForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintBasicCompulsoryTimeForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintBasicCompulsoryTimeForm_template: public Ui_ModifyConstraintBasicCompulsoryTimeForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H
