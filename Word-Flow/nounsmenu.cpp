#include "nounsmenu.h"
#include "ui_nounsmenu.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

NounsMenu::NounsMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NounsMenu)
{
    ui->setupUi(this);
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
}

NounsMenu::~NounsMenu()
{
    delete ui;
}

void NounsMenu::on_menu_back_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->dic_show_Button->setHidden(0);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    this->close();
    emit MainMenu();
}

void NounsMenu::on_dic_show_Button_clicked()
{
    ui->hide_dic_Button->setHidden(0);
    ui->textBrowser->setHidden(0);
    ui->dic_show_Button->setHidden(1);

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/Words.db3");
    db.open();

    QSqlQuery query;
    query.exec("SELECT id, english, russian FROM Words");

    while (query.next())
    {
        if (query.value(0) < 101){
            QString english = query.value(1).toString();
            QString russian = query.value(2).toString();
            ui->textBrowser->insertPlainText(english+" - "+russian+"\n");
        }
    }
}

void NounsMenu::on_hide_dic_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    ui->dic_show_Button->setHidden(0);
}