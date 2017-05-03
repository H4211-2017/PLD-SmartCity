/********************************************************************************
** Form generated from reading UI file 'activitiesroomsstatisticsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITIESROOMSSTATISTICSFORM_TEMPLATE_H
#define UI_ACTIVITIESROOMSSTATISTICSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ActivitiesRoomsStatisticsForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *certainlyPlainTextEdit;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *closeButton;
    QPlainTextEdit *possiblyPlainTextEdit;

    void setupUi(QDialog *ActivitiesRoomsStatisticsForm_template)
    {
        if (ActivitiesRoomsStatisticsForm_template->objectName().isEmpty())
            ActivitiesRoomsStatisticsForm_template->setObjectName(QStringLiteral("ActivitiesRoomsStatisticsForm_template"));
        ActivitiesRoomsStatisticsForm_template->resize(628, 530);
        gridLayout = new QGridLayout(ActivitiesRoomsStatisticsForm_template);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        certainlyPlainTextEdit = new QPlainTextEdit(ActivitiesRoomsStatisticsForm_template);
        certainlyPlainTextEdit->setObjectName(QStringLiteral("certainlyPlainTextEdit"));

        gridLayout->addWidget(certainlyPlainTextEdit, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        closeButton = new QPushButton(ActivitiesRoomsStatisticsForm_template);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 1);

        possiblyPlainTextEdit = new QPlainTextEdit(ActivitiesRoomsStatisticsForm_template);
        possiblyPlainTextEdit->setObjectName(QStringLiteral("possiblyPlainTextEdit"));

        gridLayout->addWidget(possiblyPlainTextEdit, 2, 0, 1, 1);


        retranslateUi(ActivitiesRoomsStatisticsForm_template);

        QMetaObject::connectSlotsByName(ActivitiesRoomsStatisticsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ActivitiesRoomsStatisticsForm_template)
    {
        ActivitiesRoomsStatisticsForm_template->setWindowTitle(QApplication::translate("ActivitiesRoomsStatisticsForm_template", "Activities rooms statistics", 0));
        closeButton->setText(QApplication::translate("ActivitiesRoomsStatisticsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ActivitiesRoomsStatisticsForm_template: public Ui_ActivitiesRoomsStatisticsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITIESROOMSSTATISTICSFORM_TEMPLATE_H
