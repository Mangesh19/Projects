/********************************************************************************
** Form generated from reading UI file 'Demo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO_H
#define UI_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Demo
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QWidget *Demo)
    {
        if (Demo->objectName().isEmpty())
            Demo->setObjectName(QStringLiteral("Demo"));
        Demo->resize(400, 300);
        label = new QLabel(Demo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 80, 151, 41));
        pushButton = new QPushButton(Demo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 190, 75, 23));
        label_2 = new QLabel(Demo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 20, 171, 31));

        retranslateUi(Demo);

        QMetaObject::connectSlotsByName(Demo);
    } // setupUi

    void retranslateUi(QWidget *Demo)
    {
        Demo->setWindowTitle(QApplication::translate("Demo", "Demo", 0));
        label->setText(QApplication::translate("Demo", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Demo", "next", 0));
        label_2->setText(QApplication::translate("Demo", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Demo: public Ui_Demo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO_H
