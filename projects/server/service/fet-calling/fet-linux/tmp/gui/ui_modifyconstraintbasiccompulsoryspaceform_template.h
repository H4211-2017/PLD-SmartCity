/********************************************************************************
** Form generated from reading UI file 'modifyconstraintbasiccompulsoryspaceform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTBASICCOMPULSORYSPACEFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTBASICCOMPULSORYSPACEFORM_TEMPLATE_H

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

class Ui_ModifyConstraintBasicCompulsorySpaceForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintBasicCompulsorySpaceForm_template)
    {
        if (ModifyConstraintBasicCompulsorySpaceForm_template->objectName().isEmpty())
            ModifyConstraintBasicCompulsorySpaceForm_template->setObjectName(QStringLiteral("ModifyConstraintBasicCompulsorySpaceForm_template"));
        ModifyConstraintBasicCompulsorySpaceForm_template->resize(334, 168);
        gridLayout = new QGridLayout(ModifyConstraintBasicCompulsorySpaceForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintBasicCompulsorySpaceForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintBasicCompulsorySpaceForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        okPushButton = new QPushButton(ModifyConstraintBasicCompulsorySpaceForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_2->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintBasicCompulsorySpaceForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_2->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(ModifyConstraintBasicCompulsorySpaceForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintBasicCompulsorySpaceForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintBasicCompulsorySpaceForm_template)
    {
        ModifyConstraintBasicCompulsorySpaceForm_template->setWindowTitle(QApplication::translate("ModifyConstraintBasicCompulsorySpaceForm_template", "Modify basic compulsory space", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintBasicCompulsorySpaceForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintBasicCompulsorySpaceForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintBasicCompulsorySpaceForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintBasicCompulsorySpaceForm_template: public Ui_ModifyConstraintBasicCompulsorySpaceForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTBASICCOMPULSORYSPACEFORM_TEMPLATE_H
