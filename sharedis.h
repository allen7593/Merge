#ifndef SHAREDIS_H
#define SHAREDIS_H

#include <QDialog>
#include <QImage>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPixmap>
#include <string>
#include <sstream>
#include <cstdlib>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include "picgen.h"
#include "widget.h"
#include "aes_ctr.h"

class shareDis : public QDialog
{
    Q_OBJECT

public:
    shareDis(QWidget *parent = 0,QString hasedSeed=0);
    ~shareDis();
    void setSeed(int);
private slots:
    void goback();
    void validateBut(const QString&);
    void checkForValidity();
private:

    QLabel* scanLabel;
    QLabel* QRLabel;
    QLabel* share2;
    QImage* s2;

    QLineEdit* verifyEdit;
    QPushButton* verifyBut;
    QPushButton* preBut;

    QHBoxLayout* mainLayout;
    QVBoxLayout* leftLayout;
    QHBoxLayout* buttonLayout;

    QRWidget* QRCode;

    picGen p;
    QWidget* preWin;
    QString hexSeed;
    int seed;
};

#endif // SHAREDIS_H
