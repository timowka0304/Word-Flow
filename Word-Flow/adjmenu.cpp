#include "adjmenu.h"
#include "ui_adjmenu.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QVariant>

AdjMenu::AdjMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdjMenu)
{
    testadj = new TestAdj;
    QObject::connect(testadj, SIGNAL(AdjMenu()), this, SLOT(show()));
    //AdjMenu::connect(testadj, &TestAdj::AdjMenu, this, &AdjMenu::show);
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

AdjMenu::~AdjMenu()
{
    delete ui;
}

void AdjMenu::on_menu_back_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->dic_show_Button->setHidden(0);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    this->close();
    emit MainMenu();
}

void AdjMenu::on_dic_show_Button_clicked()
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
        if ((query.value(0).toInt() > 100) && (query.value(0).toInt() < 201)){
            QString english = query.value(1).toString();
            QString russian = query.value(2).toString();
            ui->textBrowser->insertPlainText(english+" - "+russian+"\n");
        }
    }
}

void AdjMenu::on_hide_dic_Button_clicked()
{
    ui->textBrowser->setHidden(1);
    ui->hide_dic_Button->setHidden(1);
    ui->textBrowser->clear();
    ui->dic_show_Button->setHidden(0);
}

void AdjMenu::on_lets_test_Button_clicked()
{
    this->close();
    on_hide_dic_Button_clicked();
    testadj->show();
}
