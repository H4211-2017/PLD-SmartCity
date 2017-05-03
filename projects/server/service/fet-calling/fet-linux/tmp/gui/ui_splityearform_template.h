/********************************************************************************
** Form generated from reading UI file 'splityearform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITYEARFORM_TEMPLATE_H
#define UI_SPLITYEARFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplitYearForm_template
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *category1;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget1;
    QWidget *category2;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget2;
    QWidget *category3;
    QGridLayout *gridLayout_4;
    QListWidget *listWidget3;
    QWidget *category4;
    QGridLayout *gridLayout_6;
    QListWidget *listWidget4;
    QWidget *category5;
    QGridLayout *gridLayout_7;
    QListWidget *listWidget5;
    QWidget *category6;
    QGridLayout *gridLayout_8;
    QListWidget *listWidget6;
    QWidget *category7;
    QGridLayout *gridLayout_9;
    QListWidget *listWidget7;
    QWidget *category8;
    QGridLayout *gridLayout_10;
    QListWidget *listWidget8;
    QWidget *category9;
    QGridLayout *gridLayout_11;
    QListWidget *listWidget9;
    QWidget *category10;
    QGridLayout *gridLayout_12;
    QListWidget *listWidget10;
    QWidget *category11;
    QGridLayout *gridLayout_13;
    QListWidget *listWidget11;
    QWidget *category12;
    QGridLayout *gridLayout_14;
    QListWidget *listWidget12;
    QWidget *category13;
    QGridLayout *gridLayout_15;
    QListWidget *listWidget13;
    QWidget *category14;
    QGridLayout *gridLayout_16;
    QListWidget *listWidget14;
    QGridLayout *gridLayout_17;
    QPushButton *addPushButton;
    QPushButton *removePushButton;
    QFrame *line;
    QPushButton *modifyPushButton;
    QPushButton *removeAllPushButton;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_6;
    QLabel *splitYearTextLabel;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *categoriesGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *divisionsLabel;
    QSpinBox *categoriesSpinBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *currentSubgroupsLabel;
    QSpacerItem *verticalSpacer;
    QGroupBox *limitsGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *maxSubgroupsPerYearLabel;
    QLabel *maxTotalSubgroupsLabel;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *separatorGroupBox;
    QGridLayout *gridLayout_5;
    QLineEdit *separatorLineEdit;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *hboxLayout;
    QPushButton *resetPushButton;
    QPushButton *helpPushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *SplitYearForm_template)
    {
        if (SplitYearForm_template->objectName().isEmpty())
            SplitYearForm_template->setObjectName(QStringLiteral("SplitYearForm_template"));
        SplitYearForm_template->resize(810, 616);
        verticalLayout_4 = new QVBoxLayout(SplitYearForm_template);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(SplitYearForm_template);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(SplitYearForm_template);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setWordWrap(true);

        verticalLayout_4->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(SplitYearForm_template);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setUsesScrollButtons(true);
        category1 = new QWidget();
        category1->setObjectName(QStringLiteral("category1"));
        gridLayout_2 = new QGridLayout(category1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget1 = new QListWidget(category1);
        listWidget1->setObjectName(QStringLiteral("listWidget1"));

        gridLayout_2->addWidget(listWidget1, 0, 0, 1, 2);

        tabWidget->addTab(category1, QString());
        category2 = new QWidget();
        category2->setObjectName(QStringLiteral("category2"));
        gridLayout_3 = new QGridLayout(category2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        listWidget2 = new QListWidget(category2);
        listWidget2->setObjectName(QStringLiteral("listWidget2"));

        gridLayout_3->addWidget(listWidget2, 0, 0, 1, 2);

        tabWidget->addTab(category2, QString());
        category3 = new QWidget();
        category3->setObjectName(QStringLiteral("category3"));
        gridLayout_4 = new QGridLayout(category3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        listWidget3 = new QListWidget(category3);
        listWidget3->setObjectName(QStringLiteral("listWidget3"));

        gridLayout_4->addWidget(listWidget3, 0, 0, 1, 2);

        tabWidget->addTab(category3, QString());
        category4 = new QWidget();
        category4->setObjectName(QStringLiteral("category4"));
        gridLayout_6 = new QGridLayout(category4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        listWidget4 = new QListWidget(category4);
        listWidget4->setObjectName(QStringLiteral("listWidget4"));

        gridLayout_6->addWidget(listWidget4, 0, 0, 1, 2);

        tabWidget->addTab(category4, QString());
        category5 = new QWidget();
        category5->setObjectName(QStringLiteral("category5"));
        gridLayout_7 = new QGridLayout(category5);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        listWidget5 = new QListWidget(category5);
        listWidget5->setObjectName(QStringLiteral("listWidget5"));

        gridLayout_7->addWidget(listWidget5, 0, 0, 1, 2);

        tabWidget->addTab(category5, QString());
        category6 = new QWidget();
        category6->setObjectName(QStringLiteral("category6"));
        gridLayout_8 = new QGridLayout(category6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        listWidget6 = new QListWidget(category6);
        listWidget6->setObjectName(QStringLiteral("listWidget6"));

        gridLayout_8->addWidget(listWidget6, 0, 0, 1, 2);

        tabWidget->addTab(category6, QString());
        category7 = new QWidget();
        category7->setObjectName(QStringLiteral("category7"));
        gridLayout_9 = new QGridLayout(category7);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        listWidget7 = new QListWidget(category7);
        listWidget7->setObjectName(QStringLiteral("listWidget7"));

        gridLayout_9->addWidget(listWidget7, 0, 0, 1, 2);

        tabWidget->addTab(category7, QString());
        category8 = new QWidget();
        category8->setObjectName(QStringLiteral("category8"));
        gridLayout_10 = new QGridLayout(category8);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        listWidget8 = new QListWidget(category8);
        listWidget8->setObjectName(QStringLiteral("listWidget8"));

        gridLayout_10->addWidget(listWidget8, 0, 0, 1, 2);

        tabWidget->addTab(category8, QString());
        category9 = new QWidget();
        category9->setObjectName(QStringLiteral("category9"));
        gridLayout_11 = new QGridLayout(category9);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        listWidget9 = new QListWidget(category9);
        listWidget9->setObjectName(QStringLiteral("listWidget9"));

        gridLayout_11->addWidget(listWidget9, 0, 0, 1, 2);

        tabWidget->addTab(category9, QString());
        category10 = new QWidget();
        category10->setObjectName(QStringLiteral("category10"));
        gridLayout_12 = new QGridLayout(category10);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        listWidget10 = new QListWidget(category10);
        listWidget10->setObjectName(QStringLiteral("listWidget10"));

        gridLayout_12->addWidget(listWidget10, 0, 0, 1, 2);

        tabWidget->addTab(category10, QString());
        category11 = new QWidget();
        category11->setObjectName(QStringLiteral("category11"));
        gridLayout_13 = new QGridLayout(category11);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        listWidget11 = new QListWidget(category11);
        listWidget11->setObjectName(QStringLiteral("listWidget11"));

        gridLayout_13->addWidget(listWidget11, 0, 0, 1, 2);

        tabWidget->addTab(category11, QString());
        category12 = new QWidget();
        category12->setObjectName(QStringLiteral("category12"));
        gridLayout_14 = new QGridLayout(category12);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        listWidget12 = new QListWidget(category12);
        listWidget12->setObjectName(QStringLiteral("listWidget12"));

        gridLayout_14->addWidget(listWidget12, 0, 0, 1, 2);

        tabWidget->addTab(category12, QString());
        category13 = new QWidget();
        category13->setObjectName(QStringLiteral("category13"));
        gridLayout_15 = new QGridLayout(category13);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        listWidget13 = new QListWidget(category13);
        listWidget13->setObjectName(QStringLiteral("listWidget13"));

        gridLayout_15->addWidget(listWidget13, 0, 0, 1, 2);

        tabWidget->addTab(category13, QString());
        category14 = new QWidget();
        category14->setObjectName(QStringLiteral("category14"));
        gridLayout_16 = new QGridLayout(category14);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        listWidget14 = new QListWidget(category14);
        listWidget14->setObjectName(QStringLiteral("listWidget14"));

        gridLayout_16->addWidget(listWidget14, 0, 0, 1, 2);

        tabWidget->addTab(category14, QString());

        verticalLayout_3->addWidget(tabWidget);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        addPushButton = new QPushButton(SplitYearForm_template);
        addPushButton->setObjectName(QStringLiteral("addPushButton"));

        gridLayout_17->addWidget(addPushButton, 0, 0, 1, 1);

        removePushButton = new QPushButton(SplitYearForm_template);
        removePushButton->setObjectName(QStringLiteral("removePushButton"));

        gridLayout_17->addWidget(removePushButton, 0, 1, 1, 1);

        line = new QFrame(SplitYearForm_template);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_17->addWidget(line, 1, 0, 1, 2);

        modifyPushButton = new QPushButton(SplitYearForm_template);
        modifyPushButton->setObjectName(QStringLiteral("modifyPushButton"));

        gridLayout_17->addWidget(modifyPushButton, 2, 0, 1, 1);

        removeAllPushButton = new QPushButton(SplitYearForm_template);
        removeAllPushButton->setObjectName(QStringLiteral("removeAllPushButton"));

        gridLayout_17->addWidget(removeAllPushButton, 2, 1, 1, 1);

        line_2 = new QFrame(SplitYearForm_template);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_17->addWidget(line_2, 3, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout_17);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        splitYearTextLabel = new QLabel(SplitYearForm_template);
        splitYearTextLabel->setObjectName(QStringLiteral("splitYearTextLabel"));
        splitYearTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(splitYearTextLabel);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        categoriesGroupBox = new QGroupBox(SplitYearForm_template);
        categoriesGroupBox->setObjectName(QStringLiteral("categoriesGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(categoriesGroupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        divisionsLabel = new QLabel(categoriesGroupBox);
        divisionsLabel->setObjectName(QStringLiteral("divisionsLabel"));

        horizontalLayout_2->addWidget(divisionsLabel);

        categoriesSpinBox = new QSpinBox(categoriesGroupBox);
        categoriesSpinBox->setObjectName(QStringLiteral("categoriesSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(categoriesSpinBox->sizePolicy().hasHeightForWidth());
        categoriesSpinBox->setSizePolicy(sizePolicy1);
        categoriesSpinBox->setMinimum(1);
        categoriesSpinBox->setMaximum(14);
        categoriesSpinBox->setValue(1);

        horizontalLayout_2->addWidget(categoriesSpinBox);


        verticalLayout_2->addWidget(categoriesGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        currentSubgroupsLabel = new QLabel(SplitYearForm_template);
        currentSubgroupsLabel->setObjectName(QStringLiteral("currentSubgroupsLabel"));

        verticalLayout_2->addWidget(currentSubgroupsLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        limitsGroupBox = new QGroupBox(SplitYearForm_template);
        limitsGroupBox->setObjectName(QStringLiteral("limitsGroupBox"));
        verticalLayout = new QVBoxLayout(limitsGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        maxSubgroupsPerYearLabel = new QLabel(limitsGroupBox);
        maxSubgroupsPerYearLabel->setObjectName(QStringLiteral("maxSubgroupsPerYearLabel"));
        maxSubgroupsPerYearLabel->setText(QStringLiteral("Max subgroups per year: %1"));

        verticalLayout->addWidget(maxSubgroupsPerYearLabel);

        maxTotalSubgroupsLabel = new QLabel(limitsGroupBox);
        maxTotalSubgroupsLabel->setObjectName(QStringLiteral("maxTotalSubgroupsLabel"));
        maxTotalSubgroupsLabel->setText(QStringLiteral("Max total subgroups: %1"));

        verticalLayout->addWidget(maxTotalSubgroupsLabel);


        verticalLayout_2->addWidget(limitsGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        separatorGroupBox = new QGroupBox(SplitYearForm_template);
        separatorGroupBox->setObjectName(QStringLiteral("separatorGroupBox"));
        gridLayout_5 = new QGridLayout(separatorGroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        separatorLineEdit = new QLineEdit(separatorGroupBox);
        separatorLineEdit->setObjectName(QStringLiteral("separatorLineEdit"));

        gridLayout_5->addWidget(separatorLineEdit, 0, 0, 1, 1);


        verticalLayout_2->addWidget(separatorGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        resetPushButton = new QPushButton(SplitYearForm_template);
        resetPushButton->setObjectName(QStringLiteral("resetPushButton"));

        hboxLayout->addWidget(resetPushButton);

        helpPushButton = new QPushButton(SplitYearForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        hboxLayout->addWidget(helpPushButton);

        okPushButton = new QPushButton(SplitYearForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(SplitYearForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        verticalLayout_4->addLayout(hboxLayout);


        retranslateUi(SplitYearForm_template);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SplitYearForm_template);
    } // setupUi

    void retranslateUi(QDialog *SplitYearForm_template)
    {
        SplitYearForm_template->setWindowTitle(QApplication::translate("SplitYearForm_template", "Split year dialog", 0));
        label->setText(QApplication::translate("SplitYearForm_template", "VERY IMPORTANT: For generation feasibility, keep the number of categories and the number of subgroups to a minimum! It is recommended that no more than 2, 3 or maximum 4 categories to be used. Press Help for details.", 0));
        label_2->setText(QApplication::translate("SplitYearForm_template", "Note: There are three global settings: hide subgroups in combo boxes/activity planning, and do not write subgroups timetables.", 0));
        tabWidget->setTabText(tabWidget->indexOf(category1), QApplication::translate("SplitYearForm_template", "1", 0));
        tabWidget->setTabText(tabWidget->indexOf(category2), QApplication::translate("SplitYearForm_template", "2", 0));
        tabWidget->setTabText(tabWidget->indexOf(category3), QApplication::translate("SplitYearForm_template", "3", 0));
        tabWidget->setTabText(tabWidget->indexOf(category4), QApplication::translate("SplitYearForm_template", "4", 0));
        tabWidget->setTabText(tabWidget->indexOf(category5), QApplication::translate("SplitYearForm_template", "5", 0));
        tabWidget->setTabText(tabWidget->indexOf(category6), QApplication::translate("SplitYearForm_template", "6", 0));
        tabWidget->setTabText(tabWidget->indexOf(category7), QApplication::translate("SplitYearForm_template", "7", 0));
        tabWidget->setTabText(tabWidget->indexOf(category8), QApplication::translate("SplitYearForm_template", "8", 0));
        tabWidget->setTabText(tabWidget->indexOf(category9), QApplication::translate("SplitYearForm_template", "9", 0));
        tabWidget->setTabText(tabWidget->indexOf(category10), QApplication::translate("SplitYearForm_template", "10", 0));
        tabWidget->setTabText(tabWidget->indexOf(category11), QApplication::translate("SplitYearForm_template", "11", 0));
        tabWidget->setTabText(tabWidget->indexOf(category12), QApplication::translate("SplitYearForm_template", "12", 0));
        tabWidget->setTabText(tabWidget->indexOf(category13), QApplication::translate("SplitYearForm_template", "13", 0));
        tabWidget->setTabText(tabWidget->indexOf(category14), QApplication::translate("SplitYearForm_template", "14", 0));
        addPushButton->setText(QApplication::translate("SplitYearForm_template", "Add", 0));
        removePushButton->setText(QApplication::translate("SplitYearForm_template", "Remove", 0));
        modifyPushButton->setText(QApplication::translate("SplitYearForm_template", "Modify", 0));
        removeAllPushButton->setText(QApplication::translate("SplitYearForm_template", "Remove all", 0));
        splitYearTextLabel->setText(QApplication::translate("SplitYearForm_template", "Splitting year: %1", 0));
        categoriesGroupBox->setTitle(QApplication::translate("SplitYearForm_template", "Divisions / Categories:", 0));
        divisionsLabel->setText(QApplication::translate("SplitYearForm_template", "0", 0));
        currentSubgroupsLabel->setText(QApplication::translate("SplitYearForm_template", "Subgroups: %1", "%1 is the number of subgroups"));
        limitsGroupBox->setTitle(QApplication::translate("SplitYearForm_template", "Limits:", 0));
        separatorGroupBox->setTitle(QApplication::translate("SplitYearForm_template", "Separator character(s):", 0));
        separatorLineEdit->setText(QString());
        resetPushButton->setText(QApplication::translate("SplitYearForm_template", "Reset", 0));
        helpPushButton->setText(QApplication::translate("SplitYearForm_template", "Help", 0));
        okPushButton->setText(QApplication::translate("SplitYearForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("SplitYearForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SplitYearForm_template: public Ui_SplitYearForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITYEARFORM_TEMPLATE_H
