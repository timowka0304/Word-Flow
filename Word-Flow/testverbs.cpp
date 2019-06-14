#include "testverbs.h"
#include "ui_testverbs.h"

TestVerbs::TestVerbs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestVerbs)
{
    ui->setupUi(this);
}

TestVerbs::~TestVerbs()
{
    delete ui;
}
