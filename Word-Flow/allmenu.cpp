#include "allmenu.h"
#include "ui_allmenu.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QDesktopWidget>
#include <QDir>

AllMenu::AllMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllMenu)
{
    testall = new TestAll;
    QObject::connect(testall, SIGNAL(AllMenu()), this, SLOT(show()));
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
    setWindowIcon(QIcon(":/new/prefix1/res/logo.png"));
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
    db.setDatabaseName("/home/timowka0304/Word-Flow/Word-Flow/Word-Flow/Words.db3");
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

void AllMenu::on_lets_test_Button_clicked()
{
    this->close();
    on_hide_dic_Button_clicked();
    testall->show();
}
