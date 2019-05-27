/********************************************************************************
** Form generated from reading UI file 'random.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOM_H
#define UI_RANDOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Random
{
public:
    QTextBrowser *textBrowser;
    QLabel *text_question;
    QPushButton *start_Button;
    QPushButton *back_to_menu_Button;
    QPushButton *next_Button;
    QLabel *text_word;
    QPushButton *done_Button;
    QRadioButton *word_1;
    QRadioButton *word_2;
    QRadioButton *word_3;
    QRadioButton *word_4;

    void setupUi(QDialog *Random)
    {
        if (Random->objectName().isEmpty())
            Random->setObjectName(QString::fromUtf8("Random"));
        Random->resize(600, 400);
        textBrowser = new QTextBrowser(Random);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 120, 291, 161));
        text_question = new QLabel(Random);
        text_question->setObjectName(QString::fromUtf8("text_question"));
        text_question->setGeometry(QRect(20, 30, 251, 16));
        start_Button = new QPushButton(Random);
        start_Button->setObjectName(QString::fromUtf8("start_Button"));
        start_Button->setGeometry(QRect(230, 360, 80, 25));
        back_to_menu_Button = new QPushButton(Random);
        back_to_menu_Button->setObjectName(QString::fromUtf8("back_to_menu_Button"));
        back_to_menu_Button->setGeometry(QRect(140, 360, 80, 25));
        next_Button = new QPushButton(Random);
        next_Button->setObjectName(QString::fromUtf8("next_Button"));
        next_Button->setGeometry(QRect(320, 360, 80, 25));
        text_word = new QLabel(Random);
        text_word->setObjectName(QString::fromUtf8("text_word"));
        text_word->setGeometry(QRect(370, 30, 54, 17));
        done_Button = new QPushButton(Random);
        done_Button->setObjectName(QString::fromUtf8("done_Button"));
        done_Button->setGeometry(QRect(430, 360, 80, 25));
        word_1 = new QRadioButton(Random);
        word_1->setObjectName(QString::fromUtf8("word_1"));
        word_1->setGeometry(QRect(430, 130, 96, 23));
        word_2 = new QRadioButton(Random);
        word_2->setObjectName(QString::fromUtf8("word_2"));
        word_2->setGeometry(QRect(430, 160, 96, 23));
        word_3 = new QRadioButton(Random);
        word_3->setObjectName(QString::fromUtf8("word_3"));
        word_3->setGeometry(QRect(430, 190, 96, 23));
        word_4 = new QRadioButton(Random);
        word_4->setObjectName(QString::fromUtf8("word_4"));
        word_4->setGeometry(QRect(430, 220, 96, 23));

        retranslateUi(Random);

        QMetaObject::connectSlotsByName(Random);
    } // setupUi

    void retranslateUi(QDialog *Random)
    {
        Random->setWindowTitle(QApplication::translate("Random", "\320\242\320\265\321\201\321\202 \320\277\320\276 \320\241\321\203\321\211\320\265\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\274", nullptr));
        text_question->setText(QApplication::translate("Random", "TextLabel", nullptr));
        start_Button->setText(QApplication::translate("Random", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        back_to_menu_Button->setText(QApplication::translate("Random", "\320\222 \320\274\320\265\320\275\321\216", nullptr));
        next_Button->setText(QApplication::translate("Random", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        text_word->setText(QApplication::translate("Random", "\320\241\320\233\320\236\320\222\320\236", nullptr));
        done_Button->setText(QApplication::translate("Random", "\320\223\320\276\321\202\320\276\320\262", nullptr));
        word_1->setText(QApplication::translate("Random", "RadioButton", nullptr));
        word_2->setText(QApplication::translate("Random", "RadioButton", nullptr));
        word_3->setText(QApplication::translate("Random", "RadioButton", nullptr));
        word_4->setText(QApplication::translate("Random", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Random: public Ui_Random {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOM_H
