/********************************************************************************
** Form generated from reading UI file 'hoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOURSFORM_TEMPLATE_H
#define UI_HOURSFORM_TEMPLATE_H

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

class Ui_HoursForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *hoursTextLabel;
    QSpinBox *hoursSpinBox;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout1;
    QLineEdit *hour1LineEdit;
    QLabel *hour1TextLabel;
    QLineEdit *hour2LineEdit;
    QLabel *hour2TextLabel;
    QLineEdit *hour3LineEdit;
    QLabel *hour3TextLabel;
    QLabel *hour4TextLabel;
    QLineEdit *hour4LineEdit;
    QLineEdit *hour5LineEdit;
    QLabel *hour5TextLabel;
    QLabel *hour6TextLabel;
    QLineEdit *hour6LineEdit;
    QLabel *hour7TextLabel;
    QLineEdit *hour7LineEdit;
    QLineEdit *hour8LineEdit;
    QLabel *hour8TextLabel;
    QLineEdit *hour9LineEdit;
    QLabel *hour9TextLabel;
    QLineEdit *hour10LineEdit;
    QLabel *hour10TextLabel;
    QLineEdit *hour11LineEdit;
    QLabel *hour11TextLabel;
    QLineEdit *hour12LineEdit;
    QLabel *hour12TextLabel;
    QLabel *hour13TextLabel;
    QLineEdit *hour13LineEdit;
    QLineEdit *hour14LineEdit;
    QLabel *hour14TextLabel;
    QLabel *hour15TextLabel;
    QLineEdit *hour15LineEdit;
    QLineEdit *hour16LineEdit;
    QLabel *hour16TextLabel;
    QLabel *hour17TextLabel;
    QLineEdit *hour17LineEdit;
    QLabel *hour18TextLabel;
    QLineEdit *hour18LineEdit;
    QLabel *hour19TextLabel;
    QLineEdit *hour19LineEdit;
    QLabel *hour20TextLabel;
    QLineEdit *hour20LineEdit;
    QLineEdit *hour21LineEdit;
    QLabel *hour21TextLabel;
    QLabel *hour22TextLabel;
    QLineEdit *hour22LineEdit;
    QLabel *hour23TextLabel;
    QLineEdit *hour23LineEdit;
    QLineEdit *hour24LineEdit;
    QLabel *hour24TextLabel;
    QLineEdit *hour25LineEdit;
    QLabel *hour25TextLabel;
    QLineEdit *hour26LineEdit;
    QLabel *hour26TextLabel;
    QLineEdit *hour27LineEdit;
    QLabel *hour27TextLabel;
    QLabel *hour28TextLabel;
    QLineEdit *hour28LineEdit;
    QLabel *hour29TextLabel;
    QLineEdit *hour29LineEdit;
    QLabel *hour30TextLabel;
    QLineEdit *hour30LineEdit;
    QLineEdit *hour31LineEdit;
    QLabel *hour31TextLabel;
    QLineEdit *hour32LineEdit;
    QLabel *hour32TextLabel;
    QLineEdit *hour33LineEdit;
    QLabel *hour33TextLabel;
    QLabel *hour34TextLabel;
    QLineEdit *hour34LineEdit;
    QLineEdit *hour35LineEdit;
    QLabel *hour35TextLabel;
    QLabel *hour36TextLabel;
    QLineEdit *hour36LineEdit;
    QLabel *hour37TextLabel;
    QLineEdit *hour37LineEdit;
    QLabel *hour38TextLabel;
    QLineEdit *hour38LineEdit;
    QLabel *hour39TextLabel;
    QLineEdit *hour39LineEdit;
    QLabel *hour40TextLabel;
    QLineEdit *hour40LineEdit;
    QLabel *hour41TextLabel;
    QLineEdit *hour41LineEdit;
    QLineEdit *hour42LineEdit;
    QLabel *hour42TextLabel;
    QLineEdit *hour43LineEdit;
    QLabel *hour43TextLabel;
    QLabel *hour44TextLabel;
    QLineEdit *hour44LineEdit;
    QLabel *hour45TextLabel;
    QLineEdit *hour45LineEdit;
    QLineEdit *hour46LineEdit;
    QLabel *hour46TextLabel;
    QLabel *hour47TextLabel;
    QLineEdit *hour47LineEdit;
    QLineEdit *hour48LineEdit;
    QLabel *hour48TextLabel;
    QLabel *hour49TextLabel;
    QLineEdit *hour49LineEdit;
    QLabel *hour50TextLabel;
    QLineEdit *hour50LineEdit;
    QLabel *hour51TextLabel;
    QLineEdit *hour51LineEdit;
    QLabel *hour52TextLabel;
    QLineEdit *hour52LineEdit;
    QLabel *hour53TextLabel;
    QLineEdit *hour53LineEdit;
    QLabel *hour54TextLabel;
    QLineEdit *hour54LineEdit;
    QLineEdit *hour55LineEdit;
    QLabel *hour55TextLabel;
    QLabel *hour56TextLabel;
    QLineEdit *hour56LineEdit;
    QLabel *hour57TextLabel;
    QLineEdit *hour57LineEdit;
    QLineEdit *hour58LineEdit;
    QLabel *hour58TextLabel;
    QLineEdit *hour59LineEdit;
    QLabel *hour59TextLabel;
    QLineEdit *hour60LineEdit;
    QLabel *hour60TextLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *HoursForm_template)
    {
        if (HoursForm_template->objectName().isEmpty())
            HoursForm_template->setObjectName(QStringLiteral("HoursForm_template"));
        HoursForm_template->resize(715, 598);
        gridLayout = new QGridLayout(HoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        hoursTextLabel = new QLabel(HoursForm_template);
        hoursTextLabel->setObjectName(QStringLiteral("hoursTextLabel"));
        hoursTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(hoursTextLabel);

        hoursSpinBox = new QSpinBox(HoursForm_template);
        hoursSpinBox->setObjectName(QStringLiteral("hoursSpinBox"));
        hoursSpinBox->setMinimum(1);
        hoursSpinBox->setMaximum(100);
        hoursSpinBox->setValue(1);

        horizontalLayout->addWidget(hoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        hour1LineEdit = new QLineEdit(HoursForm_template);
        hour1LineEdit->setObjectName(QStringLiteral("hour1LineEdit"));

        gridLayout1->addWidget(hour1LineEdit, 1, 0, 1, 1);

        hour1TextLabel = new QLabel(HoursForm_template);
        hour1TextLabel->setObjectName(QStringLiteral("hour1TextLabel"));
        hour1TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour1TextLabel, 0, 0, 1, 1);

        hour2LineEdit = new QLineEdit(HoursForm_template);
        hour2LineEdit->setObjectName(QStringLiteral("hour2LineEdit"));

        gridLayout1->addWidget(hour2LineEdit, 3, 0, 1, 1);

        hour2TextLabel = new QLabel(HoursForm_template);
        hour2TextLabel->setObjectName(QStringLiteral("hour2TextLabel"));
        hour2TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour2TextLabel, 2, 0, 1, 1);

        hour3LineEdit = new QLineEdit(HoursForm_template);
        hour3LineEdit->setObjectName(QStringLiteral("hour3LineEdit"));

        gridLayout1->addWidget(hour3LineEdit, 5, 0, 1, 1);

        hour3TextLabel = new QLabel(HoursForm_template);
        hour3TextLabel->setObjectName(QStringLiteral("hour3TextLabel"));
        hour3TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour3TextLabel, 4, 0, 1, 1);

        hour4TextLabel = new QLabel(HoursForm_template);
        hour4TextLabel->setObjectName(QStringLiteral("hour4TextLabel"));
        hour4TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour4TextLabel, 6, 0, 1, 1);

        hour4LineEdit = new QLineEdit(HoursForm_template);
        hour4LineEdit->setObjectName(QStringLiteral("hour4LineEdit"));

        gridLayout1->addWidget(hour4LineEdit, 7, 0, 1, 1);

        hour5LineEdit = new QLineEdit(HoursForm_template);
        hour5LineEdit->setObjectName(QStringLiteral("hour5LineEdit"));

        gridLayout1->addWidget(hour5LineEdit, 9, 0, 1, 1);

        hour5TextLabel = new QLabel(HoursForm_template);
        hour5TextLabel->setObjectName(QStringLiteral("hour5TextLabel"));
        hour5TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour5TextLabel, 8, 0, 1, 1);

        hour6TextLabel = new QLabel(HoursForm_template);
        hour6TextLabel->setObjectName(QStringLiteral("hour6TextLabel"));
        hour6TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour6TextLabel, 10, 0, 1, 1);

        hour6LineEdit = new QLineEdit(HoursForm_template);
        hour6LineEdit->setObjectName(QStringLiteral("hour6LineEdit"));

        gridLayout1->addWidget(hour6LineEdit, 11, 0, 1, 1);

        hour7TextLabel = new QLabel(HoursForm_template);
        hour7TextLabel->setObjectName(QStringLiteral("hour7TextLabel"));
        hour7TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour7TextLabel, 12, 0, 1, 1);

        hour7LineEdit = new QLineEdit(HoursForm_template);
        hour7LineEdit->setObjectName(QStringLiteral("hour7LineEdit"));

        gridLayout1->addWidget(hour7LineEdit, 13, 0, 1, 1);

        hour8LineEdit = new QLineEdit(HoursForm_template);
        hour8LineEdit->setObjectName(QStringLiteral("hour8LineEdit"));

        gridLayout1->addWidget(hour8LineEdit, 15, 0, 1, 1);

        hour8TextLabel = new QLabel(HoursForm_template);
        hour8TextLabel->setObjectName(QStringLiteral("hour8TextLabel"));
        hour8TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour8TextLabel, 14, 0, 1, 1);

        hour9LineEdit = new QLineEdit(HoursForm_template);
        hour9LineEdit->setObjectName(QStringLiteral("hour9LineEdit"));

        gridLayout1->addWidget(hour9LineEdit, 1, 1, 1, 1);

        hour9TextLabel = new QLabel(HoursForm_template);
        hour9TextLabel->setObjectName(QStringLiteral("hour9TextLabel"));
        hour9TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour9TextLabel, 0, 1, 1, 1);

        hour10LineEdit = new QLineEdit(HoursForm_template);
        hour10LineEdit->setObjectName(QStringLiteral("hour10LineEdit"));

        gridLayout1->addWidget(hour10LineEdit, 3, 1, 1, 1);

        hour10TextLabel = new QLabel(HoursForm_template);
        hour10TextLabel->setObjectName(QStringLiteral("hour10TextLabel"));
        hour10TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour10TextLabel, 2, 1, 1, 1);

        hour11LineEdit = new QLineEdit(HoursForm_template);
        hour11LineEdit->setObjectName(QStringLiteral("hour11LineEdit"));

        gridLayout1->addWidget(hour11LineEdit, 5, 1, 1, 1);

        hour11TextLabel = new QLabel(HoursForm_template);
        hour11TextLabel->setObjectName(QStringLiteral("hour11TextLabel"));
        hour11TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour11TextLabel, 4, 1, 1, 1);

        hour12LineEdit = new QLineEdit(HoursForm_template);
        hour12LineEdit->setObjectName(QStringLiteral("hour12LineEdit"));

        gridLayout1->addWidget(hour12LineEdit, 7, 1, 1, 1);

        hour12TextLabel = new QLabel(HoursForm_template);
        hour12TextLabel->setObjectName(QStringLiteral("hour12TextLabel"));
        hour12TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour12TextLabel, 6, 1, 1, 1);

        hour13TextLabel = new QLabel(HoursForm_template);
        hour13TextLabel->setObjectName(QStringLiteral("hour13TextLabel"));
        hour13TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour13TextLabel, 8, 1, 1, 1);

        hour13LineEdit = new QLineEdit(HoursForm_template);
        hour13LineEdit->setObjectName(QStringLiteral("hour13LineEdit"));

        gridLayout1->addWidget(hour13LineEdit, 9, 1, 1, 1);

        hour14LineEdit = new QLineEdit(HoursForm_template);
        hour14LineEdit->setObjectName(QStringLiteral("hour14LineEdit"));

        gridLayout1->addWidget(hour14LineEdit, 11, 1, 1, 1);

        hour14TextLabel = new QLabel(HoursForm_template);
        hour14TextLabel->setObjectName(QStringLiteral("hour14TextLabel"));
        hour14TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour14TextLabel, 10, 1, 1, 1);

        hour15TextLabel = new QLabel(HoursForm_template);
        hour15TextLabel->setObjectName(QStringLiteral("hour15TextLabel"));
        hour15TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour15TextLabel, 12, 1, 1, 1);

        hour15LineEdit = new QLineEdit(HoursForm_template);
        hour15LineEdit->setObjectName(QStringLiteral("hour15LineEdit"));

        gridLayout1->addWidget(hour15LineEdit, 13, 1, 1, 1);

        hour16LineEdit = new QLineEdit(HoursForm_template);
        hour16LineEdit->setObjectName(QStringLiteral("hour16LineEdit"));

        gridLayout1->addWidget(hour16LineEdit, 15, 1, 1, 1);

        hour16TextLabel = new QLabel(HoursForm_template);
        hour16TextLabel->setObjectName(QStringLiteral("hour16TextLabel"));
        hour16TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour16TextLabel, 14, 1, 1, 1);

        hour17TextLabel = new QLabel(HoursForm_template);
        hour17TextLabel->setObjectName(QStringLiteral("hour17TextLabel"));
        hour17TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour17TextLabel, 0, 2, 1, 1);

        hour17LineEdit = new QLineEdit(HoursForm_template);
        hour17LineEdit->setObjectName(QStringLiteral("hour17LineEdit"));

        gridLayout1->addWidget(hour17LineEdit, 1, 2, 1, 1);

        hour18TextLabel = new QLabel(HoursForm_template);
        hour18TextLabel->setObjectName(QStringLiteral("hour18TextLabel"));
        hour18TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour18TextLabel, 2, 2, 1, 1);

        hour18LineEdit = new QLineEdit(HoursForm_template);
        hour18LineEdit->setObjectName(QStringLiteral("hour18LineEdit"));

        gridLayout1->addWidget(hour18LineEdit, 3, 2, 1, 1);

        hour19TextLabel = new QLabel(HoursForm_template);
        hour19TextLabel->setObjectName(QStringLiteral("hour19TextLabel"));
        hour19TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour19TextLabel, 4, 2, 1, 1);

        hour19LineEdit = new QLineEdit(HoursForm_template);
        hour19LineEdit->setObjectName(QStringLiteral("hour19LineEdit"));

        gridLayout1->addWidget(hour19LineEdit, 5, 2, 1, 1);

        hour20TextLabel = new QLabel(HoursForm_template);
        hour20TextLabel->setObjectName(QStringLiteral("hour20TextLabel"));
        hour20TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour20TextLabel, 6, 2, 1, 1);

        hour20LineEdit = new QLineEdit(HoursForm_template);
        hour20LineEdit->setObjectName(QStringLiteral("hour20LineEdit"));

        gridLayout1->addWidget(hour20LineEdit, 7, 2, 1, 1);

        hour21LineEdit = new QLineEdit(HoursForm_template);
        hour21LineEdit->setObjectName(QStringLiteral("hour21LineEdit"));

        gridLayout1->addWidget(hour21LineEdit, 9, 2, 1, 1);

        hour21TextLabel = new QLabel(HoursForm_template);
        hour21TextLabel->setObjectName(QStringLiteral("hour21TextLabel"));
        hour21TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour21TextLabel, 8, 2, 1, 1);

        hour22TextLabel = new QLabel(HoursForm_template);
        hour22TextLabel->setObjectName(QStringLiteral("hour22TextLabel"));
        hour22TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour22TextLabel, 10, 2, 1, 1);

        hour22LineEdit = new QLineEdit(HoursForm_template);
        hour22LineEdit->setObjectName(QStringLiteral("hour22LineEdit"));

        gridLayout1->addWidget(hour22LineEdit, 11, 2, 1, 1);

        hour23TextLabel = new QLabel(HoursForm_template);
        hour23TextLabel->setObjectName(QStringLiteral("hour23TextLabel"));
        hour23TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour23TextLabel, 12, 2, 1, 1);

        hour23LineEdit = new QLineEdit(HoursForm_template);
        hour23LineEdit->setObjectName(QStringLiteral("hour23LineEdit"));

        gridLayout1->addWidget(hour23LineEdit, 13, 2, 1, 1);

        hour24LineEdit = new QLineEdit(HoursForm_template);
        hour24LineEdit->setObjectName(QStringLiteral("hour24LineEdit"));

        gridLayout1->addWidget(hour24LineEdit, 15, 2, 1, 1);

        hour24TextLabel = new QLabel(HoursForm_template);
        hour24TextLabel->setObjectName(QStringLiteral("hour24TextLabel"));
        hour24TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour24TextLabel, 14, 2, 1, 1);

        hour25LineEdit = new QLineEdit(HoursForm_template);
        hour25LineEdit->setObjectName(QStringLiteral("hour25LineEdit"));

        gridLayout1->addWidget(hour25LineEdit, 1, 3, 1, 1);

        hour25TextLabel = new QLabel(HoursForm_template);
        hour25TextLabel->setObjectName(QStringLiteral("hour25TextLabel"));
        hour25TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour25TextLabel, 0, 3, 1, 1);

        hour26LineEdit = new QLineEdit(HoursForm_template);
        hour26LineEdit->setObjectName(QStringLiteral("hour26LineEdit"));

        gridLayout1->addWidget(hour26LineEdit, 3, 3, 1, 1);

        hour26TextLabel = new QLabel(HoursForm_template);
        hour26TextLabel->setObjectName(QStringLiteral("hour26TextLabel"));
        hour26TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour26TextLabel, 2, 3, 1, 1);

        hour27LineEdit = new QLineEdit(HoursForm_template);
        hour27LineEdit->setObjectName(QStringLiteral("hour27LineEdit"));

        gridLayout1->addWidget(hour27LineEdit, 5, 3, 1, 1);

        hour27TextLabel = new QLabel(HoursForm_template);
        hour27TextLabel->setObjectName(QStringLiteral("hour27TextLabel"));
        hour27TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour27TextLabel, 4, 3, 1, 1);

        hour28TextLabel = new QLabel(HoursForm_template);
        hour28TextLabel->setObjectName(QStringLiteral("hour28TextLabel"));
        hour28TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour28TextLabel, 6, 3, 1, 1);

        hour28LineEdit = new QLineEdit(HoursForm_template);
        hour28LineEdit->setObjectName(QStringLiteral("hour28LineEdit"));

        gridLayout1->addWidget(hour28LineEdit, 7, 3, 1, 1);

        hour29TextLabel = new QLabel(HoursForm_template);
        hour29TextLabel->setObjectName(QStringLiteral("hour29TextLabel"));
        hour29TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour29TextLabel, 8, 3, 1, 1);

        hour29LineEdit = new QLineEdit(HoursForm_template);
        hour29LineEdit->setObjectName(QStringLiteral("hour29LineEdit"));

        gridLayout1->addWidget(hour29LineEdit, 9, 3, 1, 1);

        hour30TextLabel = new QLabel(HoursForm_template);
        hour30TextLabel->setObjectName(QStringLiteral("hour30TextLabel"));
        hour30TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour30TextLabel, 10, 3, 1, 1);

        hour30LineEdit = new QLineEdit(HoursForm_template);
        hour30LineEdit->setObjectName(QStringLiteral("hour30LineEdit"));

        gridLayout1->addWidget(hour30LineEdit, 11, 3, 1, 1);

        hour31LineEdit = new QLineEdit(HoursForm_template);
        hour31LineEdit->setObjectName(QStringLiteral("hour31LineEdit"));

        gridLayout1->addWidget(hour31LineEdit, 13, 3, 1, 1);

        hour31TextLabel = new QLabel(HoursForm_template);
        hour31TextLabel->setObjectName(QStringLiteral("hour31TextLabel"));
        hour31TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour31TextLabel, 12, 3, 1, 1);

        hour32LineEdit = new QLineEdit(HoursForm_template);
        hour32LineEdit->setObjectName(QStringLiteral("hour32LineEdit"));

        gridLayout1->addWidget(hour32LineEdit, 15, 3, 1, 1);

        hour32TextLabel = new QLabel(HoursForm_template);
        hour32TextLabel->setObjectName(QStringLiteral("hour32TextLabel"));
        hour32TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour32TextLabel, 14, 3, 1, 1);

        hour33LineEdit = new QLineEdit(HoursForm_template);
        hour33LineEdit->setObjectName(QStringLiteral("hour33LineEdit"));

        gridLayout1->addWidget(hour33LineEdit, 1, 4, 1, 1);

        hour33TextLabel = new QLabel(HoursForm_template);
        hour33TextLabel->setObjectName(QStringLiteral("hour33TextLabel"));
        hour33TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour33TextLabel, 0, 4, 1, 1);

        hour34TextLabel = new QLabel(HoursForm_template);
        hour34TextLabel->setObjectName(QStringLiteral("hour34TextLabel"));
        hour34TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour34TextLabel, 2, 4, 1, 1);

        hour34LineEdit = new QLineEdit(HoursForm_template);
        hour34LineEdit->setObjectName(QStringLiteral("hour34LineEdit"));

        gridLayout1->addWidget(hour34LineEdit, 3, 4, 1, 1);

        hour35LineEdit = new QLineEdit(HoursForm_template);
        hour35LineEdit->setObjectName(QStringLiteral("hour35LineEdit"));

        gridLayout1->addWidget(hour35LineEdit, 5, 4, 1, 1);

        hour35TextLabel = new QLabel(HoursForm_template);
        hour35TextLabel->setObjectName(QStringLiteral("hour35TextLabel"));
        hour35TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour35TextLabel, 4, 4, 1, 1);

        hour36TextLabel = new QLabel(HoursForm_template);
        hour36TextLabel->setObjectName(QStringLiteral("hour36TextLabel"));
        hour36TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour36TextLabel, 6, 4, 1, 1);

        hour36LineEdit = new QLineEdit(HoursForm_template);
        hour36LineEdit->setObjectName(QStringLiteral("hour36LineEdit"));

        gridLayout1->addWidget(hour36LineEdit, 7, 4, 1, 1);

        hour37TextLabel = new QLabel(HoursForm_template);
        hour37TextLabel->setObjectName(QStringLiteral("hour37TextLabel"));
        hour37TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour37TextLabel, 8, 4, 1, 1);

        hour37LineEdit = new QLineEdit(HoursForm_template);
        hour37LineEdit->setObjectName(QStringLiteral("hour37LineEdit"));

        gridLayout1->addWidget(hour37LineEdit, 9, 4, 1, 1);

        hour38TextLabel = new QLabel(HoursForm_template);
        hour38TextLabel->setObjectName(QStringLiteral("hour38TextLabel"));
        hour38TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour38TextLabel, 10, 4, 1, 1);

        hour38LineEdit = new QLineEdit(HoursForm_template);
        hour38LineEdit->setObjectName(QStringLiteral("hour38LineEdit"));

        gridLayout1->addWidget(hour38LineEdit, 11, 4, 1, 1);

        hour39TextLabel = new QLabel(HoursForm_template);
        hour39TextLabel->setObjectName(QStringLiteral("hour39TextLabel"));
        hour39TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour39TextLabel, 12, 4, 1, 1);

        hour39LineEdit = new QLineEdit(HoursForm_template);
        hour39LineEdit->setObjectName(QStringLiteral("hour39LineEdit"));

        gridLayout1->addWidget(hour39LineEdit, 13, 4, 1, 1);

        hour40TextLabel = new QLabel(HoursForm_template);
        hour40TextLabel->setObjectName(QStringLiteral("hour40TextLabel"));
        hour40TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour40TextLabel, 14, 4, 1, 1);

        hour40LineEdit = new QLineEdit(HoursForm_template);
        hour40LineEdit->setObjectName(QStringLiteral("hour40LineEdit"));

        gridLayout1->addWidget(hour40LineEdit, 15, 4, 1, 1);

        hour41TextLabel = new QLabel(HoursForm_template);
        hour41TextLabel->setObjectName(QStringLiteral("hour41TextLabel"));
        hour41TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour41TextLabel, 0, 5, 1, 1);

        hour41LineEdit = new QLineEdit(HoursForm_template);
        hour41LineEdit->setObjectName(QStringLiteral("hour41LineEdit"));

        gridLayout1->addWidget(hour41LineEdit, 1, 5, 1, 1);

        hour42LineEdit = new QLineEdit(HoursForm_template);
        hour42LineEdit->setObjectName(QStringLiteral("hour42LineEdit"));

        gridLayout1->addWidget(hour42LineEdit, 3, 5, 1, 1);

        hour42TextLabel = new QLabel(HoursForm_template);
        hour42TextLabel->setObjectName(QStringLiteral("hour42TextLabel"));
        hour42TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour42TextLabel, 2, 5, 1, 1);

        hour43LineEdit = new QLineEdit(HoursForm_template);
        hour43LineEdit->setObjectName(QStringLiteral("hour43LineEdit"));

        gridLayout1->addWidget(hour43LineEdit, 5, 5, 1, 1);

        hour43TextLabel = new QLabel(HoursForm_template);
        hour43TextLabel->setObjectName(QStringLiteral("hour43TextLabel"));
        hour43TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour43TextLabel, 4, 5, 1, 1);

        hour44TextLabel = new QLabel(HoursForm_template);
        hour44TextLabel->setObjectName(QStringLiteral("hour44TextLabel"));
        hour44TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour44TextLabel, 6, 5, 1, 1);

        hour44LineEdit = new QLineEdit(HoursForm_template);
        hour44LineEdit->setObjectName(QStringLiteral("hour44LineEdit"));

        gridLayout1->addWidget(hour44LineEdit, 7, 5, 1, 1);

        hour45TextLabel = new QLabel(HoursForm_template);
        hour45TextLabel->setObjectName(QStringLiteral("hour45TextLabel"));
        hour45TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour45TextLabel, 8, 5, 1, 1);

        hour45LineEdit = new QLineEdit(HoursForm_template);
        hour45LineEdit->setObjectName(QStringLiteral("hour45LineEdit"));

        gridLayout1->addWidget(hour45LineEdit, 9, 5, 1, 1);

        hour46LineEdit = new QLineEdit(HoursForm_template);
        hour46LineEdit->setObjectName(QStringLiteral("hour46LineEdit"));

        gridLayout1->addWidget(hour46LineEdit, 11, 5, 1, 1);

        hour46TextLabel = new QLabel(HoursForm_template);
        hour46TextLabel->setObjectName(QStringLiteral("hour46TextLabel"));
        hour46TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour46TextLabel, 10, 5, 1, 1);

        hour47TextLabel = new QLabel(HoursForm_template);
        hour47TextLabel->setObjectName(QStringLiteral("hour47TextLabel"));
        hour47TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour47TextLabel, 12, 5, 1, 1);

        hour47LineEdit = new QLineEdit(HoursForm_template);
        hour47LineEdit->setObjectName(QStringLiteral("hour47LineEdit"));

        gridLayout1->addWidget(hour47LineEdit, 13, 5, 1, 1);

        hour48LineEdit = new QLineEdit(HoursForm_template);
        hour48LineEdit->setObjectName(QStringLiteral("hour48LineEdit"));

        gridLayout1->addWidget(hour48LineEdit, 15, 5, 1, 1);

        hour48TextLabel = new QLabel(HoursForm_template);
        hour48TextLabel->setObjectName(QStringLiteral("hour48TextLabel"));
        hour48TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour48TextLabel, 14, 5, 1, 1);

        hour49TextLabel = new QLabel(HoursForm_template);
        hour49TextLabel->setObjectName(QStringLiteral("hour49TextLabel"));
        hour49TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour49TextLabel, 0, 6, 1, 1);

        hour49LineEdit = new QLineEdit(HoursForm_template);
        hour49LineEdit->setObjectName(QStringLiteral("hour49LineEdit"));

        gridLayout1->addWidget(hour49LineEdit, 1, 6, 1, 1);

        hour50TextLabel = new QLabel(HoursForm_template);
        hour50TextLabel->setObjectName(QStringLiteral("hour50TextLabel"));
        hour50TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour50TextLabel, 2, 6, 1, 1);

        hour50LineEdit = new QLineEdit(HoursForm_template);
        hour50LineEdit->setObjectName(QStringLiteral("hour50LineEdit"));

        gridLayout1->addWidget(hour50LineEdit, 3, 6, 1, 1);

        hour51TextLabel = new QLabel(HoursForm_template);
        hour51TextLabel->setObjectName(QStringLiteral("hour51TextLabel"));
        hour51TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour51TextLabel, 4, 6, 1, 1);

        hour51LineEdit = new QLineEdit(HoursForm_template);
        hour51LineEdit->setObjectName(QStringLiteral("hour51LineEdit"));

        gridLayout1->addWidget(hour51LineEdit, 5, 6, 1, 1);

        hour52TextLabel = new QLabel(HoursForm_template);
        hour52TextLabel->setObjectName(QStringLiteral("hour52TextLabel"));
        hour52TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour52TextLabel, 6, 6, 1, 1);

        hour52LineEdit = new QLineEdit(HoursForm_template);
        hour52LineEdit->setObjectName(QStringLiteral("hour52LineEdit"));

        gridLayout1->addWidget(hour52LineEdit, 7, 6, 1, 1);

        hour53TextLabel = new QLabel(HoursForm_template);
        hour53TextLabel->setObjectName(QStringLiteral("hour53TextLabel"));
        hour53TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour53TextLabel, 8, 6, 1, 1);

        hour53LineEdit = new QLineEdit(HoursForm_template);
        hour53LineEdit->setObjectName(QStringLiteral("hour53LineEdit"));

        gridLayout1->addWidget(hour53LineEdit, 9, 6, 1, 1);

        hour54TextLabel = new QLabel(HoursForm_template);
        hour54TextLabel->setObjectName(QStringLiteral("hour54TextLabel"));
        hour54TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour54TextLabel, 10, 6, 1, 1);

        hour54LineEdit = new QLineEdit(HoursForm_template);
        hour54LineEdit->setObjectName(QStringLiteral("hour54LineEdit"));

        gridLayout1->addWidget(hour54LineEdit, 11, 6, 1, 1);

        hour55LineEdit = new QLineEdit(HoursForm_template);
        hour55LineEdit->setObjectName(QStringLiteral("hour55LineEdit"));

        gridLayout1->addWidget(hour55LineEdit, 13, 6, 1, 1);

        hour55TextLabel = new QLabel(HoursForm_template);
        hour55TextLabel->setObjectName(QStringLiteral("hour55TextLabel"));
        hour55TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour55TextLabel, 12, 6, 1, 1);

        hour56TextLabel = new QLabel(HoursForm_template);
        hour56TextLabel->setObjectName(QStringLiteral("hour56TextLabel"));
        hour56TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour56TextLabel, 14, 6, 1, 1);

        hour56LineEdit = new QLineEdit(HoursForm_template);
        hour56LineEdit->setObjectName(QStringLiteral("hour56LineEdit"));

        gridLayout1->addWidget(hour56LineEdit, 15, 6, 1, 1);

        hour57TextLabel = new QLabel(HoursForm_template);
        hour57TextLabel->setObjectName(QStringLiteral("hour57TextLabel"));
        hour57TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour57TextLabel, 0, 7, 1, 1);

        hour57LineEdit = new QLineEdit(HoursForm_template);
        hour57LineEdit->setObjectName(QStringLiteral("hour57LineEdit"));

        gridLayout1->addWidget(hour57LineEdit, 1, 7, 1, 1);

        hour58LineEdit = new QLineEdit(HoursForm_template);
        hour58LineEdit->setObjectName(QStringLiteral("hour58LineEdit"));

        gridLayout1->addWidget(hour58LineEdit, 3, 7, 1, 1);

        hour58TextLabel = new QLabel(HoursForm_template);
        hour58TextLabel->setObjectName(QStringLiteral("hour58TextLabel"));
        hour58TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour58TextLabel, 2, 7, 1, 1);

        hour59LineEdit = new QLineEdit(HoursForm_template);
        hour59LineEdit->setObjectName(QStringLiteral("hour59LineEdit"));

        gridLayout1->addWidget(hour59LineEdit, 5, 7, 1, 1);

        hour59TextLabel = new QLabel(HoursForm_template);
        hour59TextLabel->setObjectName(QStringLiteral("hour59TextLabel"));
        hour59TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour59TextLabel, 4, 7, 1, 1);

        hour60LineEdit = new QLineEdit(HoursForm_template);
        hour60LineEdit->setObjectName(QStringLiteral("hour60LineEdit"));

        gridLayout1->addWidget(hour60LineEdit, 7, 7, 1, 1);

        hour60TextLabel = new QLabel(HoursForm_template);
        hour60TextLabel->setObjectName(QStringLiteral("hour60TextLabel"));
        hour60TextLabel->setWordWrap(false);

        gridLayout1->addWidget(hour60TextLabel, 6, 7, 1, 1);


        gridLayout->addLayout(gridLayout1, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(HoursForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(HoursForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 1);


        retranslateUi(HoursForm_template);

        QMetaObject::connectSlotsByName(HoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *HoursForm_template)
    {
        HoursForm_template->setWindowTitle(QApplication::translate("HoursForm_template", "The hours of the day", 0));
        hoursTextLabel->setText(QApplication::translate("HoursForm_template", "Number of periods (start hours) per day", 0));
        hour1TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 1", 0));
        hour2TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 2", 0));
        hour3TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 3", 0));
        hour4TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 4", 0));
        hour5TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 5", 0));
        hour6TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 6", 0));
        hour7TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 7", 0));
        hour8TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 8", 0));
        hour9TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 9", 0));
        hour10TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 10", 0));
        hour11TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 11", 0));
        hour12TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 12", 0));
        hour13TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 13", 0));
        hour14TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 14", 0));
        hour15TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 15", 0));
        hour16TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 16", 0));
        hour17TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 17", 0));
        hour18TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 18", 0));
        hour19TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 19", 0));
        hour20TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 20", 0));
        hour21TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 21", 0));
        hour22TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 22", 0));
        hour23TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 23", 0));
        hour24TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 24", 0));
        hour25TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 25", 0));
        hour26TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 26", 0));
        hour27TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 27", 0));
        hour28TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 28", 0));
        hour29TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 29", 0));
        hour30TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 30", 0));
        hour31TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 31", 0));
        hour32TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 32", 0));
        hour33TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 33", 0));
        hour34TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 34", 0));
        hour35TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 35", 0));
        hour36TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 36", 0));
        hour37TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 37", 0));
        hour38TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 38", 0));
        hour39TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 39", 0));
        hour40TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 40", 0));
        hour41TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 41", 0));
        hour42TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 42", 0));
        hour43TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 43", 0));
        hour44TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 44", 0));
        hour45TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 45", 0));
        hour46TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 46", 0));
        hour47TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 47", 0));
        hour48TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 48", 0));
        hour49TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 49", 0));
        hour50TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 50", 0));
        hour51TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 51", 0));
        hour52TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 52", 0));
        hour53TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 53", 0));
        hour54TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 54", 0));
        hour55TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 55", 0));
        hour56TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 56", 0));
        hour57TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 57", 0));
        hour58TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 58", 0));
        hour59TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 59", 0));
        hour60TextLabel->setText(QApplication::translate("HoursForm_template", "Hour 60", 0));
        okPushButton->setText(QApplication::translate("HoursForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("HoursForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class HoursForm_template: public Ui_HoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOURSFORM_TEMPLATE_H
