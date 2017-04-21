/********************************************************************************
** Form generated from reading UI file 'modifyconstrainttwoactivitiesorderedform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintTwoActivitiesOrderedForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *spacer2;
    QVBoxLayout *vboxLayout;
    QLabel *activityTextLabel;
    QComboBox *firstActivitiesComboBox;
    QVBoxLayout *vboxLayout1;
    QLabel *activityTextLabel_2;
    QComboBox *secondActivitiesComboBox;

    void setupUi(QDialog *ModifyConstraintTwoActivitiesOrderedForm_template)
    {
        if (ModifyConstraintTwoActivitiesOrderedForm_template->objectName().isEmpty())
            ModifyConstraintTwoActivitiesOrderedForm_template->setObjectName(QStringLiteral("ModifyConstraintTwoActivitiesOrderedForm_template"));
        ModifyConstraintTwoActivitiesOrderedForm_template->resize(556, 307);
        gridLayout = new QGridLayout(ModifyConstraintTwoActivitiesOrderedForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTwoActivitiesOrderedForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTwoActivitiesOrderedForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(ModifyConstraintTwoActivitiesOrderedForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTwoActivitiesOrderedForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 2, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTextLabel = new QLabel(ModifyConstraintTwoActivitiesOrderedForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        firstActivitiesComboBox = new QComboBox(ModifyConstraintTwoActivitiesOrderedForm_template);
        firstActivitiesComboBox->setObjectName(QStringLiteral("firstActivitiesComboBox"));
        firstActivitiesComboBox->setEditable(false);
        firstActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        firstActivitiesComboBox->setAutoCompletion(false);
        firstActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(firstActivitiesComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 2);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        activityTextLabel_2 = new QLabel(ModifyConstraintTwoActivitiesOrderedForm_template);
        activityTextLabel_2->setObjectName(QStringLiteral("activityTextLabel_2"));
        activityTextLabel_2->setFrameShape(QFrame::NoFrame);
        activityTextLabel_2->setFrameShadow(QFrame::Plain);
        activityTextLabel_2->setWordWrap(false);

        vboxLayout1->addWidget(activityTextLabel_2);

        secondActivitiesComboBox = new QComboBox(ModifyConstraintTwoActivitiesOrderedForm_template);
        secondActivitiesComboBox->setObjectName(QStringLiteral("secondActivitiesComboBox"));
        secondActivitiesComboBox->setEditable(false);
        secondActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        secondActivitiesComboBox->setAutoCompletion(false);
        secondActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(secondActivitiesComboBox);


        gridLayout->addLayout(vboxLayout1, 1, 0, 1, 2);


        retranslateUi(ModifyConstraintTwoActivitiesOrderedForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTwoActivitiesOrderedForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTwoActivitiesOrderedForm_template)
    {
        ModifyConstraintTwoActivitiesOrderedForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTwoActivitiesOrderedForm_template", "Modify two activities ordered", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTwoActivitiesOrderedForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTwoActivitiesOrderedForm_template", "Cancel", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTwoActivitiesOrderedForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        activityTextLabel->setText(QApplication::translate("ModifyConstraintTwoActivitiesOrderedForm_template", "First activity", 0));
        activityTextLabel_2->setText(QApplication::translate("ModifyConstraintTwoActivitiesOrderedForm_template", "Second activity", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTwoActivitiesOrderedForm_template: public Ui_ModifyConstraintTwoActivitiesOrderedForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H
