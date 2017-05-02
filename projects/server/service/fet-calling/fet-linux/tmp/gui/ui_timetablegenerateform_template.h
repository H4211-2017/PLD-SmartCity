/********************************************************************************
** Form generated from reading UI file 'timetablegenerateform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLEGENERATEFORM_TEMPLATE_H
#define UI_TIMETABLEGENERATEFORM_TEMPLATE_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TimetableGenerateForm_template
{
public:
    QGridLayout *gridLayout_3;
    QLabel *textLabel1;
    QPlainTextEdit *currentResultsTextEdit;
    QGroupBox *stopSimulationAndGroupBox;
    QGridLayout *gridLayout_2;
    QPushButton *stopPushButton;
    QPushButton *stopHighestPushButton;
    QGroupBox *withoutStoppingTheSimulationGroupBox;
    QGridLayout *gridLayout;
    QPushButton *seeInitialOrderPushButton;
    QPushButton *seeImpossiblePushButton;
    QPushButton *writeResultsPushButton;
    QPushButton *writeHighestStagePushButton;
    QPushButton *startPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *TimetableGenerateForm_template)
    {
        if (TimetableGenerateForm_template->objectName().isEmpty())
            TimetableGenerateForm_template->setObjectName(QStringLiteral("TimetableGenerateForm_template"));
        TimetableGenerateForm_template->setEnabled(true);
        TimetableGenerateForm_template->resize(545, 520);
        gridLayout_3 = new QGridLayout(TimetableGenerateForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textLabel1 = new QLabel(TimetableGenerateForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout_3->addWidget(textLabel1, 0, 0, 1, 1);

        currentResultsTextEdit = new QPlainTextEdit(TimetableGenerateForm_template);
        currentResultsTextEdit->setObjectName(QStringLiteral("currentResultsTextEdit"));
        currentResultsTextEdit->setReadOnly(true);

        gridLayout_3->addWidget(currentResultsTextEdit, 1, 0, 1, 2);

        stopSimulationAndGroupBox = new QGroupBox(TimetableGenerateForm_template);
        stopSimulationAndGroupBox->setObjectName(QStringLiteral("stopSimulationAndGroupBox"));
        gridLayout_2 = new QGridLayout(stopSimulationAndGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stopPushButton = new QPushButton(stopSimulationAndGroupBox);
        stopPushButton->setObjectName(QStringLiteral("stopPushButton"));
        stopPushButton->setEnabled(false);

        gridLayout_2->addWidget(stopPushButton, 0, 0, 1, 1);

        stopHighestPushButton = new QPushButton(stopSimulationAndGroupBox);
        stopHighestPushButton->setObjectName(QStringLiteral("stopHighestPushButton"));
        stopHighestPushButton->setEnabled(false);

        gridLayout_2->addWidget(stopHighestPushButton, 1, 0, 1, 1);


        gridLayout_3->addWidget(stopSimulationAndGroupBox, 2, 0, 1, 2);

        withoutStoppingTheSimulationGroupBox = new QGroupBox(TimetableGenerateForm_template);
        withoutStoppingTheSimulationGroupBox->setObjectName(QStringLiteral("withoutStoppingTheSimulationGroupBox"));
        gridLayout = new QGridLayout(withoutStoppingTheSimulationGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        seeInitialOrderPushButton = new QPushButton(withoutStoppingTheSimulationGroupBox);
        seeInitialOrderPushButton->setObjectName(QStringLiteral("seeInitialOrderPushButton"));
        seeInitialOrderPushButton->setEnabled(false);

        gridLayout->addWidget(seeInitialOrderPushButton, 0, 0, 1, 1);

        seeImpossiblePushButton = new QPushButton(withoutStoppingTheSimulationGroupBox);
        seeImpossiblePushButton->setObjectName(QStringLiteral("seeImpossiblePushButton"));
        seeImpossiblePushButton->setEnabled(false);

        gridLayout->addWidget(seeImpossiblePushButton, 1, 0, 1, 1);

        writeResultsPushButton = new QPushButton(withoutStoppingTheSimulationGroupBox);
        writeResultsPushButton->setObjectName(QStringLiteral("writeResultsPushButton"));
        writeResultsPushButton->setEnabled(false);

        gridLayout->addWidget(writeResultsPushButton, 2, 0, 1, 1);

        writeHighestStagePushButton = new QPushButton(withoutStoppingTheSimulationGroupBox);
        writeHighestStagePushButton->setObjectName(QStringLiteral("writeHighestStagePushButton"));
        writeHighestStagePushButton->setEnabled(false);

        gridLayout->addWidget(writeHighestStagePushButton, 3, 0, 1, 1);


        gridLayout_3->addWidget(withoutStoppingTheSimulationGroupBox, 3, 0, 1, 2);

        startPushButton = new QPushButton(TimetableGenerateForm_template);
        startPushButton->setObjectName(QStringLiteral("startPushButton"));

        gridLayout_3->addWidget(startPushButton, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        helpPushButton = new QPushButton(TimetableGenerateForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(TimetableGenerateForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_3->addLayout(horizontalLayout, 4, 1, 1, 1);


        retranslateUi(TimetableGenerateForm_template);

        QMetaObject::connectSlotsByName(TimetableGenerateForm_template);
    } // setupUi

    void retranslateUi(QDialog *TimetableGenerateForm_template)
    {
        TimetableGenerateForm_template->setWindowTitle(QApplication::translate("TimetableGenerateForm_template", "Generate new timetable", 0));
        textLabel1->setText(QApplication::translate("TimetableGenerateForm_template", "Current stage:", 0));
        stopSimulationAndGroupBox->setTitle(QApplication::translate("TimetableGenerateForm_template", "Stop simulation and...", 0));
        stopPushButton->setText(QApplication::translate("TimetableGenerateForm_template", "View current timetable and impossible activities", 0));
        stopHighestPushButton->setText(QApplication::translate("TimetableGenerateForm_template", "View highest stage timetable", 0));
        withoutStoppingTheSimulationGroupBox->setTitle(QApplication::translate("TimetableGenerateForm_template", "Without stopping the simulation", 0));
        seeInitialOrderPushButton->setText(QApplication::translate("TimetableGenerateForm_template", "View initial order of placing the activities", 0));
        seeImpossiblePushButton->setText(QApplication::translate("TimetableGenerateForm_template", "View difficult activities", 0));
        writeResultsPushButton->setText(QApplication::translate("TimetableGenerateForm_template", "Write current timetable", 0));
        writeHighestStagePushButton->setText(QApplication::translate("TimetableGenerateForm_template", "Write highest stage timetable", 0));
        startPushButton->setText(QApplication::translate("TimetableGenerateForm_template", "Start", 0));
        helpPushButton->setText(QApplication::translate("TimetableGenerateForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("TimetableGenerateForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class TimetableGenerateForm_template: public Ui_TimetableGenerateForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLEGENERATEFORM_TEMPLATE_H
