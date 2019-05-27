#include "random.h"
#include "ui_random.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <time.h>
#include <QMessageBox>
#include <QDebug>
#include <QButtonGroup>

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
    ui->groupBox->setHidden(1);
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/Words.db3");
    db.open();
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
        numbers_words[i].word_1_number = rand() % 100 + 1;
        for(int j = 0; j < 10; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_1_number){
                i --;
                break;
            }
        }
    }
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
    ui->groupBox->setHidden(0);
    RunTest();
}

void Random::on_back_to_menu_Button_clicked()
{
    this->close();
    emit NounsMenu();
}

void Random::on_next_Button_clicked()
{
    QButtonGroup group;
    QList<QRadioButton *> allButtons = ui->groupBox->findChildren<QRadioButton *>();
    for(int i = 0; i < allButtons.size(); ++i){
            group.addButton(allButtons[i],i);
    }
    qDebug() << group.checkedId();
    qDebug() << group.checkedButton();

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
    QSqlQuery query_eng_to_rus;
    query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_answer_number));

    ui->text_question->setText("Переведи с английского на русский слово ");
    while (query_eng_to_rus.next()){
        ui->text_word->setText(query_eng_to_rus.value(1).toString());
    }

    int variants[4];
    srand(time(nullptr));
    for(int i = 0; i < 4; i ++){
        variants[i] = rand() % 4 + 1;
        for(int j = 0; j < i; j ++){
            if(variants[j] == variants[i]){
                i --;
                break;
            }
        }
    }

    //qDebug() << numbers_words[counter].word_answer_number << " " << numbers_words[counter].word_1_number << " " << numbers_words[counter].word_2_number << " " << numbers_words[counter].word_3_number;

    QString word;
    for(int i = 0; i < 4; i ++){
        switch(i){
            case 0:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_answer_number));
                while (query_eng_to_rus.next()){
                    word = query_eng_to_rus.value(2).toString();
                }
                break;
            case 1:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_1_number));
                while (query_eng_to_rus.next()){
                    word = query_eng_to_rus.value(2).toString();
                }
                break;
            case 2:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_2_number));
                while (query_eng_to_rus.next()){
                    word = query_eng_to_rus.value(2).toString();
                }
                break;
            case 3:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_3_number));
                while (query_eng_to_rus.next()){
                    word = query_eng_to_rus.value(2).toString();
                }
                break;
        }
        switch(variants[i]){
            case 1: ui->word_1->setText(word);
                break;
            case 2: ui->word_2->setText(word);
                break;
            case 3: ui->word_3->setText(word);
                break;
            case 4: ui->word_4->setText(word);
                break;
        }
    }
}

void Random::RUStoENG(){
    QSqlQuery query_rus_to_eng;
    query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_answer_number));

    ui->text_question->setText("Переведи с русского на английский слово ");
    while (query_rus_to_eng.next()){
        ui->text_word->setText(query_rus_to_eng.value(2).toString());
    }

    int variants[4];
    srand(time(nullptr));
    for(int i = 0; i < 4; i ++){
        variants[i] = rand() % 4 + 1;
        for(int j = 0; j < i; j ++){
            if(variants[j] == variants[i]){
                i --;
                break;
            }
        }
    }

    QString word;
    for(int i = 0; i < 4; i ++){
        switch(i){
            case 0:
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_answer_number));
                while (query_rus_to_eng.next()){
                    word = query_rus_to_eng.value(1).toString();
                }
                break;
            case 1:
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_1_number));
                while (query_rus_to_eng.next()){
                    word = query_rus_to_eng.value(1).toString();
                }
                break;
            case 2:
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_2_number));
                while (query_rus_to_eng.next()){
                    word = query_rus_to_eng.value(1).toString();
                }
                break;
            case 3:
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM Words WHERE id = %1").arg(numbers_words[counter].word_3_number));
                while (query_rus_to_eng.next()){
                    word = query_rus_to_eng.value(1).toString();
                }
                break;
        }
        switch(variants[i]){
            case 1: ui->word_1->setText(word);
                break;
            case 2: ui->word_2->setText(word);
                break;
            case 3: ui->word_3->setText(word);
                break;
            case 4: ui->word_4->setText(word);
                break;
        }
    }
}

void Random::ResultShow(){
    ui->text_word->setHidden(1);
    ui->next_Button->setHidden(1);
    ui->text_question->setHidden(1);
    ui->done_Button->setHidden(0);
    ui->groupBox->setHidden(1);

}

void Random::on_done_Button_clicked()
{
    this->close();
    ui->text_word->setHidden(0);
    ui->next_Button->setHidden(1);
    ui->text_question->setHidden(0);
    ui->done_Button->setHidden(1);
    ui->start_Button->setHidden(0);
    ui->back_to_menu_Button->setHidden(0);
    ui->text_word->setText("");
    ui->text_question->setText("");
    counter = 0;
    emit NounsMenu();
}
