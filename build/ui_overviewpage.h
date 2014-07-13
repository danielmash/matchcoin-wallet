/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnWallet;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblInfo;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblVoteInfo;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblReward;
    QDoubleSpinBox *spbVote;
    QCheckBox *chkAutoVote;
    QPushButton *btnVote;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblLogo;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbLang_en;
    QRadioButton *rbLang_de;
    QRadioButton *rbLang_fr;
    QRadioButton *rbLang_es;
    QRadioButton *rbLang_it;
    QRadioButton *rbLang_pt;
    QRadioButton *rbLang_tr;
    QRadioButton *rbLang_ru;
    QRadioButton *rbLang_cn;
    QRadioButton *rbLang_jp;
    QRadioButton *rbLang_kr;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QTextBrowser *txtChat;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnChatBold;
    QLineEdit *txtChatNick;
    QLineEdit *txtChatMsg;
    QPushButton *btnChatSmiley;
    QPushButton *btnChatSend;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(819, 563);
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnWallet = new QPushButton(frame);
        btnWallet->setObjectName(QString::fromUtf8("btnWallet"));
        btnWallet->setEnabled(false);
        btnWallet->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/lock_none"), QSize(), QIcon::Normal, QIcon::Off);
        btnWallet->setIcon(icon);
        btnWallet->setChecked(false);

        horizontalLayout_4->addWidget(btnWallet);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        QFont font1;
        font1.setPointSize(10);
        labelWalletStatus->setFont(font1);
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0 TAC"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0 TAC"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));
        labelImmatureText->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setText(QString::fromUtf8("0 TAC"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelImmature);


        verticalLayout_4->addLayout(formLayout_2);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setFont(font1);
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        lblInfo = new QLabel(OverviewPage);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lblInfo->setFont(font2);

        horizontalLayout_7->addWidget(lblInfo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        lblVoteInfo = new QLabel(OverviewPage);
        lblVoteInfo->setObjectName(QString::fromUtf8("lblVoteInfo"));
        lblVoteInfo->setFont(font2);

        horizontalLayout_7->addWidget(lblVoteInfo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        lblReward = new QLabel(OverviewPage);
        lblReward->setObjectName(QString::fromUtf8("lblReward"));
        QFont font3;
        font3.setPointSize(9);
        lblReward->setFont(font3);

        horizontalLayout_7->addWidget(lblReward);

        spbVote = new QDoubleSpinBox(OverviewPage);
        spbVote->setObjectName(QString::fromUtf8("spbVote"));
        spbVote->setSingleStep(0.1);

        horizontalLayout_7->addWidget(spbVote);

        chkAutoVote = new QCheckBox(OverviewPage);
        chkAutoVote->setObjectName(QString::fromUtf8("chkAutoVote"));
        chkAutoVote->setTristate(false);

        horizontalLayout_7->addWidget(chkAutoVote);

        btnVote = new QPushButton(OverviewPage);
        btnVote->setObjectName(QString::fromUtf8("btnVote"));
        QFont font4;
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        btnVote->setFont(font4);
        btnVote->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 9px;\n"
"     border-color: black;\n"
"     font: bold 9px;\n"
"     min-width: 8em;\n"
"     padding: 3px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: green;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_7->addWidget(btnVote);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        topLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblLogo = new QLabel(OverviewPage);
        lblLogo->setObjectName(QString::fromUtf8("lblLogo"));
        lblLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo")));

        horizontalLayout_3->addWidget(lblLogo);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setContentsMargins(10, 10, 10, 10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_6->setSpacing(6);
#endif
        horizontalLayout_6->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rbLang_en = new QRadioButton(OverviewPage);
        rbLang_en->setObjectName(QString::fromUtf8("rbLang_en"));
        rbLang_en->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_en);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));
        rbLang_en->setText(QString::fromUtf8(""));
        rbLang_en->setCheckable(true);
        rbLang_en->setChecked(true);

        horizontalLayout_6->addWidget(rbLang_en);

        rbLang_de = new QRadioButton(OverviewPage);
        rbLang_de->setObjectName(QString::fromUtf8("rbLang_de"));
        rbLang_de->setMinimumSize(QSize(25, 19));
        rbLang_de->setMaximumSize(QSize(25, 19));
        rbLang_de->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_de);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_de);

        rbLang_fr = new QRadioButton(OverviewPage);
        rbLang_fr->setObjectName(QString::fromUtf8("rbLang_fr"));
        rbLang_fr->setMinimumSize(QSize(25, 19));
        rbLang_fr->setMaximumSize(QSize(25, 19));
        rbLang_fr->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_fr);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_fr);

        rbLang_es = new QRadioButton(OverviewPage);
        rbLang_es->setObjectName(QString::fromUtf8("rbLang_es"));
        rbLang_es->setMinimumSize(QSize(25, 19));
        rbLang_es->setMaximumSize(QSize(25, 19));
        rbLang_es->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_es);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));
        rbLang_es->setCheckable(true);
        rbLang_es->setChecked(false);

        horizontalLayout_6->addWidget(rbLang_es);

        rbLang_it = new QRadioButton(OverviewPage);
        rbLang_it->setObjectName(QString::fromUtf8("rbLang_it"));
        rbLang_it->setMinimumSize(QSize(25, 19));
        rbLang_it->setMaximumSize(QSize(25, 19));
        rbLang_it->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_it);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_it);

        rbLang_pt = new QRadioButton(OverviewPage);
        rbLang_pt->setObjectName(QString::fromUtf8("rbLang_pt"));
        rbLang_pt->setMinimumSize(QSize(25, 19));
        rbLang_pt->setMaximumSize(QSize(25, 19));
        rbLang_pt->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_pt);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_pt);

        rbLang_tr = new QRadioButton(OverviewPage);
        rbLang_tr->setObjectName(QString::fromUtf8("rbLang_tr"));
        rbLang_tr->setMinimumSize(QSize(25, 19));
        rbLang_tr->setMaximumSize(QSize(25, 19));
        rbLang_tr->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_tr);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_tr);

        rbLang_ru = new QRadioButton(OverviewPage);
        rbLang_ru->setObjectName(QString::fromUtf8("rbLang_ru"));
        rbLang_ru->setMinimumSize(QSize(25, 19));
        rbLang_ru->setMaximumSize(QSize(25, 19));
        rbLang_ru->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_ru);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));
        rbLang_ru->setCheckable(true);
        rbLang_ru->setChecked(false);

        horizontalLayout_6->addWidget(rbLang_ru);

        rbLang_cn = new QRadioButton(OverviewPage);
        rbLang_cn->setObjectName(QString::fromUtf8("rbLang_cn"));
        rbLang_cn->setMinimumSize(QSize(25, 19));
        rbLang_cn->setMaximumSize(QSize(25, 19));
        rbLang_cn->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_cn);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_cn);

        rbLang_jp = new QRadioButton(OverviewPage);
        rbLang_jp->setObjectName(QString::fromUtf8("rbLang_jp"));
        rbLang_jp->setMinimumSize(QSize(25, 19));
        rbLang_jp->setMaximumSize(QSize(25, 19));
        rbLang_jp->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_jp);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_jp);

        rbLang_kr = new QRadioButton(OverviewPage);
        rbLang_kr->setObjectName(QString::fromUtf8("rbLang_kr"));
        rbLang_kr->setMinimumSize(QSize(25, 19));
        rbLang_kr->setMaximumSize(QSize(25, 19));
        rbLang_kr->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_kr);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_kr);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        txtChat = new QTextBrowser(OverviewPage);
        txtChat->setObjectName(QString::fromUtf8("txtChat"));
        txtChat->setFont(font1);
        txtChat->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
