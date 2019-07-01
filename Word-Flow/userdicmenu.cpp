#include "userdicmenu.h"
#include "ui_userdicmenu.h"
#include <QDesktopWidget>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

UserDicMenu::UserDicMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDicMenu)
{
    newword = new NewWord;
    connect(newword, &NewWord::UserDicMenu, this, &UserDicMenu::show);
    delword = new DelWord;
    connect(delword, &DelWord::UserDicMenu, this, &UserDicMenu::show);
    testuser = new TestUser;
    connect(testuser, &TestUser::UserDicMenu, this, &UserDicMenu::show);
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(600, 400);
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->dic_show_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->lets_test_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->menu_back_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->hide_dic_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->add_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->delete_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    setWindowIcon(QIcon(":/new/prefix1/res/logo.png"));
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
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    ui->dic_show_Button->setHidden(0);
    this->close();
    newword->show();
}

void UserDicMenu::on_delete_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    ui->dic_show_Button->setHidden(0);
    delword->Show_db();
    this->close();
    delword->show();
}

void UserDicMenu::on_dic_show_Button_clicked()
{
    ui->hide_dic_Button->setHidden(0);
    ui->textBrowser->setHidden(0);
    ui->dic_show_Button->setHidden(1);

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/svetlana/Word-Flow/Word-Flow/UserDic.db3");
    db.open();

    QSqlQuery query;
    query.exec("SELECT id, English, Russian, valid FROM UsersWords");

    while (query.next())
    {
        if (query.value(3) == 1)
        {
            QString english = query.value(1).toString();
            QString russian = query.value(2).toString();
            ui->textBrowser->insertPlainText(english+" - "+russian+"\n");
        }
    }
}

void UserDicMenu::on_hide_dic_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    ui->dic_show_Button->setHidden(0);
}

void UserDicMenu::on_lets_test_Button_clicked()
{
    this->close();
    on_hide_dic_Button_clicked();
    testuser->show();
}
