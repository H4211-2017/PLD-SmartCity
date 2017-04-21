/********************************************************************************
** Form generated from reading UI file 'addconstraintbasiccompulsoryspaceform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTBASICCOMPULSORYSPACEFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTBASICCOMPULSORYSPACEFORM_TEMPLATE_H

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

class Ui_AddConstraintBasicCompulsorySpaceForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintBasicCompulsorySpaceForm_template)
    {
        if (AddConstraintBasicCompulsorySpaceForm_template->objectName().isEmpty())
            AddConstraintBasicCompulsorySpaceForm_template->setObjectName(QStringLiteral("AddConstraintBasicCompulsorySpaceForm_template"));
        AddConstraintBasicCompulsorySpaceForm_template->resize(355, 138);
        gridLayout = new QGridLayout(AddConstraintBasicCompulsorySpaceForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintBasicCompulsorySpaceForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintBasicCompulsorySpaceForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintBasicCompulsorySpaceForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintBasicCompulsorySpaceForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(AddConstraintBasicCompulsorySpaceForm_template);

        QMetaObject::connectSlotsByName(AddConstraintBasicCompulsorySpaceForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintBasicCompulsorySpaceForm_template)
    {
        AddConstraintBasicCompulsorySpaceForm_template->setWindowTitle(QApplication::translate("AddConstraintBasicCompulsorySpaceForm_template", "Add basic compulsory space", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintBasicCompulsorySpaceForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintBasicCompulsorySpaceForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintBasicCompulsorySpaceForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintBasicCompulsorySpaceForm_template: public Ui_AddConstraintBasicCompulsorySpaceForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTBASICCOMPULSORYSPACEFORM_TEMPLATE_H