"background-image: url(:/images/p2p);\n"
"background-repeat: no-repeat;\n"
"background-attachment:fixed;\n"
"background-position: center;"));
        txtChat->setFrameShape(QFrame::Box);
        txtChat->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        txtChat->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtChat->setDocumentTitle(QString::fromUtf8(""));
        txtChat->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"));
        txtChat->setOpenExternalLinks(true);

        horizontalLayout_8->addWidget(txtChat);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnChatBold = new QPushButton(OverviewPage);
        btnChatBold->setObjectName(QString::fromUtf8("btnChatBold"));
        btnChatBold->setMaximumSize(QSize(20, 16777215));
        btnChatBold->setFont(font);
        btnChatBold->setShortcut(QString::fromUtf8(""));
        btnChatBold->setCheckable(true);

        horizontalLayout_5->addWidget(btnChatBold);

        txtChatNick = new QLineEdit(OverviewPage);
        txtChatNick->setObjectName(QString::fromUtf8("txtChatNick"));
        txtChatNick->setMaximumSize(QSize(150, 16777215));
        txtChatNick->setFont(font);
        txtChatNick->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        txtChatNick->setMaxLength(20);

        horizontalLayout_5->addWidget(txtChatNick);

        txtChatMsg = new QLineEdit(OverviewPage);
        txtChatMsg->setObjectName(QString::fromUtf8("txtChatMsg"));
        txtChatMsg->setFont(font1);
        txtChatMsg->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        txtChatMsg->setMaxLength(140);

        horizontalLayout_5->addWidget(txtChatMsg);

        btnChatSmiley = new QPushButton(OverviewPage);
        btnChatSmiley->setObjectName(QString::fromUtf8("btnChatSmiley"));
        btnChatSmiley->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/smiley-button"), QSize(), QIcon::Normal, QIcon::Off);
        btnChatSmiley->setIcon(icon1);

        horizontalLayout_5->addWidget(btnChatSmiley);

        btnChatSend = new QPushButton(OverviewPage);
        btnChatSend->setObjectName(QString::fromUtf8("btnChatSend"));
        btnChatSend->setFont(font1);

        horizontalLayout_5->addWidget(btnChatSend);


        verticalLayout_7->addLayout(horizontalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_7);


        topLayout->addLayout(horizontalLayout_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        btnWallet->setText(QString());
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Talkcoin network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Balance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent transactions</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Talkcoin network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblInfo->setText(QApplication::translate("OverviewPage", "lblInfo", 0, QApplication::UnicodeUTF8));
        lblVoteInfo->setText(QApplication::translate("OverviewPage", "lblVoteInfo", 0, QApplication::UnicodeUTF8));
        lblReward->setText(QApplication::translate("OverviewPage", "Block Reward:", 0, QApplication::UnicodeUTF8));
        spbVote->setSuffix(QApplication::translate("OverviewPage", " TAC", 0, QApplication::UnicodeUTF8));
        chkAutoVote->setText(QApplication::translate("OverviewPage", "Auto Voting", 0, QApplication::UnicodeUTF8));
        btnVote->setText(QApplication::translate("OverviewPage", "Vote", 0, QApplication::UnicodeUTF8));
        lblLogo->setText(QString());
        rbLang_de->setText(QString());
        rbLang_fr->setText(QString());
        rbLang_es->setText(QString());
        rbLang_it->setText(QString());
        rbLang_pt->setText(QString());
        rbLang_tr->setText(QString());
        rbLang_ru->setText(QString());
        rbLang_cn->setText(QString());
        rbLang_jp->setText(QString());
        rbLang_kr->setText(QString());
        btnChatBold->setText(QApplication::translate("OverviewPage", "B", 0, QApplication::UnicodeUTF8));
        txtChatNick->setInputMask(QString());
        txtChatNick->setText(QString());
        txtChatMsg->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnChatSmiley->setToolTip(QApplication::translate("OverviewPage", "List of emoticons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnChatSend->setText(QApplication::translate("OverviewPage", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
