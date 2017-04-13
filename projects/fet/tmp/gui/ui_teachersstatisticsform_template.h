/********************************************************************************
** Form generated from reading UI file 'teachersstatisticsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSSTATISTICSFORM_TEMPLATE_H
#define UI_TEACHERSSTATISTICSFORM_TEMPLATE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TeachersStatisticsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QGroupBox *optionsGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *hideFullTeachersCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *closeButton;

    void setupUi(QDialog *TeachersStatisticsForm_template)
    {
        if (TeachersStatisticsForm_template->objectName().isEmpty())
            TeachersStatisticsForm_template->setObjectName(QStringLiteral("TeachersStatisticsForm_template"));
        TeachersStatisticsForm_template->resize(687, 504);
        gridLayout_2 = new QGridLayout(TeachersStatisticsForm_template);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(TeachersStatisticsForm_template);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 2, 1);

        optionsGroupBox = new QGroupBox(TeachersStatisticsForm_template);
        optionsGroupBox->setObjectName(QStringLiteral("optionsGroupBox"));
        gridLayout = new QGridLayout(optionsGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hideFullTeachersCheckBox = new QCheckBox(optionsGroupBox);
        hideFullTeachersCheckBox->setObjectName(QStringLiteral("hideFullTeachersCheckBox"));

        gridLayout->addWidget(hideFullTeachersCheckBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(optionsGroupBox, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 357, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        closeButton = new QPushButton(TeachersStatisticsForm_template);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        hboxLayout->addWidget(closeButton);


        gridLayout_2->addLayout(hboxLayout, 2, 0, 1, 2);


        retranslateUi(TeachersStatisticsForm_template);

        QMetaObject::connectSlotsByName(TeachersStatisticsForm_template);
    } // setupUi

    void retranslateUi(QDialog *TeachersStatisticsForm_template)
    {
        TeachersStatisticsForm_template->setWindowTitle(QApplication::translate("TeachersStatisticsForm_template", "Teachers statistics", 0));
        optionsGroupBox->setTitle(QApplication::translate("TeachersStatisticsForm_template", "Options", 0));
        hideFullTeachersCheckBox->setText(QApplication::translate("TeachersStatisticsForm_template", "Hide full teachers", "It refers to teachers who have their number of hours fulfilled. Please keep translation short"));
        closeButton->setText(QApplication::translate("TeachersStatisticsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class TeachersStatisticsForm_template: public Ui_TeachersStatisticsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSSTATISTICSFORM_TEMPLATE_H
