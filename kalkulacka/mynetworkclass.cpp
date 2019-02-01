#include "mynetworkclass.h"

MyNetworkClass::MyNetworkClass(QObject *parent) : QObject(parent)
{
    connect(qnam,SIGNAL(finished(QNetworkReply*)),this,SLOT(readRead(QNetworkReply*)));
}

void MyNetworkClass::makeReaquest(QString endpointRequest)
{
    qnam->get(QNetworkRequest(QUrl(endpointRequest)));
}

void MyNetworkClass::readRead(QNetworkReply*reply){
    QByteArray myData;
    myData = reply->readAll();
    emit(dataReadyRead(myData));
}
