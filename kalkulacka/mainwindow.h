#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void stlacena_1();
    void stlacena_2();
    void stlacena_3();
    void stlacena_4();
    void stlacena_5();
    void stlacena_6();
    void stlacena_7();
    void stlacena_8();
    void stlacena_9();
    void stlacena_0();
    void stlacene_plus();
    void stlacene_minus();
    void stlacene_krat();
    void stlacene_deleno();
    void stlacene_Lzatvorka();
    void stlacene_Rzatvorka();
    void stlacene_ciarka();
    void stlacene_rovnasa();
    void stlacene_vymaz();
    void stlacene_backspace();



    void on_actionPrevod_Dec_Bin_Hex_triggered();



    void on_actionKurz_listok_triggered();

    void on_actionZnamky_triggered();

private:
    Ui::MainWindow *ui;
    QString input;
    QString inputEq;
};

#endif // MAINWINDOW_H
