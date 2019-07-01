#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainmenu.h"
#include <QtGui>
#include <QtTest/QTest>
#include "test_qlineedit.h"
#include "test_radiobutton.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    MainMenu *mainmenu;
};

#endif // MAINWINDOW_H
