#include "mainwindow.h"
#include <QApplication>
#include <QtTest/QTest>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QTest::qExec(new Test_QLineEdit, argc, argv);

    return a.exec();
}
