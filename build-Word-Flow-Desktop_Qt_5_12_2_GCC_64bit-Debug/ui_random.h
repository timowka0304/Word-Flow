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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *word_1;
    QRadioButton *word_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *word_3;
    QRadioButton *word_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *text_question;
    QLabel *text_word;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_to_menu_Button;
    QPushButton *start_Button;
    QPushButton *next_Button;
    QPushButton *done_Button;

    void setupUi(QDialog *Random)
    {
        if (Random->objectName().isEmpty())
            Random->setObjectName(QString::fromUtf8("Random"));
        Random->resize(600, 400);
        groupBox = new QGroupBox(Random);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 110, 551, 221));
        groupBox->setCheckable(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 551, 201));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, -1, -1);
        word_1 = new QRadioButton(layoutWidget);
        word_1->setObjectName(QString::fromUtf8("word_1"));

        verticalLayout->addWidget(word_1);

        word_2 = new QRadioButton(layoutWidget);
        word_2->setObjectName(QString::fromUtf8("word_2"));

        verticalLayout->addWidget(word_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(160, -1, 5, -1);
        word_3 = new QRadioButton(layoutWidget);
        word_3->setObjectName(QString::fromUtf8("word_3"));
        word_3->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(word_3);

        word_4 = new QRadioButton(layoutWidget);
        word_4->setObjectName(QString::fromUtf8("word_4"));
        word_4->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(word_4);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(Random);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 551, 91));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        text_question = new QLabel(layoutWidget1);
        text_question->setObjectName(QString::fromUtf8("text_question"));
        QFont font;
        font.setPointSize(14);
        font.setItalic(false);
        text_question->setFont(font);
        text_question->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(text_question);

        text_word = new QLabel(layoutWidget1);
        text_word->setObjectName(QString::fromUtf8("text_word"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        text_word->setFont(font1);
        text_word->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(text_word);

        layoutWidget2 = new QWidget(Random);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(19, 336, 551, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        back_to_menu_Button = new QPushButton(layoutWidget2);
        back_to_menu_Button->setObjectName(QString::fromUtf8("back_to_menu_Button"));

        horizontalLayout_2->addWidget(back_to_menu_Button);

        start_Button = new QPushButton(layoutWidget2);
        start_Button->setObjectName(QString::fromUtf8("start_Button"));

        horizontalLayout_2->addWidget(start_Button);

        next_Button = new QPushButton(layoutWidget2);
        next_Button->setObjectName(QString::fromUtf8("next_Button"));

        horizontalLayout_2->addWidget(next_Button);

        done_Button = new QPushButton(layoutWidget2);
        done_Button->setObjectName(QString::fromUtf8("done_Button"));

        horizontalLayout_2->addWidget(done_Button);


        retranslateUi(Random);

        QMetaObject::connectSlotsByName(Random);
    } // setupUi

    void retranslateUi(QDialog *Random)
    {
        Random->setWindowTitle(QApplication::translate("Random", "\320\242\320\265\321\201\321\202 \320\277\320\276 \320\241\321\203\321\211\320\265\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\274", nullptr));
        groupBox->setTitle(QString());
        word_1->setText(QApplication::translate("Random", "RadioButton", nullptr));
        word_2->setText(QApplication::translate("Random", "RadioButton", nullptr));
        word_3->setText(QApplication::translate("Random", "RadioButton", nullptr));
        word_4->setText(QApplication::translate("Random", "RadioButton", nullptr));
        text_question->setText(QApplication::translate("Random", "\320\222\320\236\320\237\320\240\320\236\320\241", nullptr));
        text_word->setText(QApplication::translate("Random", "\320\241\320\233\320\236\320\222\320\236", nullptr));
        back_to_menu_Button->setText(QApplication::translate("Random", "\320\222 \320\274\320\265\320\275\321\216", nullptr));
        start_Button->setText(QApplication::translate("Random", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        next_Button->setText(QApplication::translate("Random", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        done_Button->setText(QApplication::translate("Random", "\320\223\320\276\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Random: public Ui_Random {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOM_H
