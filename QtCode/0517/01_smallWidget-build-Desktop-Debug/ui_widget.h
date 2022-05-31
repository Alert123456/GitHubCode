/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include <smallwidger.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    smallWidger *widget;
    QPushButton *btn_Get;
    QPushButton *btn_Set;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        widget = new smallWidger(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 30, 221, 41));
        btn_Get = new QPushButton(Widget);
        btn_Get->setObjectName(QString::fromUtf8("btn_Get"));
        btn_Get->setGeometry(QRect(120, 160, 75, 23));
        btn_Set = new QPushButton(Widget);
        btn_Set->setObjectName(QString::fromUtf8("btn_Set"));
        btn_Set->setGeometry(QRect(120, 210, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        btn_Get->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\345\275\223\345\211\215\345\200\274", 0, QApplication::UnicodeUTF8));
        btn_Set->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\210\260\344\270\200\345\215\212", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
