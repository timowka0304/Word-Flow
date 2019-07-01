#ifndef TEST_RADIOBUTTON_H
#define TEST_RADIOBUTTON_H

#include <QObject>

class test_radiobutton : public QObject
{
    Q_OBJECT
private slots: // должны быть приватными
    void click();
};

#endif // TEST_RADIOBUTTON_H

