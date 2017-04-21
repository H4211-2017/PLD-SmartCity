/********************************************************************************
** Form generated from reading UI file 'addconstraintbasiccompulsorytimeform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H

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

class Ui_AddConstraintBasicCompulsoryTimeForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintBasicCompulsoryTimeForm_template)
    {
        if (AddConstraintBasicCompulsoryTimeForm_template->objectName().isEmpty())
            AddConstraintBasicCompulsoryTimeForm_template->setObjectName(QStringLiteral("AddConstraintBasicCompulsoryTimeForm_template"));
        AddConstraintBasicCompulsoryTimeForm_template->resize(362, 170);
        gridLayout = new QGridLayout(AddConstraintBasicCompulsoryTimeForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintBasicCompulsoryTimeForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintBasicCompulsoryTimeForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintBasicCompulsoryTimeForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintBasicCompulsoryTimeForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(AddConstraintBasicCompulsoryTimeForm_template);

        QMetaObject::connectSlotsByName(AddConstraintBasicCompulsoryTimeForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintBasicCompulsoryTimeForm_template)
    {
        AddConstraintBasicCompulsoryTimeForm_template->setWindowTitle(QApplication::translate("AddConstraintBasicCompulsoryTimeForm_template", "Add basic compulsory time", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintBasicCompulsoryTimeForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintBasicCompulsoryTimeForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintBasicCompulsoryTimeForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintBasicCompulsoryTimeForm_template: public Ui_AddConstraintBasicCompulsoryTimeForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H
