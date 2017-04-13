/********************************************************************************
** Form generated from reading UI file 'timetableviewteachersform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLEVIEWTEACHERSFORM_TEMPLATE_H
#define UI_TIMETABLEVIEWTEACHERSFORM_TEMPLATE_H

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

class Ui_TimetableViewTeachersForm_template
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *horizontalSplitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *verticalSplitter;
    QListWidget *teachersListWidget;
    QPlainTextEdit *detailsTextEdit;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *lockTimePushButton;
    QPushButton *lockSpacePushButton;
    QPushButton *lockTimeSpacePushButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *teacherNameTextLabel;
    QTableWidget *teachersTimetableTable;

    void setupUi(QDialog *TimetableViewTeachersForm_template)
    {
        if (TimetableViewTeachersForm_template->objectName().isEmpty())
            TimetableViewTeachersForm_template->setObjectName(QStringLiteral("TimetableViewTeachersForm_template"));
        TimetableViewTeachersForm_template->resize(780, 530);
        gridLayout_2 = new QGridLayout(TimetableViewTeachersForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSplitter = new QSplitter(TimetableViewTeachersForm_template);
        horizontalSplitter->setObjectName(QStringLiteral("horizontalSplitter"));
        horizontalSplitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(horizontalSplitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSplitter = new QSplitter(layoutWidget);
        verticalSplitter->setObjectName(QStringLiteral("verticalSplitter"));
        verticalSplitter->setOrientation(Qt::Horizontal);
        teachersListWidget = new QListWidget(verticalSplitter);
        teachersListWidget->setObjectName(QStringLiteral("teachersListWidget"));
        verticalSplitter->addWidget(teachersListWidget);
        detailsTextEdit = new QPlainTextEdit(verticalSplitter);
        detailsTextEdit->setObjectName(QStringLiteral("detailsTextEdit"));
        verticalSplitter->addWidget(detailsTextEdit);

        horizontalLayout_3->addWidget(verticalSplitter);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lockTimePushButton = new QPushButton(groupBox);
        lockTimePushButton->setObjectName(QStringLiteral("lockTimePushButton"));

        horizontalLayout->addWidget(lockTimePushButton);

        lockSpacePushButton = new QPushButton(groupBox);
        lockSpacePushButton->setObjectName(QStringLiteral("lockSpacePushButton"));

        horizontalLayout->addWidget(lockSpacePushButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        lockTimeSpacePushButton = new QPushButton(groupBox);
        lockTimeSpacePushButton->setObjectName(QStringLiteral("lockTimeSpacePushButton"));

        gridLayout->addWidget(lockTimeSpacePushButton, 2, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        helpPushButton = new QPushButton(layoutWidget);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout_2->addWidget(helpPushButton);

        closePushButton = new QPushButton(layoutWidget);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSplitter->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(horizontalSplitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        teacherNameTextLabel = new QLabel(layoutWidget2);
        teacherNameTextLabel->setObjectName(QStringLiteral("teacherNameTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherNameTextLabel->sizePolicy().hasHeightForWidth());
        teacherNameTextLabel->setSizePolicy(sizePolicy);
        teacherNameTextLabel->setWordWrap(true);

        verticalLayout->addWidget(teacherNameTextLabel);

        teachersTimetableTable = new QTableWidget(layoutWidget2);
        teachersTimetableTable->setObjectName(QStringLiteral("teachersTimetableTable"));

        verticalLayout->addWidget(teachersTimetableTable);

        horizontalSplitter->addWidget(layoutWidget2);

        gridLayout_2->addWidget(horizontalSplitter, 0, 0, 1, 1);


        retranslateUi(TimetableViewTeachersForm_template);

        QMetaObject::connectSlotsByName(TimetableViewTeachersForm_template);
    } // setupUi

    void retranslateUi(QDialog *TimetableViewTeachersForm_template)
    {
        TimetableViewTeachersForm_template->setWindowTitle(QApplication::translate("TimetableViewTeachersForm_template", "View teachers timetable", 0));
        groupBox->setTitle(QApplication::translate("TimetableViewTeachersForm_template", "Lock/unlock", 0));
        lockTimePushButton->setText(QApplication::translate("TimetableViewTeachersForm_template", "Time", 0));
        lockSpacePushButton->setText(QApplication::translate("TimetableViewTeachersForm_template", "Space", 0));
        lockTimeSpacePushButton->setText(QApplication::translate("TimetableViewTeachersForm_template", "Both", 0));
        lockTimeSpacePushButton->setShortcut(QString());
        helpPushButton->setText(QApplication::translate("TimetableViewTeachersForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("TimetableViewTeachersForm_template", "Close", 0));
        teacherNameTextLabel->setText(QApplication::translate("TimetableViewTeachersForm_template", "Teacher's name", 0));
    } // retranslateUi

};

namespace Ui {
    class TimetableViewTeachersForm_template: public Ui_TimetableViewTeachersForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLEVIEWTEACHERSFORM_TEMPLATE_H
