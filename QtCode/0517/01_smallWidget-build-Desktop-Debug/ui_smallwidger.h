/********************************************************************************
** Form generated from reading UI file 'smallwidger.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLWIDGER_H
#define UI_SMALLWIDGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smallWidger
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *smallWidger)
    {
        if (smallWidger->objectName().isEmpty())
            smallWidger->setObjectName(QString::fromUtf8("smallWidger"));
        smallWidger->resize(279, 40);
        horizontalLayout = new QHBoxLayout(smallWidger);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(smallWidger);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(smallWidger);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        retranslateUi(smallWidger);

        QMetaObject::connectSlotsByName(smallWidger);
    } // setupUi

    void retranslateUi(QWidget *smallWidger)
    {
        smallWidger->setWindowTitle(QApplication::translate("smallWidger", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class smallWidger: public Ui_smallWidger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLWIDGER_H
