#include "mainwindow.h"
#include <QApplication>
#include <QtTest/QTest>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    freopen("testing.log", "w", stdout);
    QTest::qExec(new Test_QLineEdit, argc, argv);

    return a.exec();
}
