/********************************************************************************
** Form generated from reading UI file 'removeredundantform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEREDUNDANTFORM_TEMPLATE_H
#define UI_REMOVEREDUNDANTFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RemoveRedundantForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *removeRedundantCheckBox;
    QLabel *label_4;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;
    QLabel *label_5;

    void setupUi(QDialog *RemoveRedundantForm_template)
    {
        if (RemoveRedundantForm_template->objectName().isEmpty())
            RemoveRedundantForm_template->setObjectName(QStringLiteral("RemoveRedundantForm_template"));
        RemoveRedundantForm_template->resize(756, 367);
        gridLayout_2 = new QGridLayout(RemoveRedundantForm_template);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(RemoveRedundantForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        removeRedundantCheckBox = new QCheckBox(groupBox);
        removeRedundantCheckBox->setObjectName(QStringLiteral("removeRedundantCheckBox"));
        removeRedundantCheckBox->setChecked(true);

        gridLayout->addWidget(removeRedundantCheckBox, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(547, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        cancelPushButton = new QPushButton(RemoveRedundantForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout_2->addWidget(cancelPushButton, 2, 1, 1, 1);

        okPushButton = new QPushButton(RemoveRedundantForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout_2->addWidget(okPushButton, 2, 2, 1, 1);

        label_5 = new QLabel(RemoveRedundantForm_template);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setWordWrap(true);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 2);


        retranslateUi(RemoveRedundantForm_template);

        QMetaObject::connectSlotsByName(RemoveRedundantForm_template);
    } // setupUi

    void retranslateUi(QDialog *RemoveRedundantForm_template)
    {
        RemoveRedundantForm_template->setWindowTitle(QApplication::translate("RemoveRedundantForm_template", "Remove redundant constraints", 0));
        groupBox->setTitle(QApplication::translate("RemoveRedundantForm_template", "Min days between activities", 0));
        removeRedundantCheckBox->setText(QApplication::translate("RemoveRedundantForm_template", "Remove redundant min days constraints", 0));
        label_4->setText(QApplication::translate("RemoveRedundantForm_template", "Explanation: If you use constraints activities same starting time and/or constraints activities same starting days, maybe you will obtain redundant constraints min days between activities, which are not good (your timetable is more difficult to find, or even impossible). This menu enables you to remove these redundant min days between activities constraints", 0));
        label_6->setText(QApplication::translate("RemoveRedundantForm_template", "Here, removing means making the weights of the constraints equal to 0.0%", 0));
        cancelPushButton->setText(QApplication::translate("RemoveRedundantForm_template", "Cancel", 0));
        okPushButton->setText(QApplication::translate("RemoveRedundantForm_template", "OK", 0));
        label_5->setText(QApplication::translate("RemoveRedundantForm_template", "This function will try to improve your timetable data by removing redundant constraints", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveRedundantForm_template: public Ui_RemoveRedundantForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEREDUNDANTFORM_TEMPLATE_H
