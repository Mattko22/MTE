#ifndef WINDOWSEC_H
#define WINDOWSEC_H

#include <QMainWindow>

namespace Ui {
class Windowsec;
}

class Windowsec : public QMainWindow
{
    Q_OBJECT

public:
    explicit Windowsec(QWidget *parent = 0);
    ~Windowsec();

private slots:
    void on_action_tandart_triggered();

    void decimal();
    void binar();
    void hexa();
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
    void stlacene_A();
    void stlacene_B();
    void stlacene_C();
    void stlacene_D();
    void stlacene_E();
    void stlacene_F();
    void stlacene_vymaz();
    void stlacene_backspace();




    void on_lineEdit_dec_textChanged(const QString &arg1);

    void on_lineEdit_hex_textChanged(const QString &arg1);

    void on_lineEdit_bin_textChanged(const QString &arg1);

    void on_actionKurz_listok_triggered();

    void on_actionZnamky_triggered();

private:
    Ui::Windowsec *ui;
    QString inputD;
    QString inputB;
    QString inputC;
};

#endif // WINDOWSEC_H
