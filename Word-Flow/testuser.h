#ifndef TESTUSER_H
#define TESTUSER_H

#include <QDialog>
#include <QString>
#include <QSqlDatabase>

struct Numbers_user{
    int question_number;
    int word_answer_number;
    int word_1_number;
    int word_2_number;
    int word_3_number;
};

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
    void RunTest();
    void FillStart();
    int mas_answers[10];
    Numbers_user numbers_words[10];
    int counter = 0;
    void ResultShow();
    void ENGtoRUS();
    void RUStoENG();
    void Warning(int flag, QString eng, QString rus);
    int sum = 0;

private slots:
    void on_back_to_menu_Button_clicked();

    void on_start_Button_clicked();

private:
    Ui::TestUser *ui;
    QSqlDatabase db;
};

#endif // TESTUSER_H
