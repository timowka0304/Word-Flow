/********************************************************************************
** Form generated from reading UI file 'testall.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTALL_H
#define UI_TESTALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAll
{
public:
    QLabel *number_of_page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *text_question;
    QLabel *mark_text;
    QLabel *text_word;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *word_1;
    QRadioButton *word_2;
    QLabel *msg_text;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *word_3;
    QRadioButton *word_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_to_menu_Button;
    QPushButton *start_Button;
    QPushButton *next_Button;
    QPushButton *done_Button;

    void setupUi(QDialog *TestAll)
    {
        if (TestAll->objectName().isEmpty())
            TestAll->setObjectName(QString::fromUtf8("TestAll"));
        TestAll->resize(600, 400);
        number_of_page = new QLabel(TestAll);
        number_of_page->setObjectName(QString::fromUtf8("number_of_page"));
        number_of_page->setGeometry(QRect(530, 0, 54, 17));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        number_of_page->setFont(font);
        verticalLayoutWidget = new QWidget(TestAll);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 19, 561, 97));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        text_question = new QLabel(verticalLayoutWidget);
        text_question->setObjectName(QString::fromUtf8("text_question"));
        QFont font1;
        font1.setPointSize(14);
        text_question->setFont(font1);
        text_question->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(text_question);

        mark_text = new QLabel(verticalLayoutWidget);
        mark_text->setObjectName(QString::fromUtf8("mark_text"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        mark_text->setFont(font2);
        mark_text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mark_text);

        text_word = new QLabel(verticalLayoutWidget);
        text_word->setObjectName(QString::fromUtf8("text_word"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        text_word->setFont(font3);
        text_word->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(text_word);

        groupBox = new QGroupBox(TestAll);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 561, 221));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 20, 561, 201));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        word_1 = new QRadioButton(widget);
        word_1->setObjectName(QString::fromUtf8("word_1"));

        verticalLayout_3->addWidget(word_1);

        word_2 = new QRadioButton(widget);
        word_2->setObjectName(QString::fromUtf8("word_2"));

        verticalLayout_3->addWidget(word_2);


        horizontalLayout->addLayout(verticalLayout_3);

        msg_text = new QLabel(widget);
        msg_text->setObjectName(QString::fromUtf8("msg_text"));
        QFont font4;
        font4.setPointSize(12);
        msg_text->setFont(font4);
        msg_text->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(msg_text);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        word_3 = new QRadioButton(widget);
        word_3->setObjectName(QString::fromUtf8("word_3"));
        word_3->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(word_3);

        word_4 = new QRadioButton(widget);
        word_4->setObjectName(QString::fromUtf8("word_4"));
        word_4->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(word_4);


        horizontalLayout->addLayout(verticalLayout_4);

        widget1 = new QWidget(TestAll);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 310, 561, 71));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        back_to_menu_Button = new QPushButton(widget1);
        back_to_menu_Button->setObjectName(QString::fromUtf8("back_to_menu_Button"));

        horizontalLayout_2->addWidget(back_to_menu_Button);

        start_Button = new QPushButton(widget1);
        start_Button->setObjectName(QString::fromUtf8("start_Button"));

        horizontalLayout_2->addWidget(start_Button);

        next_Button = new QPushButton(widget1);
        next_Button->setObjectName(QString::fromUtf8("next_Button"));

        horizontalLayout_2->addWidget(next_Button);

        done_Button = new QPushButton(widget1);
        done_Button->setObjectName(QString::fromUtf8("done_Button"));

        horizontalLayout_2->addWidget(done_Button);


        retranslateUi(TestAll);

        QMetaObject::connectSlotsByName(TestAll);
    } // setupUi

    void retranslateUi(QDialog *TestAll)
    {
        TestAll->setWindowTitle(QApplication::translate("TestAll", "Dialog", nullptr));
        number_of_page->setText(QApplication::translate("TestAll", "\320\275\320\276\320\274\320\265\321\200", nullptr));
        text_question->setText(QApplication::translate("TestAll", "\320\222\320\236\320\237\320\240\320\236\320\241", nullptr));
        mark_text->setText(QApplication::translate("TestAll", "\320\242\320\253 \320\237\320\236 \320\230\320\242\320\236\320\223\320\243", nullptr));
        text_word->setText(QApplication::translate("TestAll", "\320\241\320\233\320\236\320\222\320\236", nullptr));
        groupBox->setTitle(QString());
        word_1->setText(QApplication::translate("TestAll", "1 \320\262\320\260\321\200", nullptr));
        word_2->setText(QApplication::translate("TestAll", "2 \320\262\320\260\321\200", nullptr));
        msg_text->setText(QApplication::translate("TestAll", "\320\242\320\225\320\232\320\241\320\242 \320\237\320\236 \320\230\320\242\320\236\320\223\320\243", nullptr));
        word_3->setText(QApplication::translate("TestAll", "3 \320\262\320\260\321\200", nullptr));
        word_4->setText(QApplication::translate("TestAll", "4 \320\262\320\260\321\200", nullptr));
        back_to_menu_Button->setText(QApplication::translate("TestAll", "\320\222 \320\274\320\265\320\275\321\216", nullptr));
        start_Button->setText(QApplication::translate("TestAll", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        next_Button->setText(QApplication::translate("TestAll", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        done_Button->setText(QApplication::translate("TestAll", "\320\223\320\276\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAll: public Ui_TestAll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTALL_H
