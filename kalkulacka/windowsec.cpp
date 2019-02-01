#include "windowsec.h"
#include "ui_windowsec.h"
#include "mainwindow.h"
#include "window.h"
#include <iostream>
#include "math.h"
#include <QDebug>

Windowsec::Windowsec(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Windowsec)
{
    ui->setupUi(this);

    connect(ui->pushButton_Dec, SIGNAL(released()), this, SLOT(decimal()));
    connect(ui->pushButton_bin, SIGNAL(released()), this, SLOT(binar()));
    connect(ui->pushButton_hex, SIGNAL(released()), this, SLOT(hexa()));
    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(stlacena_0()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(stlacena_1()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(stlacena_2()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(stlacena_3()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(stlacena_4()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(stlacena_5()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(stlacena_6()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(stlacena_7()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(stlacena_8()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(stlacena_9()));
    connect(ui->pushButton_A, SIGNAL(released()), this, SLOT(stlacene_A()));
    connect(ui->pushButton_B, SIGNAL(released()), this, SLOT(stlacene_B()));
    connect(ui->pushButton_C, SIGNAL(released()), this, SLOT(stlacene_C()));
    connect(ui->pushButton_D, SIGNAL(released()), this, SLOT(stlacene_D()));
    connect(ui->pushButton_E, SIGNAL(released()), this, SLOT(stlacene_E()));
    connect(ui->pushButton_F, SIGNAL(released()), this, SLOT(stlacene_F()));
    connect(ui->pushButton_vymaz_2, SIGNAL(released()), this, SLOT(stlacene_vymaz()));
    connect(ui->pushButton_backspace_2, SIGNAL(released()), this, SLOT(stlacene_backspace()));
    ui->pushButton_Dec->released();

}

Windowsec::~Windowsec()
{
    delete ui;
}

void Windowsec::on_action_tandart_triggered()
{
    MainWindow *MWindow = new MainWindow;
    MWindow->show();
    setVisible(false);
}




/*void Windowsec::on_pushButton_vymaz_5_released()
{
    this->ui->pushButton_A->setEnabled(false);
}*/

void Windowsec::decimal()
{
    this->ui->pushButton_A->setEnabled(false);
    this->ui->pushButton_B->setEnabled(false);
    this->ui->pushButton_C->setEnabled(false);
    this->ui->pushButton_D->setEnabled(false);
    this->ui->pushButton_E->setEnabled(false);
    this->ui->pushButton_F->setEnabled(false);
    this->ui->pushButton_Dec->setEnabled(false);
    this->ui->pushButton_bin->setEnabled(true);
    this->ui->pushButton_hex->setEnabled(true);
    this->ui->pushButton_1->setEnabled(true);
    this->ui->pushButton_2->setEnabled(true);
    this->ui->pushButton_3->setEnabled(true);
    this->ui->pushButton_4->setEnabled(true);
    this->ui->pushButton_5->setEnabled(true);
    this->ui->pushButton_6->setEnabled(true);
    this->ui->pushButton_7->setEnabled(true);
    this->ui->pushButton_8->setEnabled(true);
    this->ui->pushButton_9->setEnabled(true);
    this->ui->pushButton_0->setEnabled(true);
}

void Windowsec::binar()
{
    this->ui->pushButton_A->setEnabled(false);
    this->ui->pushButton_B->setEnabled(false);
    this->ui->pushButton_C->setEnabled(false);
    this->ui->pushButton_D->setEnabled(false);
    this->ui->pushButton_E->setEnabled(false);
    this->ui->pushButton_F->setEnabled(false);
    this->ui->pushButton_Dec->setEnabled(true);
    this->ui->pushButton_bin->setEnabled(false);
    this->ui->pushButton_hex->setEnabled(true);
    this->ui->pushButton_2->setEnabled(false);
    this->ui->pushButton_3->setEnabled(false);
    this->ui->pushButton_4->setEnabled(false);
    this->ui->pushButton_5->setEnabled(false);
    this->ui->pushButton_6->setEnabled(false);
    this->ui->pushButton_7->setEnabled(false);
    this->ui->pushButton_8->setEnabled(false);
    this->ui->pushButton_9->setEnabled(false);

}

void Windowsec::hexa()
{
    this->ui->pushButton_Dec->setEnabled(true);
    this->ui->pushButton_bin->setEnabled(true);
    this->ui->pushButton_hex->setEnabled(false);
    this->ui->pushButton_A->setEnabled(true);
    this->ui->pushButton_B->setEnabled(true);
    this->ui->pushButton_C->setEnabled(true);
    this->ui->pushButton_D->setEnabled(true);
    this->ui->pushButton_E->setEnabled(true);
    this->ui->pushButton_F->setEnabled(true);
    this->ui->pushButton_2->setEnabled(true);
    this->ui->pushButton_3->setEnabled(true);
    this->ui->pushButton_4->setEnabled(true);
    this->ui->pushButton_5->setEnabled(true);
    this->ui->pushButton_6->setEnabled(true);
    this->ui->pushButton_7->setEnabled(true);
    this->ui->pushButton_8->setEnabled(true);
    this->ui->pushButton_9->setEnabled(true);
}

void Windowsec::stlacena_1()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="1";

            this->ui->lineEdit_dec->setText(inputD);
        }
        else if(this->ui->pushButton_bin->isEnabled()==false){
           this->inputB+="1";

            this->ui->lineEdit_bin->setText(inputB);
        }
        else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="1";

            this->ui->lineEdit_hex->setText(inputC);
        }
}

void Windowsec::stlacena_2()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="2";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="2";

            this->ui->lineEdit_hex->setText(inputC);
        }
}

void Windowsec::stlacena_3()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="3";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="3";

            this->ui->lineEdit_hex->setText(inputC);
        }
}

void Windowsec::stlacena_4()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="4";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="4";

            this->ui->lineEdit_hex->setText(inputC);
        }

}

