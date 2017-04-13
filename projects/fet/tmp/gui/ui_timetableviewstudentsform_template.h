/********************************************************************************
** Form generated from reading UI file 'timetableviewstudentsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLEVIEWSTUDENTSFORM_TEMPLATE_H
#define UI_TIMETABLEVIEWSTUDENTSFORM_TEMPLATE_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimetableViewStudentsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *horizontalSplitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *verticalStudentsListSplitter;
    QListWidget *yearsListWidget;
    QListWidget *groupsListWidget;
    QListWidget *subgroupsListWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *lockTimePushButton;
    QPushButton *lockSpacePushButton;
    QPushButton *lockTimeSpacePushButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;
    QSplitter *verticalStudentsTableDetailsSplitter;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *classNameTextLabel;
    QTableWidget *studentsTimetableTable;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *detailsTextLabel;
    QPlainTextEdit *detailsTextEdit;

    void setupUi(QDialog *TimetableViewStudentsForm_template)
    {
        if (TimetableViewStudentsForm_template->objectName().isEmpty())
            TimetableViewStudentsForm_template->setObjectName(QStringLiteral("TimetableViewStudentsForm_template"));
        TimetableViewStudentsForm_template->resize(835, 530);
        gridLayout_2 = new QGridLayout(TimetableViewStudentsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSplitter = new QSplitter(TimetableViewStudentsForm_template);
        horizontalSplitter->setObjectName(QStringLiteral("horizontalSplitter"));
        horizontalSplitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(horizontalSplitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalStudentsListSplitter = new QSplitter(layoutWidget);
        verticalStudentsListSplitter->setObjectName(QStringLiteral("verticalStudentsListSplitter"));
        verticalStudentsListSplitter->setOrientation(Qt::Horizontal);
        yearsListWidget = new QListWidget(verticalStudentsListSplitter);
        yearsListWidget->setObjectName(QStringLiteral("yearsListWidget"));
        verticalStudentsListSplitter->addWidget(yearsListWidget);
        groupsListWidget = new QListWidget(verticalStudentsListSplitter);
        groupsListWidget->setObjectName(QStringLiteral("groupsListWidget"));
        verticalStudentsListSplitter->addWidget(groupsListWidget);
        subgroupsListWidget = new QListWidget(verticalStudentsListSplitter);
        subgroupsListWidget->setObjectName(QStringLiteral("subgroupsListWidget"));
        verticalStudentsListSplitter->addWidget(subgroupsListWidget);

        horizontalLayout->addWidget(verticalStudentsListSplitter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lockTimePushButton = new QPushButton(groupBox);
        lockTimePushButton->setObjectName(QStringLiteral("lockTimePushButton"));

        horizontalLayout_3->addWidget(lockTimePushButton);

        lockSpacePushButton = new QPushButton(groupBox);
        lockSpacePushButton->setObjectName(QStringLiteral("lockSpacePushButton"));

        horizontalLayout_3->addWidget(lockSpacePushButton);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        lockTimeSpacePushButton = new QPushButton(groupBox);
        lockTimeSpacePushButton->setObjectName(QStringLiteral("lockTimeSpacePushButton"));

        gridLayout->addWidget(lockTimeSpacePushButton, 2, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        helpPushButton = new QPushButton(layoutWidget);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout_2->addWidget(helpPushButton);

        closePushButton = new QPushButton(layoutWidget);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSplitter->addWidget(layoutWidget);
        verticalStudentsTableDetailsSplitter = new QSplitter(horizontalSplitter);
        verticalStudentsTableDetailsSplitter->setObjectName(QStringLiteral("verticalStudentsTableDetailsSplitter"));
        verticalStudentsTableDetailsSplitter->setOrientation(Qt::Horizontal);
        layoutWidget2 = new QWidget(verticalStudentsTableDetailsSplitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        classNameTextLabel = new QLabel(layoutWidget2);
        classNameTextLabel->setObjectName(QStringLiteral("classNameTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(classNameTextLabel->sizePolicy().hasHeightForWidth());
        classNameTextLabel->setSizePolicy(sizePolicy);
        classNameTextLabel->setWordWrap(true);

        verticalLayout->addWidget(classNameTextLabel);

        studentsTimetableTable = new QTableWidget(layoutWidget2);
        studentsTimetableTable->setObjectName(QStringLiteral("studentsTimetableTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(studentsTimetableTable->sizePolicy().hasHeightForWidth());
        studentsTimetableTable->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(studentsTimetableTable);

        verticalStudentsTableDetailsSplitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(verticalStudentsTableDetailsSplitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        detailsTextLabel = new QLabel(layoutWidget3);
        detailsTextLabel->setObjectName(QStringLiteral("detailsTextLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(detailsTextLabel->sizePolicy().hasHeightForWidth());
        detailsTextLabel->setSizePolicy(sizePolicy2);
        detailsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(detailsTextLabel);

        detailsTextEdit = new QPlainTextEdit(layoutWidget3);
        detailsTextEdit->setObjectName(QStringLiteral("detailsTextEdit"));

        verticalLayout_2->addWidget(detailsTextEdit);

        verticalStudentsTableDetailsSplitter->addWidget(layoutWidget3);
        horizontalSplitter->addWidget(verticalStudentsTableDetailsSplitter);

        gridLayout_2->addWidget(horizontalSplitter, 0, 0, 1, 1);


        retranslateUi(TimetableViewStudentsForm_template);

        QMetaObject::connectSlotsByName(TimetableViewStudentsForm_template);
    } // setupUi

    void retranslateUi(QDialog *TimetableViewStudentsForm_template)
    {
        TimetableViewStudentsForm_template->setWindowTitle(QApplication::translate("TimetableViewStudentsForm_template", "View students timetable", 0));
        groupBox->setTitle(QApplication::translate("TimetableViewStudentsForm_template", "Lock/unlock", 0));
        lockTimePushButton->setText(QApplication::translate("TimetableViewStudentsForm_template", "Time", 0));
        lockSpacePushButton->setText(QApplication::translate("TimetableViewStudentsForm_template", "Space", 0));
        lockTimeSpacePushButton->setText(QApplication::translate("TimetableViewStudentsForm_template", "Both", 0));
        lockTimeSpacePushButton->setShortcut(QString());
        helpPushButton->setText(QApplication::translate("TimetableViewStudentsForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("TimetableViewStudentsForm_template", "Close", 0));
        classNameTextLabel->setText(QApplication::translate("TimetableViewStudentsForm_template", "Class name", 0));
        detailsTextLabel->setText(QApplication::translate("TimetableViewStudentsForm_template", "Details", 0));
    } // retranslateUi

};

namespace Ui {
    class TimetableViewStudentsForm_template: public Ui_TimetableViewStudentsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLEVIEWSTUDENTSFORM_TEMPLATE_H
