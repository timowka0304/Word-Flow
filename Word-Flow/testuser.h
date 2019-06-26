#ifndef TESTUSER_H
#define TESTUSER_H

#include <QDialog>

namespace Ui {
class TestUser;
}

class TestUser : public QDialog
{
    Q_OBJECT

signals:
    void UserDicMenu();

public:
    explicit TestUser(QWidget *parent = nullptr);
    ~TestUser();

private slots:
    void on_back_to_menu_Button_clicked();

private:
    Ui::TestUser *ui;
};

#endif // TESTUSER_H
