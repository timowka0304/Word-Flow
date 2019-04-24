#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    mainmenu = new MainMenu;
    ui->setupUi(this);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(-5, 5);
    effect->setBlurRadius(10.0);
    effect->setColor(Qt::darkCyan);
    ui->label->setGraphicsEffect(effect);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
    mainmenu->show();
}
