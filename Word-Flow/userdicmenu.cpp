#include "userdicmenu.h"
#include "ui_userdicmenu.h"

UserDicMenu::UserDicMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDicMenu)
{
    newword = new NewWord;
    connect(newword, &NewWord::UserDicMenu, this, &UserDicMenu::show);
    delword = new DelWord;
    connect(delword, &DelWord::UserDicMenu, this, &UserDicMenu::show);
    ui->setupUi(this);
    this->setFixedSize(600, 400);
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->dic_show_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->lets_test_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->menu_back_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->hide_dic_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->add_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->delete_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    setWindowIcon(QIcon(":/new/prefix1/353a9a937bc4945eed556e5617806aab.png"));
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

void UserDicMenu::on_add_Button_clicked()
{
    this->close();
    newword->show();
}

void UserDicMenu::on_delete_Button_clicked()
{
    this->close();
    delword->show();
}
