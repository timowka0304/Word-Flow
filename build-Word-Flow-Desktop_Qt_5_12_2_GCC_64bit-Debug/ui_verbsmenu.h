/********************************************************************************
** Form generated from reading UI file 'verbsmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERBSMENU_H
#define UI_VERBSMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerbsMenu
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *dic_show_Button;
    QPushButton *hide_dic_Button;
    QTextBrowser *textBrowser;
    QPushButton *lets_test_Button;
    QPushButton *menu_back_Button;

    void setupUi(QDialog *VerbsMenu)
    {
        if (VerbsMenu->objectName().isEmpty())
            VerbsMenu->setObjectName(QString::fromUtf8("VerbsMenu"));
        VerbsMenu->resize(600, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8("353a9a937bc4945eed556e5617806aab.png"), QSize(), QIcon::Normal, QIcon::Off);
        VerbsMenu->setWindowIcon(icon);
        layoutWidget = new QWidget(VerbsMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dic_show_Button = new QPushButton(layoutWidget);
        dic_show_Button->setObjectName(QString::fromUtf8("dic_show_Button"));

        verticalLayout_3->addWidget(dic_show_Button);

        hide_dic_Button = new QPushButton(layoutWidget);
        hide_dic_Button->setObjectName(QString::fromUtf8("hide_dic_Button"));

        verticalLayout_3->addWidget(hide_dic_Button);


        horizontalLayout->addLayout(verticalLayout_3);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        lets_test_Button = new QPushButton(layoutWidget);
        lets_test_Button->setObjectName(QString::fromUtf8("lets_test_Button"));

        horizontalLayout->addWidget(lets_test_Button);


        verticalLayout->addLayout(horizontalLayout);

        menu_back_Button = new QPushButton(layoutWidget);
        menu_back_Button->setObjectName(QString::fromUtf8("menu_back_Button"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        menu_back_Button->setFont(font);

        verticalLayout->addWidget(menu_back_Button);


        retranslateUi(VerbsMenu);

        QMetaObject::connectSlotsByName(VerbsMenu);
    } // setupUi

    void retranslateUi(QDialog *VerbsMenu)
    {
        VerbsMenu->setWindowTitle(QApplication::translate("VerbsMenu", "\320\223\320\273\320\260\320\263\320\276\320\273\321\213", nullptr));
        dic_show_Button->setText(QApplication::translate("VerbsMenu", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        hide_dic_Button->setText(QApplication::translate("VerbsMenu", "\320\241\320\272\321\200\321\213\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        lets_test_Button->setText(QApplication::translate("VerbsMenu", "\320\237\321\200\320\276\320\262\320\265\321\200\321\214 \321\201\320\262\320\276\320\270 \320\267\320\275\320\260\320\275\320\270\321\217", nullptr));
        menu_back_Button->setText(QApplication::translate("VerbsMenu", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VerbsMenu: public Ui_VerbsMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERBSMENU_H
