#include "testall.h"
#include "ui_testall.h"

TestAll::TestAll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestAll)
{
    ui->setupUi(this);
}

TestAll::~TestAll()
{
    delete ui;
}
