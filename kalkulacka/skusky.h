#ifndef SKUSKY_H
#define SKUSKY_H
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
    class Skusky;
}

class Skusky : public QMainWindow {
    Q_OBJECT
public:
    Skusky(QWidget *parent = 0);
    ~Skusky();
    QSqlTableModel *model;
        QSqlDatabase db;
         bool createDB(QString dbname);
         void setName(const QString n);
         void setRollNO(const QString p);
         void AddNewStudent(QString nazov,QString rocnik,QString semester,QString znamka);
         void ViewDetails();


protected:
    void changeEvent(QEvent *e);

private:
    Ui::Skusky *ui;

private slots:

    void on_btn_add_released();
    void on_btn_delete_released();
    void on_btn_load_released();
    void on_actionStandardna_kalkulacka_triggered();
    void on_actionPrevod_Dec_Bin_Hex_triggered();
    void on_actionKurz_listok_triggered();
};
#endif // SKUSKY_H
