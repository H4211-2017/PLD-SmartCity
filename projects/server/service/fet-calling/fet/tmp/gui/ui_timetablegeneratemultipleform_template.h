/********************************************************************************
** Form generated from reading UI file 'timetablegeneratemultipleform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLEGENERATEMULTIPLEFORM_TEMPLATE_H
#define UI_TIMETABLEGENERATEMULTIPLEFORM_TEMPLATE_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TimetableGenerateMultipleForm_template
{
public:
    QGridLayout *gridLayout_3;
    QLabel *textLabel;
    QPlainTextEdit *currentResultsTextEdit;
    QHBoxLayout *horizontalLayout;
    QGroupBox *minutesGroupBox;
    QGridLayout *gridLayout;
    QSpinBox *minutesSpinBox;
    QLabel *minutesLabel;
    QGroupBox *timetablesGroupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *timetablesSpinBox;
    QPushButton *startPushButton;
    QPushButton *stopPushButton;
    QPushButton *pushButton4;
    QPushButton *closePushButton;

    void setupUi(QDialog *TimetableGenerateMultipleForm_template)
    {
        if (TimetableGenerateMultipleForm_template->objectName().isEmpty())
            TimetableGenerateMultipleForm_template->setObjectName(QStringLiteral("TimetableGenerateMultipleForm_template"));
        TimetableGenerateMultipleForm_template->resize(570, 530);
        gridLayout_3 = new QGridLayout(TimetableGenerateMultipleForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textLabel = new QLabel(TimetableGenerateMultipleForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        gridLayout_3->addWidget(textLabel, 0, 0, 1, 2);

        currentResultsTextEdit = new QPlainTextEdit(TimetableGenerateMultipleForm_template);
        currentResultsTextEdit->setObjectName(QStringLiteral("currentResultsTextEdit"));
        currentResultsTextEdit->setReadOnly(true);

        gridLayout_3->addWidget(currentResultsTextEdit, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minutesGroupBox = new QGroupBox(TimetableGenerateMultipleForm_template);
        minutesGroupBox->setObjectName(QStringLiteral("minutesGroupBox"));
        gridLayout = new QGridLayout(minutesGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        minutesSpinBox = new QSpinBox(minutesGroupBox);
        minutesSpinBox->setObjectName(QStringLiteral("minutesSpinBox"));
        minutesSpinBox->setMinimum(1);
        minutesSpinBox->setMaximum(60000);
        minutesSpinBox->setValue(60000);

        gridLayout->addWidget(minutesSpinBox, 0, 0, 1, 1);

        minutesLabel = new QLabel(minutesGroupBox);
        minutesLabel->setObjectName(QStringLiteral("minutesLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minutesLabel->sizePolicy().hasHeightForWidth());
        minutesLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(minutesLabel, 0, 1, 1, 1);


        horizontalLayout->addWidget(minutesGroupBox);

        timetablesGroupBox = new QGroupBox(TimetableGenerateMultipleForm_template);
        timetablesGroupBox->setObjectName(QStringLiteral("timetablesGroupBox"));
        gridLayout_2 = new QGridLayout(timetablesGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        timetablesSpinBox = new QSpinBox(timetablesGroupBox);
        timetablesSpinBox->setObjectName(QStringLiteral("timetablesSpinBox"));
        timetablesSpinBox->setMinimum(1);
        timetablesSpinBox->setMaximum(100);
        timetablesSpinBox->setValue(10);

        gridLayout_2->addWidget(timetablesSpinBox, 0, 0, 1, 1);


        horizontalLayout->addWidget(timetablesGroupBox);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 2);

        startPushButton = new QPushButton(TimetableGenerateMultipleForm_template);
        startPushButton->setObjectName(QStringLiteral("startPushButton"));

        gridLayout_3->addWidget(startPushButton, 3, 0, 1, 1);

        stopPushButton = new QPushButton(TimetableGenerateMultipleForm_template);
        stopPushButton->setObjectName(QStringLiteral("stopPushButton"));
        stopPushButton->setEnabled(false);

        gridLayout_3->addWidget(stopPushButton, 3, 1, 1, 1);

        pushButton4 = new QPushButton(TimetableGenerateMultipleForm_template);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));

        gridLayout_3->addWidget(pushButton4, 4, 0, 1, 1);

        closePushButton = new QPushButton(TimetableGenerateMultipleForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout_3->addWidget(closePushButton, 4, 1, 1, 1);


        retranslateUi(TimetableGenerateMultipleForm_template);

        QMetaObject::connectSlotsByName(TimetableGenerateMultipleForm_template);
    } // setupUi

    void retranslateUi(QDialog *TimetableGenerateMultipleForm_template)
    {
        TimetableGenerateMultipleForm_template->setWindowTitle(QApplication::translate("TimetableGenerateMultipleForm_template", "Generate multiple timetables", 0));
        textLabel->setText(QApplication::translate("TimetableGenerateMultipleForm_template", "Current timetable: 0 out of 0 activities placed", 0));
        minutesGroupBox->setTitle(QApplication::translate("TimetableGenerateMultipleForm_template", "Limit for each timetable", 0));
        minutesLabel->setText(QApplication::translate("TimetableGenerateMultipleForm_template", "minutes", 0));
        timetablesGroupBox->setTitle(QApplication::translate("TimetableGenerateMultipleForm_template", "Number of timetables", 0));
        startPushButton->setText(QApplication::translate("TimetableGenerateMultipleForm_template", "Start", 0));
        stopPushButton->setText(QApplication::translate("TimetableGenerateMultipleForm_template", "Stop", 0));
        pushButton4->setText(QApplication::translate("TimetableGenerateMultipleForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("TimetableGenerateMultipleForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class TimetableGenerateMultipleForm_template: public Ui_TimetableGenerateMultipleForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLEGENERATEMULTIPLEFORM_TEMPLATE_H
