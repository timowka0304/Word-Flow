#include "userdicmenu.h"
#include "ui_userdicmenu.h"

UserDicMenu::UserDicMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDicMenu)
{
    ui->setupUi(this);
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->save_Button->setHidden(1);
}

UserDicMenu::~UserDicMenu()
{
    delete ui;
}

void UserDicMenu::on_menu_back_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->dic_show_Button->setHidden(0);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    this->close();
    emit MainMenu();
}
