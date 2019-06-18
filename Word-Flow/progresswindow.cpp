#include "progresswindow.h"
#include "ui_progresswindow.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>

ProgressWindow::ProgressWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgressWindow)
{
    ui->setupUi(this);
    this->setFixedSize(600, 400);
    ui->tableView->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->clear_db_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->back_to_menu_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    Show_db();
    setWindowIcon(QIcon(":/new/prefix1/353a9a937bc4945eed556e5617806aab.png"));
}

ProgressWindow::~ProgressWindow()
{
    delete ui;
}

void ProgressWindow::Show_db()
{
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
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
}

void ProgressWindow::on_back_to_menu_Button_clicked()
{
    this->close();
    emit MainMenu();
}

void ProgressWindow::on_clear_db_Button_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Уверены? Вся история прохождения будет удалена безвовратно!");
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
       switch (ret) {
       case QMessageBox::No:
         msgBox.close();
         break;
      case QMessageBox::Yes:
         QSqlQuery query;
         query.exec("DELETE FROM Progress");
         Show_db();
         break;
    }
}
