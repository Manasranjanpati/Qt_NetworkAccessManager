#include "mynetworkclass.h"
#include<QDebug>
mynetworkclass::mynetworkclass(QObject *parent) : QObject(parent)
{
    connect(qnam,SIGNAL(finished(QNetworkReply*)),this,SLOT(readRead(QNetworkReply*)));

}

void mynetworkclass::makeRequest(QString endpointRequest)
{
    qnam->get(QNetworkRequest(QUrl(endpointRequest)));
}

void mynetworkclass::readRead(QNetworkReply *reply)
{
    QByteArray myData;
    myData = reply->readAll();
    qDebug()<<myData;
    emit(dataReadyRead(myData));
}
