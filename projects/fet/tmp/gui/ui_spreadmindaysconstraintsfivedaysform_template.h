/********************************************************************************
** Form generated from reading UI file 'spreadmindaysconstraintsfivedaysform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPREADMINDAYSCONSTRAINTSFIVEDAYSFORM_TEMPLATE_H
#define UI_SPREADMINDAYSCONSTRAINTSFIVEDAYSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SpreadMinDaysConstraintsFiveDaysForm_template
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QCheckBox *consecutiveIfSameDayCheckBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QCheckBox *spread4OrMoreCheckBox;
    QLabel *label_4;
    QLabel *weight4Label;
    QLineEdit *weight4LineEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *spread2CheckBox;
    QLabel *label_2;
    QLabel *weight2Label;
    QLineEdit *weight2LineEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QCheckBox *spread3CheckBox;
    QLabel *label_3;
    QLabel *weight3Label;
    QLineEdit *weight3LineEdit;
    QGroupBox *aloneGroupBox;
    QGridLayout *gridLayout_4;
    QRadioButton *type123RadioButton;
    QRadioButton *type312RadioButton;
    QRadioButton *type213RadioButton;
    QPushButton *helpPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;

    void setupUi(QDialog *SpreadMinDaysConstraintsFiveDaysForm_template)
    {
        if (SpreadMinDaysConstraintsFiveDaysForm_template->objectName().isEmpty())
            SpreadMinDaysConstraintsFiveDaysForm_template->setObjectName(QStringLiteral("SpreadMinDaysConstraintsFiveDaysForm_template"));
        SpreadMinDaysConstraintsFiveDaysForm_template->resize(1053, 600);
        gridLayout_6 = new QGridLayout(SpreadMinDaysConstraintsFiveDaysForm_template);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_5 = new QGroupBox(SpreadMinDaysConstraintsFiveDaysForm_template);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        consecutiveIfSameDayCheckBox = new QCheckBox(groupBox_5);
        consecutiveIfSameDayCheckBox->setObjectName(QStringLiteral("consecutiveIfSameDayCheckBox"));
        consecutiveIfSameDayCheckBox->setChecked(true);

        gridLayout_2->addWidget(consecutiveIfSameDayCheckBox, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setWordWrap(true);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_5, 0, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_4 = new QGroupBox(SpreadMinDaysConstraintsFiveDaysForm_template);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        spread4OrMoreCheckBox = new QCheckBox(groupBox_4);
        spread4OrMoreCheckBox->setObjectName(QStringLiteral("spread4OrMoreCheckBox"));
        spread4OrMoreCheckBox->setEnabled(true);
        spread4OrMoreCheckBox->setCheckable(true);
        spread4OrMoreCheckBox->setChecked(true);

        gridLayout_3->addWidget(spread4OrMoreCheckBox, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setWordWrap(true);

        gridLayout_3->addWidget(label_4, 1, 0, 1, 2);

        weight4Label = new QLabel(groupBox_4);
        weight4Label->setObjectName(QStringLiteral("weight4Label"));

        gridLayout_3->addWidget(weight4Label, 2, 0, 1, 1);

        weight4LineEdit = new QLineEdit(groupBox_4);
        weight4LineEdit->setObjectName(QStringLiteral("weight4LineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(weight4LineEdit->sizePolicy().hasHeightForWidth());
        weight4LineEdit->setSizePolicy(sizePolicy1);
        weight4LineEdit->setText(QStringLiteral("95.0"));

        gridLayout_3->addWidget(weight4LineEdit, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(SpreadMinDaysConstraintsFiveDaysForm_template);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spread2CheckBox = new QCheckBox(groupBox_2);
        spread2CheckBox->setObjectName(QStringLiteral("spread2CheckBox"));
        spread2CheckBox->setChecked(true);

        gridLayout->addWidget(spread2CheckBox, 0, 0, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        weight2Label = new QLabel(groupBox_2);
        weight2Label->setObjectName(QStringLiteral("weight2Label"));

        gridLayout->addWidget(weight2Label, 2, 0, 1, 1);

        weight2LineEdit = new QLineEdit(groupBox_2);
        weight2LineEdit->setObjectName(QStringLiteral("weight2LineEdit"));
        sizePolicy1.setHeightForWidth(weight2LineEdit->sizePolicy().hasHeightForWidth());
        weight2LineEdit->setSizePolicy(sizePolicy1);
        weight2LineEdit->setText(QStringLiteral("95.0"));

        gridLayout->addWidget(weight2LineEdit, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout_6->addLayout(horizontalLayout, 1, 0, 1, 4);

        groupBox_3 = new QGroupBox(SpreadMinDaysConstraintsFiveDaysForm_template);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        spread3CheckBox = new QCheckBox(groupBox_3);
        spread3CheckBox->setObjectName(QStringLiteral("spread3CheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spread3CheckBox->sizePolicy().hasHeightForWidth());
        spread3CheckBox->setSizePolicy(sizePolicy3);
        spread3CheckBox->setChecked(true);

        gridLayout_5->addWidget(spread3CheckBox, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        gridLayout_5->addWidget(label_3, 1, 0, 1, 1);

        weight3Label = new QLabel(groupBox_3);
        weight3Label->setObjectName(QStringLiteral("weight3Label"));

        gridLayout_5->addWidget(weight3Label, 0, 1, 1, 1);

        weight3LineEdit = new QLineEdit(groupBox_3);
        weight3LineEdit->setObjectName(QStringLiteral("weight3LineEdit"));
        sizePolicy1.setHeightForWidth(weight3LineEdit->sizePolicy().hasHeightForWidth());
        weight3LineEdit->setSizePolicy(sizePolicy1);
        weight3LineEdit->setText(QStringLiteral("95.0"));

        gridLayout_5->addWidget(weight3LineEdit, 0, 2, 1, 1);

        aloneGroupBox = new QGroupBox(groupBox_3);
        aloneGroupBox->setObjectName(QStringLiteral("aloneGroupBox"));
        sizePolicy.setHeightForWidth(aloneGroupBox->sizePolicy().hasHeightForWidth());
        aloneGroupBox->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(aloneGroupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        type123RadioButton = new QRadioButton(aloneGroupBox);
        type123RadioButton->setObjectName(QStringLiteral("type123RadioButton"));
        sizePolicy.setHeightForWidth(type123RadioButton->sizePolicy().hasHeightForWidth());
        type123RadioButton->setSizePolicy(sizePolicy);
        type123RadioButton->setChecked(true);

        gridLayout_4->addWidget(type123RadioButton, 0, 0, 1, 1);

        type312RadioButton = new QRadioButton(aloneGroupBox);
        type312RadioButton->setObjectName(QStringLiteral("type312RadioButton"));
        sizePolicy.setHeightForWidth(type312RadioButton->sizePolicy().hasHeightForWidth());
        type312RadioButton->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(type312RadioButton, 0, 2, 1, 1);

        type213RadioButton = new QRadioButton(aloneGroupBox);
        type213RadioButton->setObjectName(QStringLiteral("type213RadioButton"));
        sizePolicy.setHeightForWidth(type213RadioButton->sizePolicy().hasHeightForWidth());
        type213RadioButton->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(type213RadioButton, 0, 1, 1, 1);


        gridLayout_5->addWidget(aloneGroupBox, 1, 1, 1, 2);


        gridLayout_6->addWidget(groupBox_3, 2, 0, 1, 4);

        helpPushButton = new QPushButton(SpreadMinDaysConstraintsFiveDaysForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        gridLayout_6->addWidget(helpPushButton, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(405, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 3, 1, 1, 1);

        cancelPushButton = new QPushButton(SpreadMinDaysConstraintsFiveDaysForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout_6->addWidget(cancelPushButton, 3, 2, 1, 1);

        okPushButton = new QPushButton(SpreadMinDaysConstraintsFiveDaysForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout_6->addWidget(okPushButton, 3, 3, 1, 1);


        retranslateUi(SpreadMinDaysConstraintsFiveDaysForm_template);

        QMetaObject::connectSlotsByName(SpreadMinDaysConstraintsFiveDaysForm_template);
    } // setupUi

    void retranslateUi(QDialog *SpreadMinDaysConstraintsFiveDaysForm_template)
    {
        SpreadMinDaysConstraintsFiveDaysForm_template->setWindowTitle(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Spreading activities uniformly in the week", 0));
        groupBox_5->setTitle(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Consecutive if same day?", 0));
        consecutiveIfSameDayCheckBox->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Force consecutive if 2 components are on the same day", 0));
        label_6->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Select if when placing 2 activities from the same container in the same day, activities should be consecutive (this only happens for constraints with weight below 100.0%, which are not respected)", 0));
        groupBox_4->setTitle(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "All split activities", 0));
        spread4OrMoreCheckBox->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "At least 1 day apart", 0));
        label_4->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "This has to be checked, so activies from the same container are not in the same day (they are at least 1 day apart)", 0));
        weight4Label->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Weight (%)", 0));
        groupBox_2->setTitle(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Activities split into 2 components", 0));
        spread2CheckBox->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "At least 2 days apart", 0));
        label_2->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Select this so the activities will not be in 2 consecutive days. There will be added 1 additional constraint to accomplish this", 0));
        weight2Label->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Weight (%)", 0));
        groupBox_3->setTitle(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Activities which are split into 3 components per week", 0));
        spread3CheckBox->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Should not be in 3 consecutive days", 0));
        label_3->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Select this if you want activities split into 3 per week not to be in 3 consecutive days. There will be added 2 additional constraints to accomplish this, min 2 days between isolated component and each of the other 2 components. Note: usually, any isolated component: 1, 2 or 3 should work", 0));
        weight3Label->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Weight (%)", 0));
        aloneGroupBox->setTitle(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Isolated component", 0));
        type123RadioButton->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "1", 0));
        type312RadioButton->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "3", 0));
        type213RadioButton->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "2", 0));
        helpPushButton->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Help", 0));
        cancelPushButton->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "Cancel", 0));
        okPushButton->setText(QApplication::translate("SpreadMinDaysConstraintsFiveDaysForm_template", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class SpreadMinDaysConstraintsFiveDaysForm_template: public Ui_SpreadMinDaysConstraintsFiveDaysForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPREADMINDAYSCONSTRAINTSFIVEDAYSFORM_TEMPLATE_H
