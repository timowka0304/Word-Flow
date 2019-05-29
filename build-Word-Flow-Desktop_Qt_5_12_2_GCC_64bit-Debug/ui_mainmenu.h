/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *nounc_category_button;
    QPushButton *adjectives_catogory_button;
    QPushButton *verbs_category_button;
    QVBoxLayout *verticalLayout;
    QPushButton *all_category_button;
    QPushButton *user_dic_button;
    QPushButton *progress_Button;
    QPushButton *exit_button;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(600, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8("353a9a937bc4945eed556e5617806aab.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainMenu->setWindowIcon(icon);
        layoutWidget = new QWidget(MainMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 11, 581, 381));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nounc_category_button = new QPushButton(layoutWidget);
        nounc_category_button->setObjectName(QString::fromUtf8("nounc_category_button"));

        horizontalLayout->addWidget(nounc_category_button);

        adjectives_catogory_button = new QPushButton(layoutWidget);
        adjectives_catogory_button->setObjectName(QString::fromUtf8("adjectives_catogory_button"));

        horizontalLayout->addWidget(adjectives_catogory_button);

        verbs_category_button = new QPushButton(layoutWidget);
        verbs_category_button->setObjectName(QString::fromUtf8("verbs_category_button"));

        horizontalLayout->addWidget(verbs_category_button);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        all_category_button = new QPushButton(layoutWidget);
        all_category_button->setObjectName(QString::fromUtf8("all_category_button"));

        verticalLayout->addWidget(all_category_button);

        user_dic_button = new QPushButton(layoutWidget);
        user_dic_button->setObjectName(QString::fromUtf8("user_dic_button"));

        verticalLayout->addWidget(user_dic_button);

        progress_Button = new QPushButton(layoutWidget);
        progress_Button->setObjectName(QString::fromUtf8("progress_Button"));
        progress_Button->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(progress_Button);

        exit_button = new QPushButton(layoutWidget);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exit_button->sizePolicy().hasHeightForWidth());
        exit_button->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        exit_button->setFont(font);

        verticalLayout->addWidget(exit_button);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        nounc_category_button->setText(QApplication::translate("MainMenu", "\320\241\321\203\321\211\320\265\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\265", nullptr));
        adjectives_catogory_button->setText(QApplication::translate("MainMenu", "\320\237\321\200\320\270\320\273\320\260\320\263\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265", nullptr));
        verbs_category_button->setText(QApplication::translate("MainMenu", "\320\223\320\273\320\260\320\263\320\276\320\273\321\213", nullptr));
        all_category_button->setText(QApplication::translate("MainMenu", "\320\236\320\261\321\211\320\260\321\217 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        user_dic_button->setText(QApplication::translate("MainMenu", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\320\271 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        progress_Button->setText(QApplication::translate("MainMenu", "\320\242\320\262\320\276\320\271 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201", nullptr));
        exit_button->setText(QApplication::translate("MainMenu", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
