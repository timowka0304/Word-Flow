#include "progresswindow.h"
#include "ui_progresswindow.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopWidget>
#include <QDir>

ProgressWindow::ProgressWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgressWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(600, 400);
    ui->tableView->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->clear_db_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->back_to_menu_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->max_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->min_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    Show_db();
    setWindowIcon(QIcon(":/new/prefix1/res/logo.png"));
}

ProgressWindow::~ProgressWindow()
{
    delete ui;
}

void ProgressWindow::Show_db()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/Word-Flow/Progress.db3");
    db.open();
    QSqlQuery query;
    query.exec("SELECT * FROM Progress");
    size = 0;
    while (query.next()) size++;

    QSqlTableModel *model =new QSqlTableModel;
    model->setTable("Progress");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Процент успеха"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Правильно"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Всего"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Категория"));
    model->select();
    ui->tableView->setModel(model);
}

void ProgressWindow::on_back_to_menu_Button_clicked()
{
    this->close();
    Show_db();
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

void ProgressWindow::on_max_Button_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/Word-Flow/Progress.db3");
    db.open();
    QSqlQuery query;
    true_a = 0;
    query.exec("SELECT max(true) FROM Progress");
    while (query.next()){
        true_a = query.value(0).toInt();
    }
    QMessageBox msgBox;
    msgBox.setText(QString("Лучший результат из %1:\n%2% процентов - %3/10 правильно").arg(size).arg(true_a*10).arg(true_a));
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
       switch (ret) {
       case QMessageBox::Ok:
         msgBox.close();
         break;
    }

}

void ProgressWindow::on_min_Button_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/Word-Flow/Progress.db3");
    db.open();
    QSqlQuery query;
    true_a = 0;
    query.exec("SELECT min(true) FROM Progress");
    while (query.next()){
        true_a = query.value(0).toInt();
    }
    QMessageBox msgBox;
    msgBox.setText(QString("Худший результат из %1:\n%2 процентов - %3/10 правильно").arg(size).arg(true_a*10).arg(true_a));
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
       switch (ret) {
       case QMessageBox::Ok:
         msgBox.close();
         break;
    }
}
