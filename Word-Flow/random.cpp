#include "random.h"
#include "ui_random.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <time.h>
#include <QMessageBox>

Random::Random(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Random)
{
    ui->setupUi(this);
    ui->back_to_menu_Button->setHidden(0);
    ui->start_Button->setHidden(0);
    ui->next_Button->setHidden(1);
    ui->done_Button->setHidden(1);
    ui->text_word->setText("");
    ui->text_question->setText("");
}

Random::~Random()
{
    delete ui;
}

void Random::FillStart(){
    srand(time(nullptr));
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
    for (int i = 0; i < 10; i++){
        mas_answers[i] = 0;
    }
    for(int i = 0; i < 10; i++){
        QString kue = QString::number(numbers_words[i].word_3_number);;
        ui->textBrowser->insertPlainText(kue + " ");
    }
}

void Random::on_start_Button_clicked()
{
    srand(time(nullptr));
    QMessageBox msgBox;
    msgBox.setText("Вы уверены, что хотите начать тест?");
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();
       switch (ret) {
       case QMessageBox::No:
         msgBox.close();
         break;
      case QMessageBox::Yes:
         msgBox.close();
         FillStart();
         break;
      default:
         msgBox.close();
         break;
    }
    ui->back_to_menu_Button->setHidden(1);
    ui->start_Button->setHidden(1);
    ui->next_Button->setHidden(0);
    RunTest();
}

void Random::on_back_to_menu_Button_clicked()
{
    this->close();
    emit NounsMenu();
}

void Random::on_next_Button_clicked()
{
    counter++;
    RunTest();
}

void Random::RunTest(){
    if(counter != 10){
        if(numbers_words[counter].question_number == 1){
            ENGtoRUS();
        }
        if(numbers_words[counter].question_number == 2){
            RUStoENG();
        }
    }
    if(counter == 10){
        ResultShow();
    }
}

void Random::ENGtoRUS(){
    ui->text_question->setText("Переведи с английского на русский слово ");
    int variants[4];
    srand(time(nullptr));
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 4; i ++){
        variants[i] = rand() % 4 + 1;
        for(int j = 0; j < i; j ++){
            if(variants[j] == variants[i]){
                i --;
                break;
            }
        }
    }
    /*ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 4; i++){
        QString kue = QString::number(variants[i]);;
        ui->textBrowser->insertPlainText(kue + " ");
    }
    ui->textBrowser->insertPlainText("\n");*/
    for(int i = 0; i < 4; i ++){
        switch(variants[i]){
            case 1: ui->word_1->setText(w[i]);
                break;
            case 2: ui->word_2->setText(w[i]);
                break;
            case 3: ui->word_3->setText(w[i]);
                break;
            case 4: ui->word_4->setText(w[i]);
                break;
        }
    }
}

void Random::RUStoENG(){
    ui->text_question->setText("Переведи с русского на английский слово ");
    int variants[4];
    srand(time(nullptr));
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 4; i ++){
        variants[i] = rand() % 4 + 1;
        for(int j = 0; j < i; j ++){
            if(variants[j] == variants[i]){
                i --;
                break;
            }
        }
    }
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 4; i++){
        QString kue = QString::number(variants[i]);;
        ui->textBrowser->insertPlainText(kue + " ");
    }
    ui->textBrowser->insertPlainText("\n");
    for(int i = 0; i < 4; i ++){
        switch(variants[i]){
            case 1: ui->word_1->setText(w[i]);
                break;
            case 2: ui->word_2->setText(w[i]);
                break;
            case 3: ui->word_3->setText(w[i]);
                break;
            case 4: ui->word_4->setText(w[i]);
                break;
        }
    }
}

void Random::ResultShow(){
   // ui->done_Button->setText(ui->word_1->text());
   /* QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/svetlana/Word-Flow/Word-Flow/Words.db3");
    db.open();

    QSqlQuery query;
    query.exec("SELECT id, english, russian FROM Words");

    while (query.next())
    {
        if (query.value(0) < 101){
            QString english = query.value(1).toString();
            QString russian = query.value(2).toString();
            ui->textBrowser->insertPlainText(english+" - "+russian+"\n");
        }
    } */
    ui->text_word->setHidden(1);
    ui->textBrowser->setHidden(1);
    ui->next_Button->setHidden(1);
    ui->text_question->setHidden(1);
    ui->done_Button->setHidden(0);
}

void Random::on_done_Button_clicked()
{
    this->close();
    ui->text_word->setHidden(0);
    ui->textBrowser->setHidden(0);
    ui->next_Button->setHidden(1);
    ui->text_question->setHidden(0);
    ui->done_Button->setHidden(1);
    ui->start_Button->setHidden(0);
    ui->back_to_menu_Button->setHidden(0);
    ui->textBrowser->clear();
    ui->text_word->setText("");
    ui->text_question->setText("");
    counter = 0;
    emit NounsMenu();
}
