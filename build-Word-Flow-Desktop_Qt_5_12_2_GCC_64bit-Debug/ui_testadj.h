/********************************************************************************
** Form generated from reading UI file 'testadj.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTADJ_H
#define UI_TESTADJ_H

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

class Ui_TestAdj
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back_to_menu_Button;
    QPushButton *start_Button;
    QPushButton *next_Button;
    QPushButton *done_Button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *text_question;
    QLabel *mark_text;
    QLabel *text_word;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *word_1;
    QRadioButton *word_2;
    QLabel *msg_text;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *word_3;
    QRadioButton *word_4;
    QLabel *number_of_page;

    void setupUi(QDialog *TestAdj)
    {
        if (TestAdj->objectName().isEmpty())
            TestAdj->setObjectName(QString::fromUtf8("TestAdj"));
        TestAdj->resize(600, 409);
        horizontalLayoutWidget = new QWidget(TestAdj);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 310, 591, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back_to_menu_Button = new QPushButton(horizontalLayoutWidget);
        back_to_menu_Button->setObjectName(QString::fromUtf8("back_to_menu_Button"));

        horizontalLayout->addWidget(back_to_menu_Button);

        start_Button = new QPushButton(horizontalLayoutWidget);
        start_Button->setObjectName(QString::fromUtf8("start_Button"));

        horizontalLayout->addWidget(start_Button);

        next_Button = new QPushButton(horizontalLayoutWidget);
        next_Button->setObjectName(QString::fromUtf8("next_Button"));

        horizontalLayout->addWidget(next_Button);

        done_Button = new QPushButton(horizontalLayoutWidget);
        done_Button->setObjectName(QString::fromUtf8("done_Button"));

        horizontalLayout->addWidget(done_Button);

        verticalLayoutWidget = new QWidget(TestAdj);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 29, 581, 97));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        text_question = new QLabel(verticalLayoutWidget);
        text_question->setObjectName(QString::fromUtf8("text_question"));
        QFont font;
        font.setPointSize(14);
        text_question->setFont(font);

        verticalLayout->addWidget(text_question, 0, Qt::AlignHCenter);

        mark_text = new QLabel(verticalLayoutWidget);
        mark_text->setObjectName(QString::fromUtf8("mark_text"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        mark_text->setFont(font1);
        mark_text->setLayoutDirection(Qt::LeftToRight);
        mark_text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mark_text);

        text_word = new QLabel(verticalLayoutWidget);
        text_word->setObjectName(QString::fromUtf8("text_word"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        text_word->setFont(font2);
        text_word->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(text_word);

        groupBox = new QGroupBox(TestAdj);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 119, 581, 201));
        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 20, 581, 191));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        word_1 = new QRadioButton(horizontalLayoutWidget_2);
        word_1->setObjectName(QString::fromUtf8("word_1"));

        verticalLayout_2->addWidget(word_1);

        word_2 = new QRadioButton(horizontalLayoutWidget_2);
        word_2->setObjectName(QString::fromUtf8("word_2"));

        verticalLayout_2->addWidget(word_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        msg_text = new QLabel(horizontalLayoutWidget_2);
        msg_text->setObjectName(QString::fromUtf8("msg_text"));
        msg_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(msg_text);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        word_3 = new QRadioButton(horizontalLayoutWidget_2);
        word_3->setObjectName(QString::fromUtf8("word_3"));
        word_3->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_3->addWidget(word_3);

        word_4 = new QRadioButton(horizontalLayoutWidget_2);
        word_4->setObjectName(QString::fromUtf8("word_4"));
        word_4->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_3->addWidget(word_4);


        horizontalLayout_3->addLayout(verticalLayout_3);

        number_of_page = new QLabel(TestAdj);
        number_of_page->setObjectName(QString::fromUtf8("number_of_page"));
        number_of_page->setGeometry(QRect(530, 10, 54, 17));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        number_of_page->setFont(font3);

        retranslateUi(TestAdj);

        QMetaObject::connectSlotsByName(TestAdj);
    } // setupUi

    void retranslateUi(QDialog *TestAdj)
    {
        TestAdj->setWindowTitle(QApplication::translate("TestAdj", "Dialog", nullptr));
        back_to_menu_Button->setText(QApplication::translate("TestAdj", "\320\222 \320\274\320\265\320\275\321\216", nullptr));
        start_Button->setText(QApplication::translate("TestAdj", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        next_Button->setText(QApplication::translate("TestAdj", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        done_Button->setText(QApplication::translate("TestAdj", "\320\223\320\276\321\202\320\276\320\262", nullptr));
        text_question->setText(QApplication::translate("TestAdj", "\320\222\320\236\320\237\320\240\320\236\320\241", nullptr));
#ifndef QT_NO_TOOLTIP
        mark_text->setToolTip(QApplication::translate("TestAdj", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        mark_text->setText(QApplication::translate("TestAdj", "\320\242\320\253 \320\237\320\236 \320\230\320\242\320\236\320\223\320\243", nullptr));
#ifndef QT_NO_TOOLTIP
        text_word->setToolTip(QApplication::translate("TestAdj", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        text_word->setWhatsThis(QApplication::translate("TestAdj", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        text_word->setText(QApplication::translate("TestAdj", "\320\241\320\233\320\236\320\222\320\236", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("TestAdj", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QString());
        word_1->setText(QApplication::translate("TestAdj", "1 \320\262\320\260\321\200", nullptr));
        word_2->setText(QApplication::translate("TestAdj", "2 \320\262\320\260\321\200", nullptr));
        msg_text->setText(QApplication::translate("TestAdj", "\320\242\320\225\320\232\320\241\320\242 \320\237\320\236 \320\230\320\242\320\236\320\223\320\243", nullptr));
        word_3->setText(QApplication::translate("TestAdj", "3 \320\262\320\260\321\200", nullptr));
        word_4->setText(QApplication::translate("TestAdj", "4 \320\262\320\260\321\200", nullptr));
        number_of_page->setText(QApplication::translate("TestAdj", "\320\275\320\276\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAdj: public Ui_TestAdj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTADJ_H
