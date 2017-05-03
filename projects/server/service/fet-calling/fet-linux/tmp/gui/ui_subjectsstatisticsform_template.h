/********************************************************************************
** Form generated from reading UI file 'subjectsstatisticsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTSSTATISTICSFORM_TEMPLATE_H
#define UI_SUBJECTSSTATISTICSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectsStatisticsForm_template
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *closeButton;

    void setupUi(QDialog *SubjectsStatisticsForm_template)
    {
        if (SubjectsStatisticsForm_template->objectName().isEmpty())
            SubjectsStatisticsForm_template->setObjectName(QStringLiteral("SubjectsStatisticsForm_template"));
        SubjectsStatisticsForm_template->resize(687, 504);
        gridLayout = new QGridLayout(SubjectsStatisticsForm_template);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(SubjectsStatisticsForm_template);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        closeButton = new QPushButton(SubjectsStatisticsForm_template);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(SubjectsStatisticsForm_template);

        QMetaObject::connectSlotsByName(SubjectsStatisticsForm_template);
    } // setupUi

    void retranslateUi(QDialog *SubjectsStatisticsForm_template)
    {
        SubjectsStatisticsForm_template->setWindowTitle(QApplication::translate("SubjectsStatisticsForm_template", "Subjects statistics", 0));
        closeButton->setText(QApplication::translate("SubjectsStatisticsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class SubjectsStatisticsForm_template: public Ui_SubjectsStatisticsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTSSTATISTICSFORM_TEMPLATE_H
