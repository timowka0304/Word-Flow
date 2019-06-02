#include "allmenu.h"
#include "ui_allmenu.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

AllMenu::AllMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllMenu)
{
    ui->setupUi(this);
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
}

AllMenu::~AllMenu()
{
    delete ui;
}

void AllMenu::on_menu_back_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->dic_show_Button->setHidden(0);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    this->close();
    emit MainMenu();
}

void AllMenu::on_dic_show_Button_clicked()
{
    ui->hide_dic_Button->setHidden(0);
    ui->textBrowser->setHidden(0);
    ui->dic_show_Button->setHidden(1);

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/svetlana/Word-Flow/Word-Flow/Words.db3");
    db.open();

    QSqlQuery query;
    query.exec("SELECT id, english, russian FROM Words");

    while (query.next())
    {
        QString english = query.value(1).toString();
        QString russian = query.value(2).toString();
        ui->textBrowser->insertPlainText(english+" - "+russian+"\n");
     }
}

void AllMenu::on_hide_dic_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    ui->dic_show_Button->setHidden(0);
}
