/********************************************************************************
** Form generated from reading UI file 'modifyconstraintthreeactivitiesgroupedform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTHREEACTIVITIESGROUPEDFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTHREEACTIVITIESGROUPEDFORM_TEMPLATE_H

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

class Ui_ModifyConstraintThreeActivitiesGroupedForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QVBoxLayout *vboxLayout;
    QLabel *activityTextLabel;
    QComboBox *firstActivitiesComboBox;
    QVBoxLayout *vboxLayout1;
    QLabel *activityTextLabel_2;
    QComboBox *secondActivitiesComboBox;
    QVBoxLayout *vboxLayout2;
    QLabel *activityTextLabel_2_2;
    QComboBox *thirdActivitiesComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintThreeActivitiesGroupedForm_template)
    {
        if (ModifyConstraintThreeActivitiesGroupedForm_template->objectName().isEmpty())
            ModifyConstraintThreeActivitiesGroupedForm_template->setObjectName(QStringLiteral("ModifyConstraintThreeActivitiesGroupedForm_template"));
        ModifyConstraintThreeActivitiesGroupedForm_template->resize(593, 392);
        gridLayout = new QGridLayout(ModifyConstraintThreeActivitiesGroupedForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintThreeActivitiesGroupedForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintThreeActivitiesGroupedForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTextLabel = new QLabel(ModifyConstraintThreeActivitiesGroupedForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        firstActivitiesComboBox = new QComboBox(ModifyConstraintThreeActivitiesGroupedForm_template);
        firstActivitiesComboBox->setObjectName(QStringLiteral("firstActivitiesComboBox"));
        firstActivitiesComboBox->setEditable(false);
        firstActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        firstActivitiesComboBox->setAutoCompletion(false);
        firstActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(firstActivitiesComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        activityTextLabel_2 = new QLabel(ModifyConstraintThreeActivitiesGroupedForm_template);
        activityTextLabel_2->setObjectName(QStringLiteral("activityTextLabel_2"));
        activityTextLabel_2->setFrameShape(QFrame::NoFrame);
        activityTextLabel_2->setFrameShadow(QFrame::Plain);
        activityTextLabel_2->setWordWrap(false);

        vboxLayout1->addWidget(activityTextLabel_2);

        secondActivitiesComboBox = new QComboBox(ModifyConstraintThreeActivitiesGroupedForm_template);
        secondActivitiesComboBox->setObjectName(QStringLiteral("secondActivitiesComboBox"));
        secondActivitiesComboBox->setEditable(false);
        secondActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        secondActivitiesComboBox->setAutoCompletion(false);
        secondActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(secondActivitiesComboBox);


        gridLayout->addLayout(vboxLayout1, 1, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        activityTextLabel_2_2 = new QLabel(ModifyConstraintThreeActivitiesGroupedForm_template);
        activityTextLabel_2_2->setObjectName(QStringLiteral("activityTextLabel_2_2"));
        activityTextLabel_2_2->setFrameShape(QFrame::NoFrame);
        activityTextLabel_2_2->setFrameShadow(QFrame::Plain);
        activityTextLabel_2_2->setWordWrap(false);

        vboxLayout2->addWidget(activityTextLabel_2_2);

        thirdActivitiesComboBox = new QComboBox(ModifyConstraintThreeActivitiesGroupedForm_template);
        thirdActivitiesComboBox->setObjectName(QStringLiteral("thirdActivitiesComboBox"));
        thirdActivitiesComboBox->setEditable(false);
        thirdActivitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        thirdActivitiesComboBox->setAutoCompletion(false);
        thirdActivitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout2->addWidget(thirdActivitiesComboBox);


        gridLayout->addLayout(vboxLayout2, 2, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 3, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintThreeActivitiesGroupedForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintThreeActivitiesGroupedForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 6, 0, 1, 1);


        retranslateUi(ModifyConstraintThreeActivitiesGroupedForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintThreeActivitiesGroupedForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintThreeActivitiesGroupedForm_template)
    {
        ModifyConstraintThreeActivitiesGroupedForm_template->setWindowTitle(QApplication::translate("ModifyConstraintThreeActivitiesGroupedForm_template", "Modify three activities grouped", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintThreeActivitiesGroupedForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        activityTextLabel->setText(QApplication::translate("ModifyConstraintThreeActivitiesGroupedForm_template", "First activity", 0));
        activityTextLabel_2->setText(QApplication::translate("ModifyConstraintThreeActivitiesGroupedForm_template", "Second activity", 0));
        activityTextLabel_2_2->setText(QApplication::translate("ModifyConstraintThreeActivitiesGroupedForm_template", "Third activity", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintThreeActivitiesGroupedForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintThreeActivitiesGroupedForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintThreeActivitiesGroupedForm_template: public Ui_ModifyConstraintThreeActivitiesGroupedForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTHREEACTIVITIESGROUPEDFORM_TEMPLATE_H
