#include "testuser.h"
#include "ui_testuser.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <time.h>
#include <QMessageBox>
#include <QDebug>
#include <QButtonGroup>
#include <QDesktopWidget>

TestUser::TestUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestUser)
{
    ui->setupUi(this);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(600, 400);
    ui->back_to_menu_Button->setHidden(0);
    ui->start_Button->setHidden(0);
    ui->next_Button->setHidden(1);
    ui->done_Button->setHidden(1);
    ui->text_word->setText("");
    ui->text_question->setText("");
    ui->groupBox->setHidden(1);
    ui->msg_text->setHidden(1);
    ui->number_of_page->setHidden(1);
    ui->mark_text->setHidden(1);
    setWindowIcon(QIcon(":/new/prefix1/353a9a937bc4945eed556e5617806aab.png"));
}

TestUser::~TestUser()
{
    delete ui;
}

void TestUser::on_back_to_menu_Button_clicked()
{
    this->close();
    emit UserDicMenu();
}

void TestUser::on_start_Button_clicked()
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
       case QMessageBox::Yes:{
           QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
           db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
           db.open();
           QSqlQuery query;
           query.exec("SELECT valid FROM UsersWords WHERE valid = 1");
           int size = 0 ;
           while (query.next())
               size++;
           if (size > 10){
               msgBox.close();
               FillStart();
               ui->back_to_menu_Button->setHidden(1);
               ui->start_Button->setHidden(1);
               ui->next_Button->setHidden(0);
               ui->groupBox->setHidden(0);
               ui->word_1->setHidden(0);
               ui->word_2->setHidden(0);
               ui->word_3->setHidden(0);
               ui->word_4->setHidden(0);
               //RunTest();
           } else {
               QMessageBox msgBox_w;
               msgBox_w.setText("В словаре необходимо не менее 10 слов! Добавьте их, пожалуйста!");
               msgBox_w.setIcon(QMessageBox::Warning);
               msgBox_w.setStandardButtons(QMessageBox::Ok);
               msgBox_w.setDefaultButton(QMessageBox::Ok);
               int ret = msgBox_w.exec();
                  switch (ret) {
                  case QMessageBox::Ok:
                    msgBox.close();
                    break;
                 default:
                    msgBox.close();
                    break;
               }
            }
         break;}
      default:
         msgBox.close();
         break;
    }
}

void TestUser::FillStart(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
    db.open();
    QSqlQuery query;
    query.exec("SELECT valid FROM UsersWords WHERE valid = 1");
    int size = 0 ;
    while (query.next())
        size++;

    srand(time_t(nullptr));
    for(int i = 0; i < 10; i++){
        numbers_words[i].question_number = rand() % 2 + 1;
    }
    for(int i = 0; i < 10; i ++){
        numbers_words[i].word_answer_number = rand() % size + 1;
        for(int j = 0; j < i; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_answer_number){
                i --;
                break;
            }
        }

    }
    for(int i = 0; i < 10; i++){
        numbers_words[i].word_1_number = rand() % size + 1;
        for(int j = 0; j < 10; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_1_number){
                i --;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        numbers_words[i].word_2_number = rand() % size + 1;
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
        numbers_words[i].word_3_number = rand() % size + 1;
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
    for (int i = 0; i < 10; i++){
        qDebug() <<  numbers_words[i].question_number << numbers_words[i].word_answer_number << numbers_words[i].word_1_number << numbers_words[i].word_2_number << numbers_words[i].word_3_number;
    }
}
