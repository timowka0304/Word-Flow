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
    setWindowIcon(QIcon(":/353a9a937bc4945eed556e5617806aab.png"));
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
