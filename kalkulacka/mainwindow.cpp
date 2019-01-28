#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "controller.h"
#include <iostream>
#include "math.h"
#include "windowsec.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(stlacena_1()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(stlacena_2()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(stlacena_3()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(stlacena_4()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(stlacena_5()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(stlacena_6()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(stlacena_7()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(stlacena_8()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(stlacena_9()));
    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(stlacena_0()));
    connect(ui->pushButton_plus, SIGNAL(released()), this, SLOT(stlacene_plus()));
    connect(ui->pushButton_minus, SIGNAL(released()), this, SLOT(stlacene_minus()));
    connect(ui->pushButton_krat, SIGNAL(released()), this, SLOT(stlacene_krat()));
    connect(ui->pushButton_deleno, SIGNAL(released()), this, SLOT(stlacene_deleno()));
    connect(ui->pushButton_lava, SIGNAL(released()), this, SLOT(stlacene_Lzatvorka()));
    connect(ui->pushButton_prava, SIGNAL(released()), this, SLOT(stlacene_Rzatvorka()));
    connect(ui->pushButton_deci, SIGNAL(released()), this, SLOT(stlacene_ciarka()));
    connect(ui->pushButton_rovnasa, SIGNAL(released()), this, SLOT(stlacene_rovnasa()));
    connect(ui->pushButton_vymaz, SIGNAL(released()), this, SLOT(stlacene_vymaz()));
    connect(ui->pushButton_backspace, SIGNAL(released()), this, SLOT(stlacene_backspace()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stlacena_1()
{
    this->input+="1";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_2()
{
    this->input+="2";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_3()
{
    this->input+="3";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_4()
{
    this->input+="4";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_5()
{
    this->input+="5";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_6()
{
    this->input+="6";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_7()
{
    this->input+="7";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_8()
{
    this->input+="8";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_9()
{
    this->input+="9";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_0()
{
    this->input+="0";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_plus()
{
    this->input+="+";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_minus()
{
    this->input+="-";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_krat()
{
    this->input+="X";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_deleno()
{
    this->input+="/";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_Lzatvorka()
{
    this->input+="(";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_Rzatvorka()
{
    this->input+=")";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_ciarka()
{
    this->input+=".";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_rovnasa()
{
    if (input.size()==0)
        return;

    Controller c(this->input);
     this->input+="\n" + QString::number(c.getAnswer());

     this->ui->Displej->setText(input);
    this->ui->pushButton_rovnasa->setDisabled(true);
}

void MainWindow::stlacene_vymaz()
{
    this->input="";
    this->ui->Displej->setText(input);
    this->ui->pushButton_rovnasa->setDisabled(false);
}

void MainWindow::stlacene_backspace()
{
    QString temp_string;
    for ( int i=0; i<this->input.size()-1; i++)
    {
        temp_string[i]= this->input[i];
    }

     this->input= temp_string;
    this->ui->Displej->setText(input);
}

void MainWindow::on_actionPrevod_Dec_Bin_Hex_triggered()
{
    Windowsec *SWindow = new Windowsec;
    SWindow->show();
    setVisible(false);
}
