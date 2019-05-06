#ifndef TESTNOUNS_H
#define TESTNOUNS_H

#include <QDialog>

namespace Ui {
class TestNouns;
}

class TestNouns : public QDialog
{
    Q_OBJECT

public:
    explicit TestNouns(QWidget *parent = nullptr);
    ~TestNouns();

private:
    Ui::TestNouns *ui;
};

#endif // TESTNOUNS_H
