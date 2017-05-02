/********************************************************************************
** Form generated from reading UI file 'subactivitiesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBACTIVITIESFORM_TEMPLATE_H
#define UI_SUBACTIVITIESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubactivitiesForm_template
{
public:
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *activeTextLabel;
    QLabel *totalTextLabel;
    QListWidget *subactivitiesListWidget;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *activityDescriptionTextLabel;
    QPlainTextEdit *subactivityTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *studentsTextLabel;
    QCheckBox *recursiveCheckBox;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifySubactivityPushButton;
    QPushButton *commentsPushButton;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *SubactivitiesForm_template)
    {
        if (SubactivitiesForm_template->objectName().isEmpty())
            SubactivitiesForm_template->setObjectName(QStringLiteral("SubactivitiesForm_template"));
        SubactivitiesForm_template->resize(790, 540);
        gridLayout_3 = new QGridLayout(SubactivitiesForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        splitter = new QSplitter(SubactivitiesForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        activeTextLabel = new QLabel(layoutWidget);
        activeTextLabel->setObjectName(QStringLiteral("activeTextLabel"));
        activeTextLabel->setText(QStringLiteral("No: 1000 / 1000"));
        activeTextLabel->setAlignment(Qt::AlignCenter);
        activeTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(activeTextLabel, 0, 0, 1, 1);

        totalTextLabel = new QLabel(layoutWidget);
        totalTextLabel->setObjectName(QStringLiteral("totalTextLabel"));
        totalTextLabel->setText(QStringLiteral("Dur: 1000 / 1000"));
        totalTextLabel->setAlignment(Qt::AlignCenter);
        totalTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(totalTextLabel, 0, 1, 1, 1);

        subactivitiesListWidget = new QListWidget(layoutWidget);
        subactivitiesListWidget->setObjectName(QStringLiteral("subactivitiesListWidget"));

        gridLayout_2->addWidget(subactivitiesListWidget, 1, 0, 1, 2);

        splitter->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        activityDescriptionTextLabel = new QLabel(layoutWidget2);
        activityDescriptionTextLabel->setObjectName(QStringLiteral("activityDescriptionTextLabel"));
        activityDescriptionTextLabel->setWordWrap(false);

        verticalLayout->addWidget(activityDescriptionTextLabel);

        subactivityTextEdit = new QPlainTextEdit(layoutWidget2);
        subactivityTextEdit->setObjectName(QStringLiteral("subactivityTextEdit"));

        verticalLayout->addWidget(subactivityTextEdit);

        filterGroupBox = new QGroupBox(layoutWidget2);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));

        horizontalLayout_2->addWidget(studentsTextLabel);

        recursiveCheckBox = new QCheckBox(filterGroupBox);
        recursiveCheckBox->setObjectName(QStringLiteral("recursiveCheckBox"));

        horizontalLayout_2->addWidget(recursiveCheckBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));

        gridLayout->addWidget(subjectsTextLabel, 4, 0, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 5, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));

        gridLayout->addWidget(activityTagsTextLabel, 6, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 7, 0, 1, 1);


        verticalLayout->addWidget(filterGroupBox);

        splitter->addWidget(layoutWidget2);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        modifySubactivityPushButton = new QPushButton(SubactivitiesForm_template);
        modifySubactivityPushButton->setObjectName(QStringLiteral("modifySubactivityPushButton"));

        horizontalLayout->addWidget(modifySubactivityPushButton);

        commentsPushButton = new QPushButton(SubactivitiesForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout->addWidget(commentsPushButton);

        helpPushButton = new QPushButton(SubactivitiesForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(SubactivitiesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(SubactivitiesForm_template);

        QMetaObject::connectSlotsByName(SubactivitiesForm_template);
    } // setupUi

    void retranslateUi(QDialog *SubactivitiesForm_template)
    {
        SubactivitiesForm_template->setWindowTitle(QApplication::translate("SubactivitiesForm_template", "The individual subactivities", 0));
        activityDescriptionTextLabel->setText(QApplication::translate("SubactivitiesForm_template", "Current subactivity", 0));
        filterGroupBox->setTitle(QApplication::translate("SubactivitiesForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("SubactivitiesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("SubactivitiesForm_template", "Students", "It refers to students sets, but I want to keep the string short"));
        recursiveCheckBox->setText(QApplication::translate("SubactivitiesForm_template", "Show related", 0));
        subjectsTextLabel->setText(QApplication::translate("SubactivitiesForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("SubactivitiesForm_template", "Activity tag", 0));
        modifySubactivityPushButton->setText(QApplication::translate("SubactivitiesForm_template", "Modify", 0));
        commentsPushButton->setText(QApplication::translate("SubactivitiesForm_template", "Comments", 0));
        helpPushButton->setText(QApplication::translate("SubactivitiesForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("SubactivitiesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class SubactivitiesForm_template: public Ui_SubactivitiesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBACTIVITIESFORM_TEMPLATE_H
