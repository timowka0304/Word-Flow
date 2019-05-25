#include "progresswindow.h"
#include "ui_progresswindow.h"

ProgressWindow::ProgressWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgressWindow)
{
    ui->setupUi(this);
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
