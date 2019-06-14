#ifndef TESTVERBS_H
#define TESTVERBS_H

#include <QDialog>

namespace Ui {
class TestVerbs;
}

class TestVerbs : public QDialog
{
    Q_OBJECT

public:
    explicit TestVerbs(QWidget *parent = nullptr);
    ~TestVerbs();

private:
    Ui::TestVerbs *ui;
};

#endif // TESTVERBS_H
