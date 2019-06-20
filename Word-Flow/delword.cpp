#include "delword.h"
#include "ui_delword.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

DelWord::DelWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelWord)
{
    ui->setupUi(this);
    this->setFixedSize(400, 300);
    Show_db();
}

DelWord::~DelWord()
{
    delete ui;
}
void DelWord::Show_db()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/UserDic.db3");
    db.open();
    QSqlQuery query;
    query.exec("SELECT UsersWords.English, UsersWords.Russian FROM UsersWords");

    QSqlTableModel *model =new QSqlTableModel;
    model->setTable("UsersWords");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Английский"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Русский"));
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
}

void DelWord::on_del_Button_clicked()
{

}

void DelWord::on_back_to_menu_Button_clicked()
{
    this->close();
    emit UserDicMenu();
}
