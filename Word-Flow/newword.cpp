#include "newword.h"
#include "ui_newword.h"
#include <QMessageBox>
#include <QRegExpValidator>

NewWord::NewWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewWord)
{
    QRegExp eng_v("[A-Za-z]*");
    QRegExp rus_v("[А-Яа-я]*");
    ui->setupUi(this);
    ui->eng_new_word->setValidator (new QRegExpValidator (eng_v, this));
    ui->rus_new_word->setValidator (new QRegExpValidator (rus_v, this));
    ui->eng_new_word->clear();
    ui->rus_new_word->clear();
    setWindowIcon(QIcon(":/353a9a937bc4945eed556e5617806aab.png"));
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
        QMessageBox msgBox;
        msgBox.setText("Слова успешно добавлены!");
        msgBox.setIcon(QMessageBox::Information);
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

}
