#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QMessageBox>
#include <QDesktopWidget>

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    nounsmenu = new NounsMenu;
    QObject::connect(nounsmenu, SIGNAL(MainMenu()), this, SLOT(show()));
    //connect(nounsmenu, &NounsMenu::MainMenu, this, &MainMenu::show);
    adjmenu = new AdjMenu;
    QObject::connect(adjmenu, SIGNAL(MainMenu()), this, SLOT(show()));
    //connect(adjmenu, &AdjMenu::MainMenu, this, &MainMenu::show);
    verbsmenu = new VerbsMenu;
    QObject::connect(verbsmenu, SIGNAL(MainMenu()), this, SLOT(show()));
    //connect(verbsmenu, &VerbsMenu::MainMenu, this, &MainMenu::show);
    userdicmenu = new UserDicMenu;
    QObject::connect(userdicmenu, SIGNAL(MainMenu()), this, SLOT(show()));
    //connect(userdicmenu, &UserDicMenu::MainMenu, this, &MainMenu::show);
    allmenu = new AllMenu;
    QObject::connect(allmenu, SIGNAL(MainMenu()), this, SLOT(show()));
    //connect(allmenu, &AllMenu::MainMenu, this, &MainMenu::show);
    progresswindow = new ProgressWindow;
    QObject::connect(progresswindow, SIGNAL(MainMenu()), this, SLOT(show()));
    //connect(progresswindow, &ProgressWindow::MainMenu, this, &MainMenu::show);
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    QDesktopWidget *pDescwidget=QApplication::desktop();
    move(pDescwidget->width()/2-width()/2, pDescwidget->height()/2-height()/2);
    this->setFixedSize(600, 400);
    setWindowIcon(QIcon(":/new/prefix1/res/logo.png"));
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_exit_button_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Вы уверены, что хотите выйти из приложения?");
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();
       switch (ret) {
       case QMessageBox::No:
         msgBox.close();
         break;
      case QMessageBox::Yes:
         this->close();
         break;
      default:
         msgBox.close();
         break;
    }
}

void MainMenu::on_nounc_category_button_clicked()
{
    this->close();
    nounsmenu->show();
}

void MainMenu::on_adjectives_catogory_button_clicked()
{
    this->close();
    adjmenu->show();
}

void MainMenu::on_verbs_category_button_clicked()
{
    this->close();
    verbsmenu->show();
}

void MainMenu::on_user_dic_button_clicked()
{
    this->close();
    userdicmenu->show();
}

void MainMenu::on_all_category_button_clicked()
{
    this->close();
    allmenu->show();
}

void MainMenu::on_progress_Button_clicked()
{
    this->close();
    progresswindow->Show_db();
    progresswindow->show();
}

void MainMenu::on_actionText_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Программа “Word-Flow” предназначена для эффективного запоминания простейших базовых слов английского языка.\nПрограмма позволяет запоминать иностранные слова пользователю, желающему улучшить знания простейших слов английского языка, сидя за ПК или ноутбуком под дистрибутивами Linux.\nПользователю предлагается воспользоваться своим словарем или выбрать одну из четырех предложенных категорий для заучивания слов:\n• Существительные\n• Глаголы\n• Прилагательные\n• Общий раздел");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
       switch (ret) {
      case QMessageBox::Ok:
         msgBox.close();
         break;
      default:
         msgBox.close();
         break;
    }
}

void MainMenu::on_actionExit_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Вы уверены, что хотите выйти из приложения?");
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();
       switch (ret) {
       case QMessageBox::No:
         msgBox.close();
         break;
      case QMessageBox::Yes:
         this->close();
         break;
      default:
         msgBox.close();
         break;
    }
}
