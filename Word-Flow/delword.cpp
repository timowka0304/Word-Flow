#include "delword.h"
#include "ui_delword.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDesktopWidget>
#include <QDebug>
#include <QMessageBox>
#include <QHeaderView>

DelWord::DelWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelWord)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(400, 300);
    ui->del_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->back_to_menu_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    ui->tableView->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    setWindowIcon(QIcon(":/new/prefix1/res/logo.png"));
    Show_db();
}

DelWord::~DelWord()
{
    delete ui;
}
void DelWord::Show_db()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/Word-Flow/UserDic.db3");
    db.open();
    QSqlQuery query;
    query.exec("SELECT UsersWords.English, UsersWords.Russian FROM UsersWords");

    QSqlTableModel *model =new QSqlTableModel;
    model->setTable("UsersWords");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setFilter("valid == '1'");
    model->removeColumn(0);
    model->removeColumn(2);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Английский"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Русский"));
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void DelWord::on_del_Button_clicked()
{
    QString choosen = ui->tableView->currentIndex().data(0).toString();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "/home/timowka0304/Word-Flow/Word-Flow/Word-Flow/UserDic.db3");
    db.open();
    QSqlQuery query;

    query.exec(QString("UPDATE UsersWords SET valid = 0 WHERE English = '%1' OR Russian = '%1'").arg(choosen));
    QMessageBox msgBox;
    msgBox.setText("Слова удалены из Вашего словаря!");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
       switch (ret) {
       case QMessageBox::Ok:
         Show_db();
         msgBox.close();
         break;
      default:
         msgBox.close();
         break;
    }
}

void DelWord::on_back_to_menu_Button_clicked()
{
    this->close();
    emit UserDicMenu();
}
