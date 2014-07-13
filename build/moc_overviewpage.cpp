/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/overviewpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OverviewPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   52,   13,   13, 0x0a,
     128,   13,   13,   13, 0x08,
     148,   14,   13,   13, 0x08,
     195,  186,   13,   13, 0x08,
     217,   13,   13,   13, 0x08,
     230,   13,   13,   13, 0x08,
     241,   13,   13,   13, 0x08,
     268,  264,  252,   13, 0x08,
     304,  292,   13,   13, 0x08,
     353,   13,   13,   13, 0x08,
     380,   13,   13,   13, 0x08,
     401,   13,   13,   13, 0x08,
     431,  426,   13,   13, 0x08,
     467,  426,   13,   13, 0x08,
     502,   13,   13,   13, 0x08,
     525,   13,   13,   13, 0x08,
     548,   13,   13,   13, 0x08,
     571,   13,   13,   13, 0x08,
     594,   13,   13,   13, 0x08,
     617,   13,   13,   13, 0x08,
     640,   13,   13,   13, 0x08,
     663,   13,   13,   13, 0x08,
     686,   13,   13,   13, 0x08,
     709,   13,   13,   13, 0x08,
     732,   13,   13,   13, 0x08,
     755,   13,   13,   13, 0x08,
     778,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OverviewPage[] = {
    "OverviewPage\0\0index\0transactionClicked(QModelIndex)\0"
    "balance,unconfirmedBalance,immatureBalance\0"
    "setBalance(qint64,qint64,qint64)\0"
    "updateDisplayUnit()\0"
    "handleTransactionClicked(QModelIndex)\0"
    "warnings\0updateAlerts(QString)\0"
    "showAction()\0showVote()\0showChat()\0"
    "std::string\0str\0getSmileys(std::string)\0"
    "str,from,to\0"
    "replaceAll(std::string&,std::string,std::string)\0"
    "on_btnChatSmiley_clicked()\0"
    "on_btnVote_clicked()\0on_btnChatSend_clicked()\0"
    "arg1\0on_txtChatNick_textChanged(QString)\0"
    "on_txtChatMsg_textChanged(QString)\0"
    "on_rbLang_en_clicked()\0on_rbLang_de_clicked()\0"
    "on_rbLang_fr_clicked()\0on_rbLang_es_clicked()\0"
    "on_rbLang_it_clicked()\0on_rbLang_pt_clicked()\0"
    "on_rbLang_tr_clicked()\0on_rbLang_ru_clicked()\0"
    "on_rbLang_cn_clicked()\0on_rbLang_jp_clicked()\0"
    "on_rbLang_kr_clicked()\0on_btnWallet_clicked()\0"
    "setWalletStatus()\0"
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->updateDisplayUnit(); break;
        case 3: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->showAction(); break;
        case 6: _t->showVote(); break;
        case 7: _t->showChat(); break;
        case 8: { std::string _r = _t->getSmileys((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 9: _t->replaceAll((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 10: _t->on_btnChatSmiley_clicked(); break;
        case 11: _t->on_btnVote_clicked(); break;
        case 12: _t->on_btnChatSend_clicked(); break;
        case 13: _t->on_txtChatNick_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_txtChatMsg_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_rbLang_en_clicked(); break;
        case 16: _t->on_rbLang_de_clicked(); break;
        case 17: _t->on_rbLang_fr_clicked(); break;
        case 18: _t->on_rbLang_es_clicked(); break;
        case 19: _t->on_rbLang_it_clicked(); break;
        case 20: _t->on_rbLang_pt_clicked(); break;
        case 21: _t->on_rbLang_tr_clicked(); break;
        case 22: _t->on_rbLang_ru_clicked(); break;
        case 23: _t->on_rbLang_cn_clicked(); break;
        case 24: _t->on_rbLang_jp_clicked(); break;
        case 25: _t->on_rbLang_kr_clicked(); break;
        case 26: _t->on_btnWallet_clicked(); break;
        case 27: _t->setWalletStatus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OverviewPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage,
      qt_meta_data_OverviewPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OverviewPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
