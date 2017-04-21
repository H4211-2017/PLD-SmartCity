/********************************************************************************
** Form generated from reading UI file 'timetableviewroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLEVIEWROOMSFORM_TEMPLATE_H
#define UI_TIMETABLEVIEWROOMSFORM_TEMPLATE_H

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

class Ui_TimetableViewRoomsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *horizontalSplitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *verticalSplitter;
    QListWidget *roomsListWidget;
    QPlainTextEdit *detailsTextEdit;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *lockTimePushButton;
    QPushButton *lockSpacePushButton;
    QPushButton *lockTimeSpacePushButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *roomNameTextLabel;
    QTableWidget *roomsTimetableTable;

    void setupUi(QDialog *TimetableViewRoomsForm_template)
    {
        if (TimetableViewRoomsForm_template->objectName().isEmpty())
            TimetableViewRoomsForm_template->setObjectName(QStringLiteral("TimetableViewRoomsForm_template"));
        TimetableViewRoomsForm_template->resize(780, 530);
        gridLayout_2 = new QGridLayout(TimetableViewRoomsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSplitter = new QSplitter(TimetableViewRoomsForm_template);
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
        roomsListWidget = new QListWidget(verticalSplitter);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));
        verticalSplitter->addWidget(roomsListWidget);
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lockTimePushButton = new QPushButton(groupBox);
        lockTimePushButton->setObjectName(QStringLiteral("lockTimePushButton"));

        horizontalLayout_2->addWidget(lockTimePushButton);

        lockSpacePushButton = new QPushButton(groupBox);
        lockSpacePushButton->setObjectName(QStringLiteral("lockSpacePushButton"));

        horizontalLayout_2->addWidget(lockSpacePushButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        lockTimeSpacePushButton = new QPushButton(groupBox);
        lockTimeSpacePushButton->setObjectName(QStringLiteral("lockTimeSpacePushButton"));

        gridLayout->addWidget(lockTimeSpacePushButton, 2, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        helpPushButton = new QPushButton(layoutWidget);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(layoutWidget);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSplitter->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(horizontalSplitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        roomNameTextLabel = new QLabel(layoutWidget2);
        roomNameTextLabel->setObjectName(QStringLiteral("roomNameTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(roomNameTextLabel->sizePolicy().hasHeightForWidth());
        roomNameTextLabel->setSizePolicy(sizePolicy);
        roomNameTextLabel->setWordWrap(true);

        verticalLayout->addWidget(roomNameTextLabel);

        roomsTimetableTable = new QTableWidget(layoutWidget2);
        roomsTimetableTable->setObjectName(QStringLiteral("roomsTimetableTable"));

        verticalLayout->addWidget(roomsTimetableTable);

        horizontalSplitter->addWidget(layoutWidget2);

        gridLayout_2->addWidget(horizontalSplitter, 0, 0, 1, 1);


        retranslateUi(TimetableViewRoomsForm_template);

        QMetaObject::connectSlotsByName(TimetableViewRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *TimetableViewRoomsForm_template)
    {
        TimetableViewRoomsForm_template->setWindowTitle(QApplication::translate("TimetableViewRoomsForm_template", "View rooms timetable", 0));
        groupBox->setTitle(QApplication::translate("TimetableViewRoomsForm_template", "Lock/unlock", 0));
        lockTimePushButton->setText(QApplication::translate("TimetableViewRoomsForm_template", "Time", 0));
        lockSpacePushButton->setText(QApplication::translate("TimetableViewRoomsForm_template", "Space", 0));
        lockTimeSpacePushButton->setText(QApplication::translate("TimetableViewRoomsForm_template", "Both", 0));
        lockTimeSpacePushButton->setShortcut(QString());
        helpPushButton->setText(QApplication::translate("TimetableViewRoomsForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("TimetableViewRoomsForm_template", "Close", 0));
        roomNameTextLabel->setText(QApplication::translate("TimetableViewRoomsForm_template", "Room's name", 0));
    } // retranslateUi

};

namespace Ui {
    class TimetableViewRoomsForm_template: public Ui_TimetableViewRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLEVIEWROOMSFORM_TEMPLATE_H
