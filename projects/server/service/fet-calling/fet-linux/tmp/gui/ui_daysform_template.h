/********************************************************************************
** Form generated from reading UI file 'daysform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAYSFORM_TEMPLATE_H
#define UI_DAYSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DaysForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *numberGroupBox;
    QGridLayout *gridLayout;
    QSpinBox *daysSpinBox;
    QSpacerItem *spacer4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vboxLayout;
    QLabel *day1TextLabel;
    QLineEdit *day1LineEdit;
    QLabel *day2TextLabel;
    QLineEdit *day2LineEdit;
    QLabel *day3TextLabel;
    QLineEdit *day3LineEdit;
    QLabel *day4TextLabel;
    QLineEdit *day4LineEdit;
    QLabel *day5TextLabel;
    QLineEdit *day5LineEdit;
    QLabel *day6TextLabel;
    QLineEdit *day6LineEdit;
    QLabel *day7TextLabel;
    QLineEdit *day7LineEdit;
    QVBoxLayout *vboxLayout1;
    QLabel *day8TextLabel;
    QLineEdit *day8LineEdit;
    QLabel *day9TextLabel;
    QLineEdit *day9LineEdit;
    QLabel *day10TextLabel;
    QLineEdit *day10LineEdit;
    QLabel *day11TextLabel;
    QLineEdit *day11LineEdit;
    QLabel *day12TextLabel;
    QLineEdit *day12LineEdit;
    QLabel *day13TextLabel;
    QLineEdit *day13LineEdit;
    QLabel *day14TextLabel;
    QLineEdit *day14LineEdit;
    QVBoxLayout *vboxLayout2;
    QLabel *day15TextLabel;
    QLineEdit *day15LineEdit;
    QLabel *day16TextLabel;
    QLineEdit *day16LineEdit;
    QLabel *day17TextLabel;
    QLineEdit *day17LineEdit;
    QLabel *day18TextLabel;
    QLineEdit *day18LineEdit;
    QLabel *day19TextLabel;
    QLineEdit *day19LineEdit;
    QLabel *day20TextLabel;
    QLineEdit *day20LineEdit;
    QLabel *day21TextLabel;
    QLineEdit *day21LineEdit;
    QVBoxLayout *vboxLayout3;
    QLabel *day22TextLabel;
    QLineEdit *day22LineEdit;
    QLabel *day23TextLabel;
    QLineEdit *day23LineEdit;
    QLabel *day24TextLabel;
    QLineEdit *day24LineEdit;
    QLabel *day25TextLabel;
    QLineEdit *day25LineEdit;
    QLabel *day26TextLabel;
    QLineEdit *day26LineEdit;
    QLabel *day27TextLabel;
    QLineEdit *day27LineEdit;
    QLabel *day28TextLabel;
    QLineEdit *day28LineEdit;
    QVBoxLayout *_2;
    QLabel *day29TextLabel;
    QLineEdit *day29LineEdit;
    QLabel *day30TextLabel;
    QLineEdit *day30LineEdit;
    QLabel *day31TextLabel;
    QLineEdit *day31LineEdit;
    QLabel *day32TextLabel;
    QLineEdit *day32LineEdit;
    QLabel *day33TextLabel;
    QLineEdit *day33LineEdit;
    QLabel *day34TextLabel;
    QLineEdit *day34LineEdit;
    QLabel *day35TextLabel;
    QLineEdit *day35LineEdit;
    QSpacerItem *spacer5;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *DaysForm_template)
    {
        if (DaysForm_template->objectName().isEmpty())
            DaysForm_template->setObjectName(QStringLiteral("DaysForm_template"));
        DaysForm_template->resize(650, 572);
        gridLayout_2 = new QGridLayout(DaysForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        numberGroupBox = new QGroupBox(DaysForm_template);
        numberGroupBox->setObjectName(QStringLiteral("numberGroupBox"));
        gridLayout = new QGridLayout(numberGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        daysSpinBox = new QSpinBox(numberGroupBox);
        daysSpinBox->setObjectName(QStringLiteral("daysSpinBox"));
        daysSpinBox->setMinimum(1);
        daysSpinBox->setMaximum(100);

        gridLayout->addWidget(daysSpinBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(numberGroupBox, 0, 0, 1, 1);

        spacer4 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        day1TextLabel = new QLabel(DaysForm_template);
        day1TextLabel->setObjectName(QStringLiteral("day1TextLabel"));
        day1TextLabel->setWordWrap(false);

        vboxLayout->addWidget(day1TextLabel);

        day1LineEdit = new QLineEdit(DaysForm_template);
        day1LineEdit->setObjectName(QStringLiteral("day1LineEdit"));

        vboxLayout->addWidget(day1LineEdit);

        day2TextLabel = new QLabel(DaysForm_template);
        day2TextLabel->setObjectName(QStringLiteral("day2TextLabel"));
        day2TextLabel->setWordWrap(false);

        vboxLayout->addWidget(day2TextLabel);

        day2LineEdit = new QLineEdit(DaysForm_template);
        day2LineEdit->setObjectName(QStringLiteral("day2LineEdit"));

        vboxLayout->addWidget(day2LineEdit);

        day3TextLabel = new QLabel(DaysForm_template);
        day3TextLabel->setObjectName(QStringLiteral("day3TextLabel"));
        day3TextLabel->setWordWrap(false);

        vboxLayout->addWidget(day3TextLabel);

        day3LineEdit = new QLineEdit(DaysForm_template);
        day3LineEdit->setObjectName(QStringLiteral("day3LineEdit"));

        vboxLayout->addWidget(day3LineEdit);

        day4TextLabel = new QLabel(DaysForm_template);
        day4TextLabel->setObjectName(QStringLiteral("day4TextLabel"));
        day4TextLabel->setWordWrap(false);

        vboxLayout->addWidget(day4TextLabel);

        day4LineEdit = new QLineEdit(DaysForm_template);
        day4LineEdit->setObjectName(QStringLiteral("day4LineEdit"));

        vboxLayout->addWidget(day4LineEdit);

        day5TextLabel = new QLabel(DaysForm_template);
        day5TextLabel->setObjectName(QStringLiteral("day5TextLabel"));
        day5TextLabel->setWordWrap(false);

        vboxLayout->addWidget(day5TextLabel);

        day5LineEdit = new QLineEdit(DaysForm_template);
        day5LineEdit->setObjectName(QStringLiteral("day5LineEdit"));

        vboxLayout->addWidget(day5LineEdit);

        day6TextLabel = new QLabel(DaysForm_template);
        day6TextLabel->setObjectName(QStringLiteral("day6TextLabel"));
        day6TextLabel->setWordWrap(false);

        vboxLayout->addWidget(day6TextLabel);

        day6LineEdit = new QLineEdit(DaysForm_template);
        day6LineEdit->setObjectName(QStringLiteral("day6LineEdit"));

        vboxLayout->addWidget(day6LineEdit);

        day7TextLabel = new QLabel(DaysForm_template);
        day7TextLabel->setObjectName(QStringLiteral("day7TextLabel"));
        day7TextLabel->setWordWrap(false);

        vboxLayout->addWidget(day7TextLabel);

        day7LineEdit = new QLineEdit(DaysForm_template);
        day7LineEdit->setObjectName(QStringLiteral("day7LineEdit"));

        vboxLayout->addWidget(day7LineEdit);


        horizontalLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        day8TextLabel = new QLabel(DaysForm_template);
        day8TextLabel->setObjectName(QStringLiteral("day8TextLabel"));
        day8TextLabel->setWordWrap(false);

        vboxLayout1->addWidget(day8TextLabel);

        day8LineEdit = new QLineEdit(DaysForm_template);
        day8LineEdit->setObjectName(QStringLiteral("day8LineEdit"));

        vboxLayout1->addWidget(day8LineEdit);

        day9TextLabel = new QLabel(DaysForm_template);
        day9TextLabel->setObjectName(QStringLiteral("day9TextLabel"));
        day9TextLabel->setWordWrap(false);

        vboxLayout1->addWidget(day9TextLabel);

        day9LineEdit = new QLineEdit(DaysForm_template);
        day9LineEdit->setObjectName(QStringLiteral("day9LineEdit"));

        vboxLayout1->addWidget(day9LineEdit);

        day10TextLabel = new QLabel(DaysForm_template);
        day10TextLabel->setObjectName(QStringLiteral("day10TextLabel"));
        day10TextLabel->setWordWrap(false);

        vboxLayout1->addWidget(day10TextLabel);

        day10LineEdit = new QLineEdit(DaysForm_template);
        day10LineEdit->setObjectName(QStringLiteral("day10LineEdit"));

        vboxLayout1->addWidget(day10LineEdit);

        day11TextLabel = new QLabel(DaysForm_template);
        day11TextLabel->setObjectName(QStringLiteral("day11TextLabel"));
        day11TextLabel->setWordWrap(false);

        vboxLayout1->addWidget(day11TextLabel);

        day11LineEdit = new QLineEdit(DaysForm_template);
        day11LineEdit->setObjectName(QStringLiteral("day11LineEdit"));

        vboxLayout1->addWidget(day11LineEdit);

        day12TextLabel = new QLabel(DaysForm_template);
        day12TextLabel->setObjectName(QStringLiteral("day12TextLabel"));
        day12TextLabel->setWordWrap(false);

        vboxLayout1->addWidget(day12TextLabel);

        day12LineEdit = new QLineEdit(DaysForm_template);
        day12LineEdit->setObjectName(QStringLiteral("day12LineEdit"));

        vboxLayout1->addWidget(day12LineEdit);

        day13TextLabel = new QLabel(DaysForm_template);
        day13TextLabel->setObjectName(QStringLiteral("day13TextLabel"));
        day13TextLabel->setWordWrap(false);

        vboxLayout1->addWidget(day13TextLabel);

        day13LineEdit = new QLineEdit(DaysForm_template);
        day13LineEdit->setObjectName(QStringLiteral("day13LineEdit"));

        vboxLayout1->addWidget(day13LineEdit);

        day14TextLabel = new QLabel(DaysForm_template);
        day14TextLabel->setObjectName(QStringLiteral("day14TextLabel"));
        day14TextLabel->setWordWrap(false);

        vboxLayout1->addWidget(day14TextLabel);

        day14LineEdit = new QLineEdit(DaysForm_template);
        day14LineEdit->setObjectName(QStringLiteral("day14LineEdit"));

        vboxLayout1->addWidget(day14LineEdit);


        horizontalLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        day15TextLabel = new QLabel(DaysForm_template);
        day15TextLabel->setObjectName(QStringLiteral("day15TextLabel"));
        day15TextLabel->setWordWrap(false);

        vboxLayout2->addWidget(day15TextLabel);

        day15LineEdit = new QLineEdit(DaysForm_template);
        day15LineEdit->setObjectName(QStringLiteral("day15LineEdit"));

        vboxLayout2->addWidget(day15LineEdit);

        day16TextLabel = new QLabel(DaysForm_template);
        day16TextLabel->setObjectName(QStringLiteral("day16TextLabel"));
        day16TextLabel->setWordWrap(false);

        vboxLayout2->addWidget(day16TextLabel);

        day16LineEdit = new QLineEdit(DaysForm_template);
        day16LineEdit->setObjectName(QStringLiteral("day16LineEdit"));

        vboxLayout2->addWidget(day16LineEdit);

        day17TextLabel = new QLabel(DaysForm_template);
        day17TextLabel->setObjectName(QStringLiteral("day17TextLabel"));
        day17TextLabel->setWordWrap(false);

        vboxLayout2->addWidget(day17TextLabel);

        day17LineEdit = new QLineEdit(DaysForm_template);
        day17LineEdit->setObjectName(QStringLiteral("day17LineEdit"));

        vboxLayout2->addWidget(day17LineEdit);

        day18TextLabel = new QLabel(DaysForm_template);
        day18TextLabel->setObjectName(QStringLiteral("day18TextLabel"));
        day18TextLabel->setWordWrap(false);

        vboxLayout2->addWidget(day18TextLabel);

        day18LineEdit = new QLineEdit(DaysForm_template);
        day18LineEdit->setObjectName(QStringLiteral("day18LineEdit"));

        vboxLayout2->addWidget(day18LineEdit);

        day19TextLabel = new QLabel(DaysForm_template);
        day19TextLabel->setObjectName(QStringLiteral("day19TextLabel"));
        day19TextLabel->setWordWrap(false);

        vboxLayout2->addWidget(day19TextLabel);

        day19LineEdit = new QLineEdit(DaysForm_template);
        day19LineEdit->setObjectName(QStringLiteral("day19LineEdit"));

        vboxLayout2->addWidget(day19LineEdit);

        day20TextLabel = new QLabel(DaysForm_template);
        day20TextLabel->setObjectName(QStringLiteral("day20TextLabel"));
        day20TextLabel->setWordWrap(false);

        vboxLayout2->addWidget(day20TextLabel);

        day20LineEdit = new QLineEdit(DaysForm_template);
        day20LineEdit->setObjectName(QStringLiteral("day20LineEdit"));

        vboxLayout2->addWidget(day20LineEdit);

        day21TextLabel = new QLabel(DaysForm_template);
        day21TextLabel->setObjectName(QStringLiteral("day21TextLabel"));
        day21TextLabel->setWordWrap(false);

        vboxLayout2->addWidget(day21TextLabel);

        day21LineEdit = new QLineEdit(DaysForm_template);
        day21LineEdit->setObjectName(QStringLiteral("day21LineEdit"));

        vboxLayout2->addWidget(day21LineEdit);


        horizontalLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        day22TextLabel = new QLabel(DaysForm_template);
        day22TextLabel->setObjectName(QStringLiteral("day22TextLabel"));
        day22TextLabel->setWordWrap(false);

        vboxLayout3->addWidget(day22TextLabel);

        day22LineEdit = new QLineEdit(DaysForm_template);
        day22LineEdit->setObjectName(QStringLiteral("day22LineEdit"));

        vboxLayout3->addWidget(day22LineEdit);

        day23TextLabel = new QLabel(DaysForm_template);
        day23TextLabel->setObjectName(QStringLiteral("day23TextLabel"));
        day23TextLabel->setWordWrap(false);

        vboxLayout3->addWidget(day23TextLabel);

        day23LineEdit = new QLineEdit(DaysForm_template);
        day23LineEdit->setObjectName(QStringLiteral("day23LineEdit"));

        vboxLayout3->addWidget(day23LineEdit);

        day24TextLabel = new QLabel(DaysForm_template);
        day24TextLabel->setObjectName(QStringLiteral("day24TextLabel"));
        day24TextLabel->setWordWrap(false);

        vboxLayout3->addWidget(day24TextLabel);

        day24LineEdit = new QLineEdit(DaysForm_template);
        day24LineEdit->setObjectName(QStringLiteral("day24LineEdit"));

        vboxLayout3->addWidget(day24LineEdit);

        day25TextLabel = new QLabel(DaysForm_template);
        day25TextLabel->setObjectName(QStringLiteral("day25TextLabel"));
        day25TextLabel->setWordWrap(false);

        vboxLayout3->addWidget(day25TextLabel);

        day25LineEdit = new QLineEdit(DaysForm_template);
        day25LineEdit->setObjectName(QStringLiteral("day25LineEdit"));

        vboxLayout3->addWidget(day25LineEdit);

        day26TextLabel = new QLabel(DaysForm_template);
        day26TextLabel->setObjectName(QStringLiteral("day26TextLabel"));
        day26TextLabel->setWordWrap(false);

        vboxLayout3->addWidget(day26TextLabel);

        day26LineEdit = new QLineEdit(DaysForm_template);
        day26LineEdit->setObjectName(QStringLiteral("day26LineEdit"));

        vboxLayout3->addWidget(day26LineEdit);

        day27TextLabel = new QLabel(DaysForm_template);
        day27TextLabel->setObjectName(QStringLiteral("day27TextLabel"));
        day27TextLabel->setWordWrap(false);

        vboxLayout3->addWidget(day27TextLabel);

        day27LineEdit = new QLineEdit(DaysForm_template);
        day27LineEdit->setObjectName(QStringLiteral("day27LineEdit"));

        vboxLayout3->addWidget(day27LineEdit);

        day28TextLabel = new QLabel(DaysForm_template);
        day28TextLabel->setObjectName(QStringLiteral("day28TextLabel"));
        day28TextLabel->setWordWrap(false);

        vboxLayout3->addWidget(day28TextLabel);

        day28LineEdit = new QLineEdit(DaysForm_template);
        day28LineEdit->setObjectName(QStringLiteral("day28LineEdit"));

        vboxLayout3->addWidget(day28LineEdit);


        horizontalLayout->addLayout(vboxLayout3);

        _2 = new QVBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        day29TextLabel = new QLabel(DaysForm_template);
        day29TextLabel->setObjectName(QStringLiteral("day29TextLabel"));
        day29TextLabel->setWordWrap(false);

        _2->addWidget(day29TextLabel);

        day29LineEdit = new QLineEdit(DaysForm_template);
        day29LineEdit->setObjectName(QStringLiteral("day29LineEdit"));

        _2->addWidget(day29LineEdit);

        day30TextLabel = new QLabel(DaysForm_template);
        day30TextLabel->setObjectName(QStringLiteral("day30TextLabel"));
        day30TextLabel->setWordWrap(false);

        _2->addWidget(day30TextLabel);

        day30LineEdit = new QLineEdit(DaysForm_template);
        day30LineEdit->setObjectName(QStringLiteral("day30LineEdit"));

        _2->addWidget(day30LineEdit);

        day31TextLabel = new QLabel(DaysForm_template);
        day31TextLabel->setObjectName(QStringLiteral("day31TextLabel"));
        day31TextLabel->setWordWrap(false);

        _2->addWidget(day31TextLabel);

        day31LineEdit = new QLineEdit(DaysForm_template);
        day31LineEdit->setObjectName(QStringLiteral("day31LineEdit"));

        _2->addWidget(day31LineEdit);

        day32TextLabel = new QLabel(DaysForm_template);
        day32TextLabel->setObjectName(QStringLiteral("day32TextLabel"));
        day32TextLabel->setWordWrap(false);

        _2->addWidget(day32TextLabel);

        day32LineEdit = new QLineEdit(DaysForm_template);
        day32LineEdit->setObjectName(QStringLiteral("day32LineEdit"));

        _2->addWidget(day32LineEdit);

        day33TextLabel = new QLabel(DaysForm_template);
        day33TextLabel->setObjectName(QStringLiteral("day33TextLabel"));
        day33TextLabel->setWordWrap(false);

        _2->addWidget(day33TextLabel);

        day33LineEdit = new QLineEdit(DaysForm_template);
        day33LineEdit->setObjectName(QStringLiteral("day33LineEdit"));

        _2->addWidget(day33LineEdit);

        day34TextLabel = new QLabel(DaysForm_template);
        day34TextLabel->setObjectName(QStringLiteral("day34TextLabel"));
        day34TextLabel->setWordWrap(false);

        _2->addWidget(day34TextLabel);

        day34LineEdit = new QLineEdit(DaysForm_template);
        day34LineEdit->setObjectName(QStringLiteral("day34LineEdit"));

        _2->addWidget(day34LineEdit);

        day35TextLabel = new QLabel(DaysForm_template);
        day35TextLabel->setObjectName(QStringLiteral("day35TextLabel"));
        day35TextLabel->setWordWrap(false);

        _2->addWidget(day35TextLabel);

        day35LineEdit = new QLineEdit(DaysForm_template);
        day35LineEdit->setObjectName(QStringLiteral("day35LineEdit"));

        _2->addWidget(day35LineEdit);


        horizontalLayout->addLayout(_2);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        spacer5 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer5, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(DaysForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(DaysForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout_2->addLayout(hboxLayout, 4, 0, 1, 1);


        retranslateUi(DaysForm_template);

        QMetaObject::connectSlotsByName(DaysForm_template);
    } // setupUi

    void retranslateUi(QDialog *DaysForm_template)
    {
        DaysForm_template->setWindowTitle(QApplication::translate("DaysForm_template", "The days of the week", 0));
        numberGroupBox->setTitle(QApplication::translate("DaysForm_template", "Number of working days per week", 0));
        day1TextLabel->setText(QApplication::translate("DaysForm_template", "Day 1", 0));
        day2TextLabel->setText(QApplication::translate("DaysForm_template", "Day 2", 0));
        day3TextLabel->setText(QApplication::translate("DaysForm_template", "Day 3", 0));
        day4TextLabel->setText(QApplication::translate("DaysForm_template", "Day 4", 0));
        day5TextLabel->setText(QApplication::translate("DaysForm_template", "Day 5", 0));
        day6TextLabel->setText(QApplication::translate("DaysForm_template", "Day 6", 0));
        day7TextLabel->setText(QApplication::translate("DaysForm_template", "Day 7", 0));
        day8TextLabel->setText(QApplication::translate("DaysForm_template", "Day 8", 0));
        day9TextLabel->setText(QApplication::translate("DaysForm_template", "Day 9", 0));
        day10TextLabel->setText(QApplication::translate("DaysForm_template", "Day 10", 0));
        day11TextLabel->setText(QApplication::translate("DaysForm_template", "Day 11", 0));
        day12TextLabel->setText(QApplication::translate("DaysForm_template", "Day 12", 0));
        day13TextLabel->setText(QApplication::translate("DaysForm_template", "Day 13", 0));
        day14TextLabel->setText(QApplication::translate("DaysForm_template", "Day 14", 0));
        day15TextLabel->setText(QApplication::translate("DaysForm_template", "Day 15", 0));
        day16TextLabel->setText(QApplication::translate("DaysForm_template", "Day 16", 0));
        day17TextLabel->setText(QApplication::translate("DaysForm_template", "Day 17", 0));
        day18TextLabel->setText(QApplication::translate("DaysForm_template", "Day 18", 0));
        day19TextLabel->setText(QApplication::translate("DaysForm_template", "Day 19", 0));
        day20TextLabel->setText(QApplication::translate("DaysForm_template", "Day 20", 0));
        day21TextLabel->setText(QApplication::translate("DaysForm_template", "Day 21", 0));
        day22TextLabel->setText(QApplication::translate("DaysForm_template", "Day 22", 0));
        day23TextLabel->setText(QApplication::translate("DaysForm_template", "Day 23", 0));
        day24TextLabel->setText(QApplication::translate("DaysForm_template", "Day 24", 0));
        day25TextLabel->setText(QApplication::translate("DaysForm_template", "Day 25", 0));
        day26TextLabel->setText(QApplication::translate("DaysForm_template", "Day 26", 0));
        day27TextLabel->setText(QApplication::translate("DaysForm_template", "Day 27", 0));
        day28TextLabel->setText(QApplication::translate("DaysForm_template", "Day 28", 0));
        day29TextLabel->setText(QApplication::translate("DaysForm_template", "Day 29", 0));
        day30TextLabel->setText(QApplication::translate("DaysForm_template", "Day 30", 0));
        day31TextLabel->setText(QApplication::translate("DaysForm_template", "Day 31", 0));
        day32TextLabel->setText(QApplication::translate("DaysForm_template", "Day 32", 0));
        day33TextLabel->setText(QApplication::translate("DaysForm_template", "Day 33", 0));
        day34TextLabel->setText(QApplication::translate("DaysForm_template", "Day 34", 0));
        day35TextLabel->setText(QApplication::translate("DaysForm_template", "Day 35", 0));
        okPushButton->setText(QApplication::translate("DaysForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("DaysForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DaysForm_template: public Ui_DaysForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAYSFORM_TEMPLATE_H
