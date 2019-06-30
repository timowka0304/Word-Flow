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
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(600, 400);
    QPixmap myPixmap(":/new/prefix1/polzovatel.jpg");
    ui->groupBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->back_to_menu_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->next_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->done_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->start_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->clean_Button->setHidden(1);
    ui->label->setPixmap(myPixmap);
    ui->label->setHidden(0);
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
           if (size > 9){
               msgBox.close();
               FillStart();
               ui->label->setHidden(1);
               ui->back_to_menu_Button->setHidden(1);
               ui->start_Button->setHidden(1);
               ui->next_Button->setHidden(0);
               ui->groupBox->setHidden(0);
               ui->word_1->setHidden(0);
               ui->word_2->setHidden(0);
               ui->word_3->setHidden(0);
               ui->word_4->setHidden(0);
               RunTest();
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
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
    db.open();
    QSqlQuery query;
    query.exec("SELECT id FROM UsersWords WHERE valid = 1");
    int size = 0 ;
    while (query.next())
        size++;
    int *mas = new int [size];
    query.exec("SELECT id FROM UsersWords WHERE valid = 1");
    int i = 0;
    while (query.next()){
        mas[i] = query.value(0).toInt();
        qDebug() << "[" << i << "]" << mas[i];
        i++;
    } //заполнение массива с id существющих слов

    srand(time(nullptr));
    for(int i = 0; i < 10; i++){
        numbers_words[i].question_number = rand() % 2 + 1;
    }
    for(int i = 0; i < 10; i ++){
        numbers_words[i].word_answer_number = mas[rand() % size];
        for(int j = 0; j < i; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_answer_number){
                i --;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        numbers_words[i].word_1_number =  mas[rand() % size];
        for(int j = i; j < 10; j ++){
            if(numbers_words[j].word_answer_number == numbers_words[i].word_1_number){
                i --;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        numbers_words[i].word_2_number =  mas[rand() % size];
        for(int j = i; j < 10; j ++){
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
        numbers_words[i].word_3_number =  mas[rand() % size];
        for(int j = i; j < 10; j ++){
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
        qDebug() << numbers_words[i].question_number << numbers_words[i].word_answer_number << numbers_words[i].word_1_number << numbers_words[i].word_2_number << numbers_words[i].word_3_number;
    }
}

void TestUser::RunTest(){
    if(counter != 10){
        ui->number_of_page->setHidden(0);
        ui->number_of_page->setText(QStringLiteral("%1 / 10").arg(counter+1));
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

void TestUser::ENGtoRUS(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
    db.open();
    QSqlQuery query_eng_to_rus;
    query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_answer_number));

    ui->text_question->setText("Переведите с английского на русский слово ");
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
    QString word;
    for(int i = 0; i < 4; i ++){
        switch(i){
            case 0:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_answer_number));
                while (query_eng_to_rus.next()){
                    word = query_eng_to_rus.value(2).toString();
                }
                break;
            case 1:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_1_number));
                while (query_eng_to_rus.next()){
                    word = query_eng_to_rus.value(2).toString();
                }
                break;
            case 2:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_2_number));
                while (query_eng_to_rus.next()){
                    word = query_eng_to_rus.value(2).toString();
                }
                break;
            case 3:
                query_eng_to_rus.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_3_number));
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

void TestUser::RUStoENG(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
    db.open();
    QSqlQuery query_rus_to_eng;
    query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_answer_number));

    ui->text_question->setText("Переведите с русского на английский слово ");
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
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_answer_number));
                while (query_rus_to_eng.next()){
                    word = query_rus_to_eng.value(1).toString();
                }
                break;
            case 1:
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_1_number));
                while (query_rus_to_eng.next()){
                    word = query_rus_to_eng.value(1).toString();
                }
                break;
            case 2:
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_2_number));
                while (query_rus_to_eng.next()){
                    word = query_rus_to_eng.value(1).toString();
                }
                break;
            case 3:
                query_rus_to_eng.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_3_number));
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

