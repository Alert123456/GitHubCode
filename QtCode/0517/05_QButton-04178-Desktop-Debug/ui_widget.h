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
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rBMan;
    QRadioButton *rBWoman;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *cBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(746, 520);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 40, 171, 121));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 170, 55, 70));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rBMan = new QRadioButton(groupBox);
        rBMan->setObjectName(QString::fromUtf8("rBMan"));

        verticalLayout->addWidget(rBMan);

        rBWoman = new QRadioButton(groupBox);
        rBWoman->setObjectName(QString::fromUtf8("rBWoman"));

        verticalLayout->addWidget(rBWoman);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 170, 67, 70));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 280, 91, 114));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_3->addWidget(checkBox_3);

        cBox = new QCheckBox(groupBox_3);
        cBox->setObjectName(QString::fromUtf8("cBox"));

        verticalLayout_3->addWidget(cBox);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Widget", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        rBMan->setText(QApplication::translate("Widget", "\347\224\267", 0, QApplication::UnicodeUTF8));
        rBWoman->setText(QApplication::translate("Widget", "\345\245\263", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\251\232\345\220\246", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Widget", "\345\267\262\345\251\232", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Widget", "\346\234\252\345\251\232", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Widget", "\351\227\256\345\215\267\350\260\203\346\237\245", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Widget", "\344\273\267\346\240\274\345\256\236\346\203\240", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Widget", "\345\217\243\346\204\237\345\245\275", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\345\210\260\344\275\215", 0, QApplication::UnicodeUTF8));
        cBox->setText(QApplication::translate("Widget", "\350\200\201\346\235\277\345\250\230\345\245\275", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
