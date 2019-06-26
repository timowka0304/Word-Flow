#include "testuser.h"
#include "ui_testuser.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <time.h>
#include <QMessageBox>
#include <QDebug>
#include <QButtonGroup>
#include <QDesktopWidget>

TestUser::TestUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestUser)
{
    ui->setupUi(this);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(600, 400);
    ui->back_to_menu_Button->setHidden(0);
    ui->start_Button->setHidden(0);
    ui->next_Button->setHidden(1);
    ui->done_Button->setHidden(1);
    ui->text_word->setText("");
    ui->text_question->setText("");
    ui->groupBox->setHidden(1);
    ui->msg_text->setHidden(1);
    ui->number_of_page->setHidden(1);
    ui->mark_text->setHidden(1);
    setWindowIcon(QIcon(":/new/prefix1/353a9a937bc4945eed556e5617806aab.png"));
}

TestUser::~TestUser()
{
    delete ui;
}

void TestUser::on_back_to_menu_Button_clicked()
{
    this->close();
    emit UserDicMenu();
}
