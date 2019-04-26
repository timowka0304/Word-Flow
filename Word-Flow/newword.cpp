#include "newword.h"
#include "ui_newword.h"
#include <QMessageBox>

NewWord::NewWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewWord)
{
    ui->setupUi(this);
    ui->eng_new_word->clear();
    ui->rus_new_word->clear();
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
    if (1){
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

}
