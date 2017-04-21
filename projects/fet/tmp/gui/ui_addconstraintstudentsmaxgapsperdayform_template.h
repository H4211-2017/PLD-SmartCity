/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsmaxgapsperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsMaxGapsPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer6;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsMaxGapsPerDayForm_template)
    {
        if (AddConstraintStudentsMaxGapsPerDayForm_template->objectName().isEmpty())
            AddConstraintStudentsMaxGapsPerDayForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMaxGapsPerDayForm_template"));
        AddConstraintStudentsMaxGapsPerDayForm_template->resize(499, 276);
        gridLayout = new QGridLayout(AddConstraintStudentsMaxGapsPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2 = new QLabel(AddConstraintStudentsMaxGapsPerDayForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2, 0, 0, 1, 2);

        spacer6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer6, 1, 0, 1, 2);

        weightTextLabel = new QLabel(AddConstraintStudentsMaxGapsPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 2, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMaxGapsPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 2, 1, 1, 1);

        textLabel1 = new QLabel(AddConstraintStudentsMaxGapsPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 3, 0, 1, 1);

        maxGapsSpinBox = new QSpinBox(AddConstraintStudentsMaxGapsPerDayForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        gridLayout->addWidget(maxGapsSpinBox, 3, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMaxGapsPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMaxGapsPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(AddConstraintStudentsMaxGapsPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMaxGapsPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMaxGapsPerDayForm_template)
    {
        AddConstraintStudentsMaxGapsPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMaxGapsPerDayForm_template", "Add students max gaps per day", 0));
        weightTextLabel_2->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerDayForm_template", "You have to use weight percentage 100%\n"
"Note: students set not available and break are not counted as gaps.\n"
"\n"
"IMPORTANT: if you want 0 total gaps, it is strongly recommended NOT to use this constraint, but instead use the safer/better max gaps per week.", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerDayForm_template", "Max gaps per day", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMaxGapsPerDayForm_template: public Ui_AddConstraintStudentsMaxGapsPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H
