#ifndef RANDOM_H
#define RANDOM_H

#include <QDialog>

namespace Ui {
class Random;
}

class Random : public QDialog
{
    Q_OBJECT

signals:
    void NounsMenu();

public:
    explicit Random(QWidget *parent = nullptr);
    ~Random();

private:
    Ui::Random *ui;
};

#endif // RANDOM_H
