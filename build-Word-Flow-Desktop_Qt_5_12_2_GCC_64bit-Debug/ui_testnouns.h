/********************************************************************************
** Form generated from reading UI file 'testnouns.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTNOUNS_H
#define UI_TESTNOUNS_H

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

class Ui_Random
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *word_1;
    QRadioButton *word_2;
    QLabel *msg_text;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *word_3;
    QRadioButton *word_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *text_question;
    QLabel *mark_text;
    QLabel *text_word;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_to_menu_Button;
    QPushButton *start_Button;
    QPushButton *next_Button;
    QPushButton *done_Button;
    QLabel *number_of_page;

    void setupUi(QDialog *Random)
    {
        if (Random->objectName().isEmpty())
            Random->setObjectName(QString::fromUtf8("Random"));
        Random->resize(600, 400);
        groupBox = new QGroupBox(Random);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 110, 551, 221));
        groupBox->setCheckable(false);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(6, 21, 541, 201));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        word_1 = new QRadioButton(widget);
        word_1->setObjectName(QString::fromUtf8("word_1"));

        verticalLayout->addWidget(word_1);

        word_2 = new QRadioButton(widget);
        word_2->setObjectName(QString::fromUtf8("word_2"));

        verticalLayout->addWidget(word_2);


        horizontalLayout->addLayout(verticalLayout);

        msg_text = new QLabel(widget);
        msg_text->setObjectName(QString::fromUtf8("msg_text"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(msg_text->sizePolicy().hasHeightForWidth());
        msg_text->setSizePolicy(sizePolicy);
        msg_text->setMinimumSize(QSize(0, 0));
        msg_text->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setPointSize(12);
        msg_text->setFont(font);
        msg_text->setLayoutDirection(Qt::LeftToRight);
        msg_text->setAutoFillBackground(false);
        msg_text->setFrameShape(QFrame::NoFrame);
        msg_text->setAlignment(Qt::AlignCenter);
        msg_text->setWordWrap(true);

        horizontalLayout->addWidget(msg_text);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        word_3 = new QRadioButton(widget);
        word_3->setObjectName(QString::fromUtf8("word_3"));
        word_3->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(word_3);

        word_4 = new QRadioButton(widget);
        word_4->setObjectName(QString::fromUtf8("word_4"));
        word_4->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(word_4);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget = new QWidget(Random);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 551, 97));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        text_question = new QLabel(layoutWidget);
        text_question->setObjectName(QString::fromUtf8("text_question"));
        QFont font1;
        font1.setPointSize(14);
        font1.setItalic(false);
        text_question->setFont(font1);
        text_question->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(text_question);

        mark_text = new QLabel(layoutWidget);
        mark_text->setObjectName(QString::fromUtf8("mark_text"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        mark_text->setFont(font2);
        mark_text->setAlignment(Qt::AlignCenter);
        mark_text->setWordWrap(true);

        verticalLayout_3->addWidget(mark_text);

        text_word = new QLabel(layoutWidget);
        text_word->setObjectName(QString::fromUtf8("text_word"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        text_word->setFont(font3);
        text_word->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(text_word);

        layoutWidget1 = new QWidget(Random);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(19, 336, 551, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        back_to_menu_Button = new QPushButton(layoutWidget1);
        back_to_menu_Button->setObjectName(QString::fromUtf8("back_to_menu_Button"));

        horizontalLayout_2->addWidget(back_to_menu_Button);

        start_Button = new QPushButton(layoutWidget1);
        start_Button->setObjectName(QString::fromUtf8("start_Button"));

        horizontalLayout_2->addWidget(start_Button);

        next_Button = new QPushButton(layoutWidget1);
        next_Button->setObjectName(QString::fromUtf8("next_Button"));

        horizontalLayout_2->addWidget(next_Button);

        done_Button = new QPushButton(layoutWidget1);
        done_Button->setObjectName(QString::fromUtf8("done_Button"));

        horizontalLayout_2->addWidget(done_Button);

        number_of_page = new QLabel(Random);
        number_of_page->setObjectName(QString::fromUtf8("number_of_page"));
        number_of_page->setGeometry(QRect(530, 10, 54, 17));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        number_of_page->setFont(font4);

        retranslateUi(Random);

        QMetaObject::connectSlotsByName(Random);
    } // setupUi

    void retranslateUi(QDialog *Random)
    {
        Random->setWindowTitle(QApplication::translate("Random", "\320\242\320\265\321\201\321\202 \320\277\320\276 \320\241\321\203\321\211\320\265\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\274", nullptr));
        groupBox->setTitle(QString());
        word_1->setText(QApplication::translate("Random", "1 \320\262\320\260\321\200", nullptr));
        word_2->setText(QApplication::translate("Random", "2 \320\262\320\260\321\200", nullptr));
        msg_text->setText(QApplication::translate("Random", "\321\202\320\265\320\272\321\201\321\202 \320\277\320\276 \320\270\321\202\320\276\320\263\321\203", nullptr));
        word_3->setText(QApplication::translate("Random", "3 \320\262\320\260\321\200", nullptr));
        word_4->setText(QApplication::translate("Random", "4 \320\262\320\260\321\200", nullptr));
        text_question->setText(QApplication::translate("Random", "\320\222\320\236\320\237\320\240\320\236\320\241", nullptr));
        mark_text->setText(QApplication::translate("Random", "\320\242\320\253 \320\237\320\236 \320\230\320\242\320\236\320\223\320\243", nullptr));
        text_word->setText(QApplication::translate("Random", "\320\241\320\233\320\236\320\222\320\236", nullptr));
        back_to_menu_Button->setText(QApplication::translate("Random", "\320\222 \320\274\320\265\320\275\321\216", nullptr));
        start_Button->setText(QApplication::translate("Random", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        next_Button->setText(QApplication::translate("Random", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        done_Button->setText(QApplication::translate("Random", "\320\223\320\276\321\202\320\276\320\262", nullptr));
        number_of_page->setText(QApplication::translate("Random", "\320\275\320\276\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Random: public Ui_Random {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTNOUNS_H