void TestUser::ResultShow(){
    ui->number_of_page->setHidden(1);
    ui->text_word->setHidden(1);
    ui->next_Button->setHidden(1);
    ui->text_question->setHidden(1);
    ui->done_Button->setHidden(0);
    ui->groupBox->setHidden(0);
    ui->word_1->setHidden(1);
    ui->word_2->setHidden(1);
    ui->word_3->setHidden(1);
    ui->word_4->setHidden(1);
    ui->msg_text->setHidden(0);
    ui->mark_text->setHidden(0);
    sum = 0;
    for (int i = 0; i < 10; i++){
        sum += mas_answers[i];
    }
    int proc, h;
    if (sum <= 3) proc = 0;
    if ((sum > 3) and (sum <= 7)) proc = 1;
    if (sum > 7) proc = 2;
    switch (proc) {
        case 0:
            h = rand()%3;
            if (h == 0) ui->mark_text->setText("Плохо, конечно, но не отчаивайтесь! Попробуйте запомнить слова лучше!");
            if (h == 1) ui->mark_text->setText("Не расстраивайтесь. Еще не все потеряно! Всегда есть возможность попробовать снова!");
            if (h == 2) ui->mark_text->setText("Результат так себе. Возвращайтесь, когда повторите слова!");
            break;
        case 1:
            h = rand()%3;
            if (h == 0) ui->mark_text->setText("Хороший результат! Еще немного и Вы будете знать все слова!");
            if (h == 1) ui->mark_text->setText("Вы неплохо справились! Продолжайте в том же духе!");
            if (h == 2) ui->mark_text->setText("Еще чуть-чуть и Вы будете у цели!");
            break;
        case 2:
            h = rand()%3;
            if (h == 0) ui->mark_text->setText("Товарищ Полиглот, Вам точно нужна наша помощь? Вы и без нас хорошо справляетесь! Отлично!");
            if (h == 1) ui->mark_text->setText("Вы отлично справились!");
            if (h == 2) ui->mark_text->setText("Отлично! Вы достихли успеха в запоминании слов!");
            break;
    }
    ui->msg_text->setText(QStringLiteral("Вы верно ответили на %1 из 10\nВы успешны в запоминании своих слов на %2%").arg(sum).arg(sum*10));
}

void TestUser::on_done_Button_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/Progress.db3");
    db.open();

    QSqlQuery query;
    query.exec(QStringLiteral("INSERT INTO Progress VALUES (%1, %2, 10, 'Пользовательская')").arg(sum*10).arg(sum));

    this->close();
    ui->label->setHidden(0);
    ui->text_word->setHidden(0);
    ui->next_Button->setHidden(1);
    ui->text_question->setHidden(0);
    ui->done_Button->setHidden(1);
    ui->start_Button->setHidden(0);
    ui->back_to_menu_Button->setHidden(0);
    ui->text_word->setText("");
    ui->text_question->setText("");
    ui->msg_text->setHidden(1);
    ui->groupBox->setHidden(1);
    ui->mark_text->setHidden(1);
    counter = 0;
    emit UserDicMenu();
}

void TestUser::Warning(int flag, QString eng, QString rus){
    QMessageBox msgBox;
    msgBox.setWindowTitle("Ваш выбор");
    int ret;
    if (flag == 0){
        msgBox.setText(QStringLiteral("Не верно!\n\nЗапомните:\n%1 = %2").arg(eng).arg(rus));
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok);
        ret = msgBox.exec();
        switch (ret) {
           case QMessageBox::Ok:
             msgBox.close();
             break;
           default:
              msgBox.close();
              break;
        }
    } else {
        msgBox.setText(QStringLiteral("Верно!\n\nПовторим:\n%1 = %2").arg(eng).arg(rus));
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setStandardButtons(QMessageBox::Ok);
        ret = msgBox.exec();
        switch (ret) {
           case QMessageBox::Ok:
             msgBox.close();
             break;
           default:
              msgBox.close();
              break;
        }
    }
}

void TestUser::on_next_Button_clicked(){
    QButtonGroup group;
    QList<QRadioButton *> allButtons = ui->groupBox->findChildren<QRadioButton *>();
    for(int i = 0; i < allButtons.size(); ++i){
            group.addButton(allButtons[i],i);
    }
    if ((group.checkedId() == -1)||(group.checkedId() == 4)){
        QMessageBox msgBox;
        msgBox.setText("Так не пойдет! Выберите вариант ответа!");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok);
        int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Ok:
             msgBox.close();
             break;
          default:
             msgBox.close();
             break;
        }
    } else {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
        db.open();
        QString needed_eng, needed_rus;
        QString choosen = group.button(group.checkedId())->text();
        QSqlQuery query;
        query.exec(QStringLiteral("SELECT id, English, Russian FROM UsersWords WHERE id = %1").arg(numbers_words[counter].word_answer_number));
        while (query.next()){
            needed_eng = query.value(1).toString();
            needed_rus = query.value(2).toString();
        }
        if ((choosen == needed_eng) or (choosen == needed_rus)){
            mas_answers[counter] = 1;
            Warning(1, needed_eng, needed_rus);
        } else {
            Warning(0, needed_eng, needed_rus);
        }
        ui->clean_Button->setChecked(1);
        counter++;
        RunTest();
    }
}
