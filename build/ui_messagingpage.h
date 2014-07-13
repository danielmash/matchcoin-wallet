/********************************************************************************
** Form generated from reading UI file 'messagingpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGINGPAGE_H
#define UI_MESSAGINGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessagingPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *lblComing;
    QLabel *labelAlerts;

    void setupUi(QWidget *MessagingPage)
    {
        if (MessagingPage->objectName().isEmpty())
            MessagingPage->setObjectName(QString::fromUtf8("MessagingPage"));
        MessagingPage->resize(806, 548);
        topLayout = new QVBoxLayout(MessagingPage);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        lblComing = new QLabel(MessagingPage);
        lblComing->setObjectName(QString::fromUtf8("lblComing"));
        lblComing->setPixmap(QPixmap(QString::fromUtf8(":/images/coming")));
        lblComing->setAlignment(Qt::AlignCenter);

        topLayout->addWidget(lblComing);

        labelAlerts = new QLabel(MessagingPage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);


        retranslateUi(MessagingPage);

        QMetaObject::connectSlotsByName(MessagingPage);
    } // setupUi

    void retranslateUi(QWidget *MessagingPage)
    {
        MessagingPage->setWindowTitle(QApplication::translate("MessagingPage", "Form", 0, QApplication::UnicodeUTF8));
        lblComing->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MessagingPage: public Ui_MessagingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGINGPAGE_H
