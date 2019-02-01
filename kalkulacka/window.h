#ifndef WINDOW_H
#define WINDOW_H


#include <QMainWindow>
#include "mynetworkclass.h"
namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();
private slots:
    void dataInDaHouse(QByteArray data);
    void on_pushButton_clicked();

    void on_actionStandardna_kalkulacka_triggered();

    void on_actionPrevod_Dec_Bin_Hex_triggered();

private:
    Ui::Window *ui;
    MyNetworkClass theDon;
};

#endif // WINDOW_H
