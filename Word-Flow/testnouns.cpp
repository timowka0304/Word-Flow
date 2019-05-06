#include "testnouns.h"
#include "ui_testnouns.h"

TestNouns::TestNouns(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestNouns)
{
    ui->setupUi(this);
}

TestNouns::~TestNouns()
{
    delete ui;
}
