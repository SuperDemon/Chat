#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class ClientWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ClientWindow(QWidget *parent = 0);

signals:

public slots:

private:
    QWidget *center;
    QTextEdit *edtinfo;
    QLineEdit *edtmsg;
    QPushButton *btnsend;
    QHBoxLayout *hlay;
    QVBoxLayout *vlay;
};

#endif // CLIENTWINDOW_H
