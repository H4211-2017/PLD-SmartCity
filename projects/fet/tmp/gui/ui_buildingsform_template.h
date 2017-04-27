/********************************************************************************
** Form generated from reading UI file 'buildingsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDINGSFORM_TEMPLATE_H
#define UI_BUILDINGSFORM_TEMPLATE_H

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

class Ui_BuildingsForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *buildingsListWidget;
    QPlainTextEdit *currentBuildingTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addBuildingPushButton;
    QPushButton *modifyBuildingPushButton;
    QPushButton *removeBuildingPushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *moveBuildingUpPushButton;
    QPushButton *moveBuildingDownPushButton;
    QPushButton *commentsPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sortBuildingsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *BuildingsForm_template)
    {
        if (BuildingsForm_template->objectName().isEmpty())
            BuildingsForm_template->setObjectName(QStringLiteral("BuildingsForm_template"));
        BuildingsForm_template->resize(488, 440);
        gridLayout = new QGridLayout(BuildingsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(BuildingsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        buildingsListWidget = new QListWidget(splitter);
        buildingsListWidget->setObjectName(QStringLiteral("buildingsListWidget"));
        splitter->addWidget(buildingsListWidget);
        currentBuildingTextEdit = new QPlainTextEdit(splitter);
        currentBuildingTextEdit->setObjectName(QStringLiteral("currentBuildingTextEdit"));
        splitter->addWidget(currentBuildingTextEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addBuildingPushButton = new QPushButton(BuildingsForm_template);
        addBuildingPushButton->setObjectName(QStringLiteral("addBuildingPushButton"));

        horizontalLayout->addWidget(addBuildingPushButton);

        modifyBuildingPushButton = new QPushButton(BuildingsForm_template);
        modifyBuildingPushButton->setObjectName(QStringLiteral("modifyBuildingPushButton"));

        horizontalLayout->addWidget(modifyBuildingPushButton);

        removeBuildingPushButton = new QPushButton(BuildingsForm_template);
        removeBuildingPushButton->setObjectName(QStringLiteral("removeBuildingPushButton"));

        horizontalLayout->addWidget(removeBuildingPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        moveBuildingUpPushButton = new QPushButton(BuildingsForm_template);
        moveBuildingUpPushButton->setObjectName(QStringLiteral("moveBuildingUpPushButton"));

        horizontalLayout_3->addWidget(moveBuildingUpPushButton);

        moveBuildingDownPushButton = new QPushButton(BuildingsForm_template);
        moveBuildingDownPushButton->setObjectName(QStringLiteral("moveBuildingDownPushButton"));

        horizontalLayout_3->addWidget(moveBuildingDownPushButton);

        commentsPushButton = new QPushButton(BuildingsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout_3->addWidget(commentsPushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sortBuildingsPushButton = new QPushButton(BuildingsForm_template);
        sortBuildingsPushButton->setObjectName(QStringLiteral("sortBuildingsPushButton"));

        horizontalLayout_2->addWidget(sortBuildingsPushButton);

        closePushButton = new QPushButton(BuildingsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        retranslateUi(BuildingsForm_template);

        QMetaObject::connectSlotsByName(BuildingsForm_template);
    } // setupUi

    void retranslateUi(QDialog *BuildingsForm_template)
    {
        BuildingsForm_template->setWindowTitle(QApplication::translate("BuildingsForm_template", "Buildings", 0));
        addBuildingPushButton->setText(QApplication::translate("BuildingsForm_template", "Add", 0));
        modifyBuildingPushButton->setText(QApplication::translate("BuildingsForm_template", "Modify", 0));
        removeBuildingPushButton->setText(QApplication::translate("BuildingsForm_template", "Remove", 0));
        moveBuildingUpPushButton->setText(QApplication::translate("BuildingsForm_template", "Up", "It means move the item up in the list"));
        moveBuildingDownPushButton->setText(QApplication::translate("BuildingsForm_template", "Down", "It means move the item down in the list"));
        commentsPushButton->setText(QApplication::translate("BuildingsForm_template", "Comments", 0));
        sortBuildingsPushButton->setText(QApplication::translate("BuildingsForm_template", "Sort", 0));
        closePushButton->setText(QApplication::translate("BuildingsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class BuildingsForm_template: public Ui_BuildingsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDINGSFORM_TEMPLATE_H
