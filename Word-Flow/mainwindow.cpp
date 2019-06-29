#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    mainmenu = new MainMenu;
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(600, 400);
    QPixmap myPixmap(":/new/prefix1/glavnaya.jpg");
    ui->label->setPixmap(myPixmap);
    setWindowIcon(QIcon(":/new/prefix1/353a9a937bc4945eed556e5617806aab.png"));
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
