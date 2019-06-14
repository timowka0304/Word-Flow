#ifndef TESTVERBS_H
#define TESTVERBS_H

#include <QDialog>
#include <QString>
#include <QSqlDatabase>

struct Numbers_2{
    int question_number;
    int word_answer_number;
    int word_1_number;
    int word_2_number;
    int word_3_number;
};

namespace Ui {
class TestVerbs;
}

class TestVerbs : public QDialog
{
    Q_OBJECT

signals:
    void VerbsMenu();

public:
    explicit TestVerbs(QWidget *parent = nullptr);
    ~TestVerbs();
    void RunTest();
    void FillStart();
    int mas_answers[10];
    Numbers_2 numbers_words[10];
    int counter = 0;
    void ResultShow();
    void ENGtoRUS();
    void RUStoENG();
    void Warning(int flag, QString eng, QString rus);
    int sum = 0;

private slots:
    void on_start_Button_clicked();

    void on_back_to_menu_Button_clicked();

    void on_next_Button_clicked();

    void on_done_Button_clicked();

private:
    Ui::TestVerbs *ui;
    QSqlDatabase db;
};

#endif // TESTVERBS_H
