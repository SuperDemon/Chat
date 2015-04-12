#include "clientwindow.h"

ClientWindow::ClientWindow(QWidget *parent) :
    QMainWindow(parent)
{
    center = new QWidget(this);

    edtinfo = new QTextEdit(center);
    edtmsg =  new QLineEdit(center);

    btnsend = new QPushButton("send",center);

    //垂直的
    vlay=new QVBoxLayout(center);
    vlay->addWidget(edtinfo);

    //水平
    hlay = new QHBoxLayout();
    vlay->addLayout(hlay);

    //
    hlay->addWidget(edtmsg);
    hlay->addWidget(btnsend);

    //
    this->setCentralWidget(center);
    this->show();
}
