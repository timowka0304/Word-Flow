#include "random.h"
#include "ui_random.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <time.h>

struct Numbers{
    int question_number;
    int word_answer_number;
    int word_1_number;
    int word_2_number;
    int word_3_number;
};

Random::Random(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Random)
{
    ui->setupUi(this);
    srand(time(0));

    Numbers numbers_words[10];
    for(int i = 0; i < 10; i++){
        numbers_words[i].question_number = rand() % 2 + 1;
    }

    for(int i = 0; i < 10; i++){
        QString que = QString::number(numbers_words[i].question_number);;
        ui->textBrowser->insertPlainText(que + " ");
    }
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 10; i ++){
        numbers_words[i].word_answer_number = rand() % 100 + 1;
        for(int j = 0; j < i; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_answer_number){
                i --;
                break;
            }
        }

    }
    for(int i = 0; i < 10; i++){
        QString kue = QString::number(numbers_words[i].word_answer_number);;
        ui->textBrowser->insertPlainText(kue + " ");
    }
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 10; i++){
        numbers_words[i].word_1_number = rand() % 100 + 1;
        for(int j = 0; j < 10; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_1_number){
                i --;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        QString kue = QString::number(numbers_words[i].word_1_number);;
        ui->textBrowser->insertPlainText(kue + " ");
    }
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 10; i++){
        numbers_words[i].word_2_number = rand() % 100 + 1;
        for(int j = 0; j < 10; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_2_number){
                i --;
                break;
            }
            if(numbers_words[i].word_1_number == numbers_words[i].word_2_number){
                i --;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        QString kue = QString::number(numbers_words[i].word_2_number);;
        ui->textBrowser->insertPlainText(kue + " ");
    }
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 10; i++){
        numbers_words[i].word_3_number = rand() % 100 + 1;
        for(int j = 0; j < 10; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_3_number){
                i --;
                break;
            }
            if(numbers_words[i].word_1_number == numbers_words[i].word_3_number){
                i --;
                break;
            }
            if(numbers_words[i].word_2_number == numbers_words[i].word_3_number){
                i --;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        QString kue = QString::number(numbers_words[i].word_3_number);;
        ui->textBrowser->insertPlainText(kue + " ");
    }

    /*QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/Words.db3");
    db.open();

    QSqlQuery query;
    query.exec("SELECT id, english, russian FROM Words");

    while (query.next())
    {
        if ((query.value(0) > 100) && (query.value(0) < 201)){
            QString english = query.value(1).toString();
            QString russian = query.value(2).toString();
        }
    }*/
}

Random::~Random()
{
    delete ui;
}
