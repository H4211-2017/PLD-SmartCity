/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsmaxgapsperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsMaxGapsPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer5;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsMaxGapsPerDayForm_template)
    {
        if (ModifyConstraintStudentsMaxGapsPerDayForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMaxGapsPerDayForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMaxGapsPerDayForm_template"));
        ModifyConstraintStudentsMaxGapsPerDayForm_template->resize(610, 286);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2 = new QLabel(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2, 0, 0, 1, 1);

        spacer5 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer5, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout_2->addWidget(maxGapsSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMaxGapsPerDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsMaxGapsPerDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMaxGapsPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMaxGapsPerDayForm_template)
    {
        ModifyConstraintStudentsMaxGapsPerDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMaxGapsPerDayForm_template", "Modify students max gaps per day", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerDayForm_template", "You have to use weight percentage 100%\n"
"Note: students set not available and break are not counted as gaps.\n"
"\n"
"IMPORTANT: if you want 0 total gaps, it is strongly recommended NOT to use this constraint, but instead use the safer/better max gaps per week.", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerDayForm_template", "Max gaps per day", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerDayForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMaxGapsPerDayForm_template: public Ui_ModifyConstraintStudentsMaxGapsPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H
