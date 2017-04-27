/********************************************************************************
** Form generated from reading UI file 'studentsstatisticsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSSTATISTICSFORM_TEMPLATE_H
#define UI_STUDENTSSTATISTICSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentsStatisticsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *showYearsCheckBox;
    QCheckBox *showGroupsCheckBox;
    QCheckBox *showSubgroupsCheckBox;
    QFrame *line;
    QCheckBox *showCompleteStructureCheckBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *helpPushButton;
    QPushButton *closeButton;

    void setupUi(QDialog *StudentsStatisticsForm_template)
    {
        if (StudentsStatisticsForm_template->objectName().isEmpty())
            StudentsStatisticsForm_template->setObjectName(QStringLiteral("StudentsStatisticsForm_template"));
        StudentsStatisticsForm_template->resize(754, 541);
        gridLayout_2 = new QGridLayout(StudentsStatisticsForm_template);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(StudentsStatisticsForm_template);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 2, 1);

        groupBox = new QGroupBox(StudentsStatisticsForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        showYearsCheckBox = new QCheckBox(groupBox);
        showYearsCheckBox->setObjectName(QStringLiteral("showYearsCheckBox"));
        showYearsCheckBox->setChecked(true);

        gridLayout->addWidget(showYearsCheckBox, 0, 0, 1, 1);

        showGroupsCheckBox = new QCheckBox(groupBox);
        showGroupsCheckBox->setObjectName(QStringLiteral("showGroupsCheckBox"));
        showGroupsCheckBox->setChecked(true);

        gridLayout->addWidget(showGroupsCheckBox, 1, 0, 1, 1);

        showSubgroupsCheckBox = new QCheckBox(groupBox);
        showSubgroupsCheckBox->setObjectName(QStringLiteral("showSubgroupsCheckBox"));
        showSubgroupsCheckBox->setChecked(true);

        gridLayout->addWidget(showSubgroupsCheckBox, 2, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        showCompleteStructureCheckBox = new QCheckBox(groupBox);
        showCompleteStructureCheckBox->setObjectName(QStringLiteral("showCompleteStructureCheckBox"));

        gridLayout->addWidget(showCompleteStructureCheckBox, 4, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(141, 339, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem, 1, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem1 = new QSpacerItem(604, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        helpPushButton = new QPushButton(StudentsStatisticsForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        hboxLayout->addWidget(helpPushButton);

        closeButton = new QPushButton(StudentsStatisticsForm_template);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        hboxLayout->addWidget(closeButton);


        gridLayout_2->addLayout(hboxLayout, 2, 0, 1, 2);


        retranslateUi(StudentsStatisticsForm_template);

        QMetaObject::connectSlotsByName(StudentsStatisticsForm_template);
    } // setupUi

    void retranslateUi(QDialog *StudentsStatisticsForm_template)
    {
        StudentsStatisticsForm_template->setWindowTitle(QApplication::translate("StudentsStatisticsForm_template", "Students statistics", 0));
        groupBox->setTitle(QApplication::translate("StudentsStatisticsForm_template", "Options", 0));
        showYearsCheckBox->setText(QApplication::translate("StudentsStatisticsForm_template", "Show years", 0));
        showGroupsCheckBox->setText(QApplication::translate("StudentsStatisticsForm_template", "Show groups", 0));
        showSubgroupsCheckBox->setText(QApplication::translate("StudentsStatisticsForm_template", "Show subgroups", 0));
        showCompleteStructureCheckBox->setText(QApplication::translate("StudentsStatisticsForm_template", "Show duplicates", 0));
        helpPushButton->setText(QApplication::translate("StudentsStatisticsForm_template", "Help", 0));
        closeButton->setText(QApplication::translate("StudentsStatisticsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentsStatisticsForm_template: public Ui_StudentsStatisticsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSSTATISTICSFORM_TEMPLATE_H
