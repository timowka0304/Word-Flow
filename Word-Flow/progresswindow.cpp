#include "progresswindow.h"
#include "ui_progresswindow.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

ProgressWindow::ProgressWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgressWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/Progress.db3");
    db.open();
    QSqlQuery query;
    query.exec("SELECT * FROM Progress");

    QSqlTableModel *model =new QSqlTableModel;
    model->setTable("Progress");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Процент успеха"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Правильно"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Всего"));
    //model->setHeaderData()
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
}

ProgressWindow::~ProgressWindow()
{
    delete ui;
}

void ProgressWindow::on_back_to_menu_Button_clicked()
{
    this->close();
    emit MainMenu();
}
