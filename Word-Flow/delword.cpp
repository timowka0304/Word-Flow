#include "delword.h"
#include "ui_delword.h"

DelWord::DelWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelWord)
{
    ui->setupUi(this);
    this->setFixedSize(400, 300);
}

DelWord::~DelWord()
{
    delete ui;
}

void DelWord::on_del_Button_clicked()
{

}

void DelWord::on_back_to_menu_Button_clicked()
{
    this->close();
    emit UserDicMenu();
}
