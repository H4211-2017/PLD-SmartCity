/********************************************************************************
** Form generated from reading UI file 'modifyconstrainttwoactivitiesconsecutiveform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTwoActivitiesConsecutiveForm_template
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

    void setupUi(QDialog *ModifyConstraintTwoActivitiesConsecutiveForm_template)
    {
        if (ModifyConstraintTwoActivitiesConsecutiveForm_template->objectName().isEmpty())
            ModifyConstraintTwoActivitiesConsecutiveForm_template->setObjectName(QStringLiteral("ModifyConstraintTwoActivitiesConsecutiveForm_template"));
        ModifyConstraintTwoActivitiesConsecutiveForm_template->resize(547, 332);
        gridLayout = new QGridLayout(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 2, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTextLabel = new QLabel(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        firstActivitiesComboBox = new QComboBox(ModifyConstraintTwoActivitiesConsecutiveForm_template);
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
        activityTextLabel_2 = new QLabel(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        activityTextLabel_2->setObjectName(QStringLiteral("activityTextLabel_2"));
        activityTextLabel_2->setFrameShape(QFrame::NoFrame);
        activityTextLabel_2->setFrameShadow(QFrame::Plain);
        activityTextLabel_2->setWordWrap(false);

        vboxLayout1->addWidget(activityTextLabel_2);

        secondActivitiesComboBox = new QComboBox(ModifyConstraintTwoActivitiesConsecutiveForm_template);
        secondActivitiesComboBox->setObjectName(QStringLiteral("secondActivitiesComboBox"));
        secondActivitiesComboBox->setEditable(false);
        secondActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        secondActivitiesComboBox->setAutoCompletion(false);
        secondActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(secondActivitiesComboBox);


        gridLayout->addLayout(vboxLayout1, 1, 0, 1, 2);


        retranslateUi(ModifyConstraintTwoActivitiesConsecutiveForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTwoActivitiesConsecutiveForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTwoActivitiesConsecutiveForm_template)
    {
        ModifyConstraintTwoActivitiesConsecutiveForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTwoActivitiesConsecutiveForm_template", "Modify two activities consecutive", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTwoActivitiesConsecutiveForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTwoActivitiesConsecutiveForm_template", "Cancel", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTwoActivitiesConsecutiveForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        activityTextLabel->setText(QApplication::translate("ModifyConstraintTwoActivitiesConsecutiveForm_template", "First activity", 0));
        activityTextLabel_2->setText(QApplication::translate("ModifyConstraintTwoActivitiesConsecutiveForm_template", "Second activity", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTwoActivitiesConsecutiveForm_template: public Ui_ModifyConstraintTwoActivitiesConsecutiveForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H
