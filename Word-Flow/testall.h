#ifndef TESTALL_H
#define TESTALL_H

#include <QDialog>

namespace Ui {
class TestAll;
}

class TestAll : public QDialog
{
    Q_OBJECT

public:
    explicit TestAll(QWidget *parent = nullptr);
    ~TestAll();

private:
    Ui::TestAll *ui;
};

#endif // TESTALL_H
