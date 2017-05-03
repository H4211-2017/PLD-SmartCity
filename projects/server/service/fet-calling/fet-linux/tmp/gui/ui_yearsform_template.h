/********************************************************************************
** Form generated from reading UI file 'yearsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YEARSFORM_TEMPLATE_H
#define UI_YEARSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_YearsForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *yearsListWidget;
    QPlainTextEdit *detailsTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addYearPushButton;
    QPushButton *modifyYearPushButton;
    QPushButton *removeYearPushButton;
    QPushButton *commentsPushButton;
    QPushButton *divisionsPushButton;
    QPushButton *activateStudentsPushButton;
    QPushButton *deactivateStudentsPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *moveYearUpPushButton;
    QPushButton *moveYearDownPushButton;
    QPushButton *sortYearsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *YearsForm_template)
    {
        if (YearsForm_template->objectName().isEmpty())
            YearsForm_template->setObjectName(QStringLiteral("YearsForm_template"));
        YearsForm_template->resize(510, 500);
        gridLayout = new QGridLayout(YearsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(YearsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        yearsListWidget = new QListWidget(splitter);
        yearsListWidget->setObjectName(QStringLiteral("yearsListWidget"));
        splitter->addWidget(yearsListWidget);
        detailsTextEdit = new QPlainTextEdit(splitter);
        detailsTextEdit->setObjectName(QStringLiteral("detailsTextEdit"));
        splitter->addWidget(detailsTextEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addYearPushButton = new QPushButton(YearsForm_template);
        addYearPushButton->setObjectName(QStringLiteral("addYearPushButton"));

        horizontalLayout->addWidget(addYearPushButton);

        modifyYearPushButton = new QPushButton(YearsForm_template);
        modifyYearPushButton->setObjectName(QStringLiteral("modifyYearPushButton"));

        horizontalLayout->addWidget(modifyYearPushButton);

        removeYearPushButton = new QPushButton(YearsForm_template);
        removeYearPushButton->setObjectName(QStringLiteral("removeYearPushButton"));

        horizontalLayout->addWidget(removeYearPushButton);

        commentsPushButton = new QPushButton(YearsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout->addWidget(commentsPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        divisionsPushButton = new QPushButton(YearsForm_template);
        divisionsPushButton->setObjectName(QStringLiteral("divisionsPushButton"));

        gridLayout->addWidget(divisionsPushButton, 2, 0, 1, 1);

        activateStudentsPushButton = new QPushButton(YearsForm_template);
        activateStudentsPushButton->setObjectName(QStringLiteral("activateStudentsPushButton"));

        gridLayout->addWidget(activateStudentsPushButton, 3, 0, 1, 1);

        deactivateStudentsPushButton = new QPushButton(YearsForm_template);
        deactivateStudentsPushButton->setObjectName(QStringLiteral("deactivateStudentsPushButton"));

        gridLayout->addWidget(deactivateStudentsPushButton, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        moveYearUpPushButton = new QPushButton(YearsForm_template);
        moveYearUpPushButton->setObjectName(QStringLiteral("moveYearUpPushButton"));

        horizontalLayout_2->addWidget(moveYearUpPushButton);

        moveYearDownPushButton = new QPushButton(YearsForm_template);
        moveYearDownPushButton->setObjectName(QStringLiteral("moveYearDownPushButton"));

        horizontalLayout_2->addWidget(moveYearDownPushButton);

        sortYearsPushButton = new QPushButton(YearsForm_template);
        sortYearsPushButton->setObjectName(QStringLiteral("sortYearsPushButton"));

        horizontalLayout_2->addWidget(sortYearsPushButton);

        closePushButton = new QPushButton(YearsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);


        retranslateUi(YearsForm_template);

        QMetaObject::connectSlotsByName(YearsForm_template);
    } // setupUi

    void retranslateUi(QDialog *YearsForm_template)
    {
        YearsForm_template->setWindowTitle(QApplication::translate("YearsForm_template", "Years (forms, classes) of students", 0));
        addYearPushButton->setText(QApplication::translate("YearsForm_template", "Add", 0));
        modifyYearPushButton->setText(QApplication::translate("YearsForm_template", "Modify", 0));
        removeYearPushButton->setText(QApplication::translate("YearsForm_template", "Remove", 0));
        commentsPushButton->setText(QApplication::translate("YearsForm_template", "Comments", 0));
        divisionsPushButton->setText(QApplication::translate("YearsForm_template", "Divide year by selecting categories", 0));
        activateStudentsPushButton->setText(QApplication::translate("YearsForm_template", "Activate all activities for selected year", 0));
        deactivateStudentsPushButton->setText(QApplication::translate("YearsForm_template", "Deactivate all activities for selected year", 0));
        moveYearUpPushButton->setText(QApplication::translate("YearsForm_template", "Up", "It means move the item up in the list"));
        moveYearDownPushButton->setText(QApplication::translate("YearsForm_template", "Down", "It means move the item down in the list"));
        sortYearsPushButton->setText(QApplication::translate("YearsForm_template", "Sort", 0));
        closePushButton->setText(QApplication::translate("YearsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class YearsForm_template: public Ui_YearsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YEARSFORM_TEMPLATE_H
