/********************************************************************************
** Form generated from reading UI file 'teachersubjectsqualificationsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSUBJECTSQUALIFICATIONSFORM_TEMPLATE_H
#define UI_TEACHERSUBJECTSQUALIFICATIONSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TeacherSubjectsQualificationsForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *selectedTextLabel;
    QListWidget *selectedSubjectsListWidget;
    QPushButton *clearPushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *subjectsTextLabel;
    QListWidget *subjectsListWidget;
    QPushButton *addAllSubjectsPushButton;
    QLabel *teacherTextLabel;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *TeacherSubjectsQualificationsForm_template)
    {
        if (TeacherSubjectsQualificationsForm_template->objectName().isEmpty())
            TeacherSubjectsQualificationsForm_template->setObjectName(QStringLiteral("TeacherSubjectsQualificationsForm_template"));
        TeacherSubjectsQualificationsForm_template->resize(579, 479);
        gridLayout = new QGridLayout(TeacherSubjectsQualificationsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedTextLabel = new QLabel(TeacherSubjectsQualificationsForm_template);
        selectedTextLabel->setObjectName(QStringLiteral("selectedTextLabel"));
        selectedTextLabel->setFrameShape(QFrame::NoFrame);
        selectedTextLabel->setFrameShadow(QFrame::Plain);
        selectedTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedTextLabel);

        selectedSubjectsListWidget = new QListWidget(TeacherSubjectsQualificationsForm_template);
        selectedSubjectsListWidget->setObjectName(QStringLiteral("selectedSubjectsListWidget"));

        verticalLayout->addWidget(selectedSubjectsListWidget);

        clearPushButton = new QPushButton(TeacherSubjectsQualificationsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        subjectsTextLabel = new QLabel(TeacherSubjectsQualificationsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setFrameShape(QFrame::NoFrame);
        subjectsTextLabel->setFrameShadow(QFrame::Plain);
        subjectsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(subjectsTextLabel);

        subjectsListWidget = new QListWidget(TeacherSubjectsQualificationsForm_template);
        subjectsListWidget->setObjectName(QStringLiteral("subjectsListWidget"));

        verticalLayout_2->addWidget(subjectsListWidget);

        addAllSubjectsPushButton = new QPushButton(TeacherSubjectsQualificationsForm_template);
        addAllSubjectsPushButton->setObjectName(QStringLiteral("addAllSubjectsPushButton"));

        verticalLayout_2->addWidget(addAllSubjectsPushButton);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        teacherTextLabel = new QLabel(TeacherSubjectsQualificationsForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setWordWrap(false);

        gridLayout->addWidget(teacherTextLabel, 0, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(TeacherSubjectsQualificationsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(TeacherSubjectsQualificationsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);


        retranslateUi(TeacherSubjectsQualificationsForm_template);

        QMetaObject::connectSlotsByName(TeacherSubjectsQualificationsForm_template);
    } // setupUi

    void retranslateUi(QDialog *TeacherSubjectsQualificationsForm_template)
    {
        TeacherSubjectsQualificationsForm_template->setWindowTitle(QApplication::translate("TeacherSubjectsQualificationsForm_template", "Teacher subjects qualifications", 0));
        selectedTextLabel->setText(QApplication::translate("TeacherSubjectsQualificationsForm_template", "Selected", "It refers to a list of selected subjects"));
        clearPushButton->setText(QApplication::translate("TeacherSubjectsQualificationsForm_template", "Clear", 0));
        subjectsTextLabel->setText(QApplication::translate("TeacherSubjectsQualificationsForm_template", "Subjects", 0));
        addAllSubjectsPushButton->setText(QApplication::translate("TeacherSubjectsQualificationsForm_template", "All", 0));
        teacherTextLabel->setText(QApplication::translate("TeacherSubjectsQualificationsForm_template", "Teacher", 0));
        okPushButton->setText(QApplication::translate("TeacherSubjectsQualificationsForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("TeacherSubjectsQualificationsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class TeacherSubjectsQualificationsForm_template: public Ui_TeacherSubjectsQualificationsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSUBJECTSQUALIFICATIONSFORM_TEMPLATE_H
