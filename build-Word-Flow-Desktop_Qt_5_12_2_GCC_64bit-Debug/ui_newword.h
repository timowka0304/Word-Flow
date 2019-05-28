/********************************************************************************
** Form generated from reading UI file 'newword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWORD_H
#define UI_NEWWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewWord
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *eng_new_word;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *rus_new_word;
    QPushButton *save_Button;
    QPushButton *cancel_Button;

    void setupUi(QDialog *NewWord)
    {
        if (NewWord->objectName().isEmpty())
            NewWord->setObjectName(QString::fromUtf8("NewWord"));
        NewWord->resize(400, 300);
        widget = new QWidget(NewWord);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 381, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setSizeIncrement(QSize(0, 0));
        label->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        eng_new_word = new QLineEdit(widget);
        eng_new_word->setObjectName(QString::fromUtf8("eng_new_word"));
        eng_new_word->setAutoFillBackground(false);

        horizontalLayout->addWidget(eng_new_word);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        rus_new_word = new QLineEdit(widget);
        rus_new_word->setObjectName(QString::fromUtf8("rus_new_word"));

        horizontalLayout_2->addWidget(rus_new_word);


        verticalLayout->addLayout(horizontalLayout_2);

        save_Button = new QPushButton(widget);
        save_Button->setObjectName(QString::fromUtf8("save_Button"));

        verticalLayout->addWidget(save_Button);

        cancel_Button = new QPushButton(widget);
        cancel_Button->setObjectName(QString::fromUtf8("cancel_Button"));

        verticalLayout->addWidget(cancel_Button);


        retranslateUi(NewWord);

        QMetaObject::connectSlotsByName(NewWord);
    } // setupUi

    void retranslateUi(QDialog *NewWord)
    {
        NewWord->setWindowTitle(QApplication::translate("NewWord", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \321\201\320\273\320\276\320\262\320\260", nullptr));
        label->setText(QApplication::translate("NewWord", " ENG: ", nullptr));
        eng_new_word->setInputMask(QString());
        label_2->setText(QApplication::translate("NewWord", " RUS:  ", nullptr));
        save_Button->setText(QApplication::translate("NewWord", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        cancel_Button->setText(QApplication::translate("NewWord", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWord: public Ui_NewWord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWORD_H
