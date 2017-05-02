/********************************************************************************
** Form generated from reading UI file 'timetableshowconflictsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLESHOWCONFLICTSFORM_TEMPLATE_H
#define UI_TIMETABLESHOWCONFLICTSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TimetableShowConflictsForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *conflictsTextEdit;
    QPushButton *closePushButton;

    void setupUi(QDialog *TimetableShowConflictsForm_template)
    {
        if (TimetableShowConflictsForm_template->objectName().isEmpty())
            TimetableShowConflictsForm_template->setObjectName(QStringLiteral("TimetableShowConflictsForm_template"));
        TimetableShowConflictsForm_template->resize(511, 480);
        gridLayout = new QGridLayout(TimetableShowConflictsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        conflictsTextEdit = new QPlainTextEdit(TimetableShowConflictsForm_template);
        conflictsTextEdit->setObjectName(QStringLiteral("conflictsTextEdit"));

        gridLayout->addWidget(conflictsTextEdit, 0, 0, 1, 1);

        closePushButton = new QPushButton(TimetableShowConflictsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 1, 0, 1, 1);


        retranslateUi(TimetableShowConflictsForm_template);

        QMetaObject::connectSlotsByName(TimetableShowConflictsForm_template);
    } // setupUi

    void retranslateUi(QDialog *TimetableShowConflictsForm_template)
    {
        closePushButton->setText(QApplication::translate("TimetableShowConflictsForm_template", "Close", 0));
        Q_UNUSED(TimetableShowConflictsForm_template);
    } // retranslateUi

};

namespace Ui {
    class TimetableShowConflictsForm_template: public Ui_TimetableShowConflictsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLESHOWCONFLICTSFORM_TEMPLATE_H
