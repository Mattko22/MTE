#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "controller.h"
#include <iostream>
#include "math.h"
#include "windowsec.h"
#include "window.h"
#include "skusky.h"
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
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="1";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_2()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="2";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_3()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="3";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_4()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="4";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_5()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="5";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_6()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="6";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_7()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="7";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_8()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="8";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_9()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="9";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacena_0()
{
    if(input.contains("\n")){
        stlacene_vymaz();
    }
    this->input+="0";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_plus()
{
    if(input.contains("\n")){

         this->input =inputEq;
        this->ui->pushButton_rovnasa->setDisabled(false);
    }
    this->input+="+";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_minus()
{
    if(input.contains("\n")){

         this->input =inputEq;
        this->ui->pushButton_rovnasa->setDisabled(false);
    }
    this->input+="-";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_krat()
{
    if(input.contains("\n")){

         this->input =inputEq;
        this->ui->pushButton_rovnasa->setDisabled(false);
    }
    this->input+="X";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_deleno()
{
    if(input.contains("\n")){

         this->input =inputEq;
        this->ui->pushButton_rovnasa->setDisabled(false);
    }
    this->input+="/";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_Lzatvorka()
{
    if(input.contains("\n")){

         stlacene_vymaz();
    }
    this->input+="(";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_Rzatvorka()
{
    if(input.contains("\n")){

         stlacene_vymaz();
    }
    this->input+=")";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_ciarka()
{
    if(input.contains("\n")){

         stlacene_vymaz();
    }
    this->input+=".";
    this->ui->Displej->setText(input);
}

void MainWindow::stlacene_rovnasa()
{
    if (input.size()==0)
        return;

    Controller c(this->input);
    inputEq= QString::number(c.getAnswer());
    qDebug()<<inputEq;
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


void MainWindow::on_actionKurz_listok_triggered()
{
    Window *CWindow = new Window;
    CWindow->show();
    setVisible(false);
}

void MainWindow::on_actionZnamky_triggered()
{
    Skusky *SWindow = new Skusky;
    SWindow->show();
    setVisible(false);
}
