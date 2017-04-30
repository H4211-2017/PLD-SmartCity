/********************************************************************************
** Form generated from reading UI file 'changemindaysselectivelyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEMINDAYSSELECTIVELYFORM_TEMPLATE_H
#define UI_CHANGEMINDAYSSELECTIVELYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ChangeMinDaysSelectivelyForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLineEdit *oldWeightLineEdit;
    QLabel *label_2;
    QSpinBox *oldDaysSpinBox;
    QLabel *label_3;
    QComboBox *oldConsecutiveComboBox;
    QLabel *label_6;
    QSpinBox *oldNActsSpinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *label_4;
    QLineEdit *newWeightLineEdit;
    QLabel *label_7;
    QSpinBox *newDaysSpinBox;
    QLabel *label_8;
    QComboBox *newConsecutiveComboBox;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem2;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ChangeMinDaysSelectivelyForm_template)
    {
        if (ChangeMinDaysSelectivelyForm_template->objectName().isEmpty())
            ChangeMinDaysSelectivelyForm_template->setObjectName(QStringLiteral("ChangeMinDaysSelectivelyForm_template"));
        ChangeMinDaysSelectivelyForm_template->resize(541, 504);
        gridLayout = new QGridLayout(ChangeMinDaysSelectivelyForm_template);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(ChangeMinDaysSelectivelyForm_template);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(483, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        groupBox = new QGroupBox(ChangeMinDaysSelectivelyForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        oldWeightLineEdit = new QLineEdit(groupBox);
        oldWeightLineEdit->setObjectName(QStringLiteral("oldWeightLineEdit"));

        gridLayout1->addWidget(oldWeightLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        oldDaysSpinBox = new QSpinBox(groupBox);
        oldDaysSpinBox->setObjectName(QStringLiteral("oldDaysSpinBox"));
        oldDaysSpinBox->setMinimum(-1);
        oldDaysSpinBox->setValue(-1);

        gridLayout1->addWidget(oldDaysSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        oldConsecutiveComboBox = new QComboBox(groupBox);
        oldConsecutiveComboBox->setObjectName(QStringLiteral("oldConsecutiveComboBox"));

        gridLayout1->addWidget(oldConsecutiveComboBox, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout1->addWidget(label_6, 3, 0, 1, 1);

        oldNActsSpinBox = new QSpinBox(groupBox);
        oldNActsSpinBox->setObjectName(QStringLiteral("oldNActsSpinBox"));
        oldNActsSpinBox->setMinimum(-1);
        oldNActsSpinBox->setValue(-1);

        gridLayout1->addWidget(oldNActsSpinBox, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(ChangeMinDaysSelectivelyForm_template);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout2->addWidget(label_4, 0, 0, 1, 1);

        newWeightLineEdit = new QLineEdit(groupBox_2);
        newWeightLineEdit->setObjectName(QStringLiteral("newWeightLineEdit"));

        gridLayout2->addWidget(newWeightLineEdit, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout2->addWidget(label_7, 1, 0, 1, 1);

        newDaysSpinBox = new QSpinBox(groupBox_2);
        newDaysSpinBox->setObjectName(QStringLiteral("newDaysSpinBox"));
        newDaysSpinBox->setMinimum(-1);
        newDaysSpinBox->setValue(-1);

        gridLayout2->addWidget(newDaysSpinBox, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout2->addWidget(label_8, 2, 0, 1, 1);

        newConsecutiveComboBox = new QComboBox(groupBox_2);
        newConsecutiveComboBox->setObjectName(QStringLiteral("newConsecutiveComboBox"));

        gridLayout2->addWidget(newConsecutiveComboBox, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 1);

        spacerItem1 = new QSpacerItem(483, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 4, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        okPushButton = new QPushButton(ChangeMinDaysSelectivelyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setDefault(true);

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ChangeMinDaysSelectivelyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 1);


        retranslateUi(ChangeMinDaysSelectivelyForm_template);

        QMetaObject::connectSlotsByName(ChangeMinDaysSelectivelyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ChangeMinDaysSelectivelyForm_template)
    {
        ChangeMinDaysSelectivelyForm_template->setWindowTitle(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Change more constraints min days between activities", 0));
        label_5->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Please input old values (filters) and the new values. All old values (weight, min days and consecutive if same day) of corresponding constraints will be changed to the new ones. New weight is recommended at least 95.0 (or -1)", 0));
        groupBox->setTitle(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Old values (filter)", 0));
        label->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Weight (-1 = any)", 0));
        oldWeightLineEdit->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "-1", 0));
        label_2->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Min days (-1 = any)", 0));
        label_3->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Consecutive if same day", 0));
        label_6->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "N activities (-1 = any)", 0));
        groupBox_2->setTitle(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "New values", 0));
        label_4->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Weight (0.0 to 100.0, -1 to leave unchanged)", 0));
        newWeightLineEdit->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "-1", 0));
        label_7->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Min days (-1 to leave unchanged)", 0));
        label_8->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Consecutive if same day", 0));
        okPushButton->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("ChangeMinDaysSelectivelyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangeMinDaysSelectivelyForm_template: public Ui_ChangeMinDaysSelectivelyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEMINDAYSSELECTIVELYFORM_TEMPLATE_H
