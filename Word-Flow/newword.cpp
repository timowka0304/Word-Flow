#include "newword.h"
#include "ui_newword.h"
#include <QMessageBox>
#include <QRegExpValidator>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

NewWord::NewWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewWord)
{
    ui->setupUi(this);
    this->setFixedSize(400, 300);
    QRegExp eng_v("[a-z]*");
    QRegExp rus_v("[а-я]*");
    ui->eng_new_word->setValidator (new QRegExpValidator (eng_v, this));
    ui->rus_new_word->setValidator (new QRegExpValidator (rus_v, this));
    ui->eng_new_word->clear();
    ui->rus_new_word->clear();
    ui->save_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->cancel_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    setWindowIcon(QIcon(":/new/prefix1/353a9a937bc4945eed556e5617806aab.png"));
}

NewWord::~NewWord()
{
    delete ui;
}

void NewWord::on_cancel_Button_clicked()
{
    this->close();
    emit UserDicMenu();
}

void NewWord::on_save_Button_clicked()
{
    if ((ui->eng_new_word->text().isEmpty()) || (ui->rus_new_word->text().isEmpty())){
        QMessageBox msgBox;
        msgBox.setText("Поля неверно заполнены! Проверьте правильность введенных данных");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Ok:
             msgBox.close();
             break;
          default:
             msgBox.close();
             break;
        }
    }
    else {

        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
        db.open();

        QSqlQuery query;
        query.exec(QStringLiteral("INSERT INTO UsersWords (English, Russian, valid) VALUES ('%1', '%2', 1)").arg(ui->eng_new_word->text()).arg(ui->rus_new_word->text()));
        qDebug() << ui->eng_new_word->text();
        QMessageBox msgBox;
        msgBox.setText("Слова успешно добавлены!");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        int ret = msgBox.exec();
           switch (ret) {
           case QMessageBox::Ok:
             msgBox.close();
             ui->eng_new_word->clear();
             ui->rus_new_word->clear();
             break;
          default:
             msgBox.close();
             break;
        }
    }

}
