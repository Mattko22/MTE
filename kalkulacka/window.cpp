#include "window.h"
#include "ui_window.h"
#include "mainwindow.h"
#include "windowsec.h"
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QSize>

Window::Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    connect(&theDon,SIGNAL(dataReadyRead(QByteArray)),this,SLOT(dataInDaHouse(QByteArray)));
    qDebug()<<sizeHint();
}

Window::~Window()
{
    delete ui;
}

void Window::dataInDaHouse(QByteArray data)
{
    QString dataString;
    dataString = data;
    qDebug()<<"datastring";
    qDebug()<<dataString;
   // ui->label->setText(dataString);
    /*QJsonDocument jsonResponse = QJsonDocument::fromJson(dataString.toUtf8());
    QJsonObject jsonObject = jsonResponse.object();

    QJsonValue qty = jsonObject.value("USD");
   // QString qty = bookHeavyInfo["USD"].toString();*/
    QJsonDocument document = QJsonDocument::fromJson(data);
    QJsonObject object = document.object();
    //QJsonObject root_obj = json_doc.object();
    QVariantMap root_map = object.toVariantMap();
    QVariantMap stat_map = root_map["rates"].toMap();
    //QJsonValue jsonValue = stat_map.(value("USD")));
    QJsonValue jv = object.value("rates");
    qDebug()<<stat_map["USD"].toString();
    QString qty = root_map["date"].toString();
    qDebug()<<"qty";
    qDebug()<<qty;
    ui->label_9->setText(qty);
    ui->label->setText("USD");
    ui->label_2->setText(stat_map["USD"].toString());
    ui->label_3->setText("CZK");
    ui->label_33->setText(stat_map["CZK"].toString());
    ui->label_4->setText("GBP");
    ui->label_44->setText(stat_map["GBP"].toString());
    ui->label_5->setText("HUF");
    ui->label_55->setText(stat_map["HUF"].toString());
    ui->label_6->setText("CHF");
    ui->label_66->setText(stat_map["CHF"].toString());
    ui->label_7->setText("HRK");
    ui->label_77->setText(stat_map["HRK"].toString());
    ui->label_7->setText("HRK");
    ui->label_77->setText(stat_map["HRK"].toString());



    //qDebug()<<jsonValue.toString();

}

void Window::on_pushButton_clicked()
{
    //theDon.makeReaquest("http://free.currencyconverterapi.com/api/v5/convert?q=EUR_USD&compact=y");
    theDon.makeReaquest("https://ratesapi.io/api/latest");
}

void Window::on_actionStandardna_kalkulacka_triggered()
{
    MainWindow *CWindow = new MainWindow;
    CWindow->show();
    setVisible(false);
}

void Window::on_actionPrevod_Dec_Bin_Hex_triggered()
{
    Windowsec *SWindow = new Windowsec;
    SWindow->show();
    setVisible(false);
}