void Windowsec::stlacena_5()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="5";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="5";

            this->ui->lineEdit_hex->setText(inputC);
        }
}

void Windowsec::stlacena_6()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="6";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="6";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacena_7()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="7";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="7";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacena_8()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="8";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="8";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacena_9()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="9";

            this->ui->lineEdit_dec->setText(inputD);
        }
           else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="9";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacena_0()
{
    if(this->ui->pushButton_Dec->isEnabled()==false){
             this->inputD+="0";

            this->ui->lineEdit_dec->setText(inputD);
        }
        else if(this->ui->pushButton_bin->isEnabled()==false){
           this->inputB+="0";

            this->ui->lineEdit_bin->setText(inputB);
        }
        else if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="0";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacene_A()
{
    if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="A";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacene_B()
{
    if(this->ui->pushButton_hex->isEnabled()==false){
           this->inputC+="B";

           this->ui->lineEdit_hex->setText(inputC);
       }
}
void Windowsec::stlacene_C()
{
    if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="C";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacene_D()
{
    if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="D";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacene_E()
{
    if(this->ui->pushButton_hex->isEnabled()==false){
            this->inputC+="E";

            this->ui->lineEdit_hex->setText(inputC);
        }
}
void Windowsec::stlacene_F()
{
    if(this->ui->pushButton_hex->isEnabled()==false){
           this->inputC+="f";

           this->ui->lineEdit_hex->setText(inputC);
       }
}

void Windowsec::stlacene_vymaz()
{
    this->inputD="";
    this->inputB="";
    this->inputC="";
    this->ui->lineEdit_bin->setText("0");
    this->ui->lineEdit_dec->setText("0");
    this->ui->lineEdit_hex->setText("0");
}

void Windowsec::stlacene_backspace()
{
    QString temp_string;


    if(this->ui->pushButton_Dec->isEnabled()==false){
        for ( int i=0; i<this->inputD.size()-1; i++)
        {
            temp_string[i]= this->inputD[i];
        }

         this->inputD= temp_string;
        this->ui->lineEdit_dec->setText(inputD);
    }
    else if(this->ui->pushButton_bin->isEnabled()==false){
        for ( int i=0; i<this->inputB.size()-1; i++)
        {

            temp_string[i]= this->inputB[i];
        }

         this->inputC= temp_string;

        this->ui->lineEdit_bin->setText(inputB);
    }
    else if(this->ui->pushButton_hex->isEnabled()==false){
        for ( int i=0; i<this->inputC.size()-1; i++)
        {
            temp_string[i]= this->inputC[i];
        }

         this->inputC= temp_string;
        this->ui->lineEdit_hex->setText(inputC);
    }


}

void Windowsec::on_lineEdit_dec_textChanged(const QString &arg1)
{
    if(ui->pushButton_Dec->isEnabled()==false){
    bool ok;
    QString text = arg1;
    long long num=text.toLongLong(&ok,10);
    QString hex = QString::number(num, 16).toUpper();
    QString bin=QString::number(num,2);
    ui->lineEdit_bin->setText(bin);
    ui->lineEdit_hex->setText(hex);}
}

void Windowsec::on_lineEdit_hex_textChanged(const QString &arg1)
{
    if(ui->pushButton_hex->isEnabled()==false){
    bool ok;
    QString text = arg1;
    long long num=text.toLongLong(&ok,16);
    QString dec = QString::number(num, 10);
    QString bin=QString::number(num,2);
    ui->lineEdit_bin->setText(bin);
    ui->lineEdit_dec->setText(dec);
    }
}

void Windowsec::on_lineEdit_bin_textChanged(const QString &arg1)
{
    if(ui->pushButton_bin->isEnabled()==false){
    bool ok;
    QString text = arg1;
    long long num=text.toLongLong(&ok,2);
    QString dec = QString::number(num, 10);
    QString hex=QString::number(num,16).toUpper();
    ui->lineEdit_dec->setText(dec);
    ui->lineEdit_hex->setText(hex);
    }
}

void Windowsec::on_actionKurz_listok_triggered()
{
    Window *CWindow = new Window;
    CWindow->show();
    setVisible(false);
}
