/********************************************************************************
** Form generated from reading UI file 'userdicmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDICMENU_H
#define UI_USERDICMENU_H

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

class Ui_UserDicMenu
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *dic_show_Button;
    QPushButton *hide_dic_Button;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_4;
    QPushButton *lets_test_Button;
    QPushButton *add_Button;
    QPushButton *delete_Button;
    QPushButton *menu_back_Button;

    void setupUi(QDialog *UserDicMenu)
    {
        if (UserDicMenu->objectName().isEmpty())
            UserDicMenu->setObjectName(QString::fromUtf8("UserDicMenu"));
        UserDicMenu->resize(600, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8("353a9a937bc4945eed556e5617806aab.png"), QSize(), QIcon::Normal, QIcon::Off);
        UserDicMenu->setWindowIcon(icon);
        layoutWidget = new QWidget(UserDicMenu);
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

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lets_test_Button = new QPushButton(layoutWidget);
        lets_test_Button->setObjectName(QString::fromUtf8("lets_test_Button"));

        verticalLayout_4->addWidget(lets_test_Button);

        add_Button = new QPushButton(layoutWidget);
        add_Button->setObjectName(QString::fromUtf8("add_Button"));

        verticalLayout_4->addWidget(add_Button);

        delete_Button = new QPushButton(layoutWidget);
        delete_Button->setObjectName(QString::fromUtf8("delete_Button"));

        verticalLayout_4->addWidget(delete_Button);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        menu_back_Button = new QPushButton(layoutWidget);
        menu_back_Button->setObjectName(QString::fromUtf8("menu_back_Button"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        menu_back_Button->setFont(font);

        verticalLayout->addWidget(menu_back_Button);


        retranslateUi(UserDicMenu);

        QMetaObject::connectSlotsByName(UserDicMenu);
    } // setupUi

    void retranslateUi(QDialog *UserDicMenu)
    {
        UserDicMenu->setWindowTitle(QApplication::translate("UserDicMenu", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\320\271 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        dic_show_Button->setText(QApplication::translate("UserDicMenu", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        hide_dic_Button->setText(QApplication::translate("UserDicMenu", "\320\241\320\272\321\200\321\213\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        lets_test_Button->setText(QApplication::translate("UserDicMenu", "\320\237\321\200\320\276\320\262\320\265\321\200\321\214 \321\201\320\262\320\276\320\270 \320\267\320\275\320\260\320\275\320\270\321\217", nullptr));
        add_Button->setText(QApplication::translate("UserDicMenu", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\273\320\276\320\262\320\276", nullptr));
        delete_Button->setText(QApplication::translate("UserDicMenu", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\273\320\276\320\262\320\276", nullptr));
        menu_back_Button->setText(QApplication::translate("UserDicMenu", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDicMenu: public Ui_UserDicMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDICMENU_H
