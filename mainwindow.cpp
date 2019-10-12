#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)//,
    //ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    //Create the 8 buttons
    this->up1 = new QPushButton(this);
    this->up1->setGeometry(180, 130, 140, 140);
    this->down1 = new QPushButton(this);
    this->down1->setGeometry(180, 430, 140, 140);
    this->left1 = new QPushButton(this);
    this->left1->setGeometry(30, 280, 140, 140);
    this->right1 = new QPushButton(this);
    this->right1->setGeometry(330, 280, 140, 140);
    this->up2 = new QPushButton(this);
    this->up2->setGeometry(680, 130, 140, 140);
    this->down2 = new QPushButton(this);
    this->down2->setGeometry(680, 430, 140, 140);
    this->left2 = new QPushButton(this);
    this->left2->setGeometry(530, 280, 140, 140);
    this->right2 = new QPushButton(this);
    this->right2->setGeometry(830, 280, 140, 140);
}

MainWindow::~MainWindow()
{
    delete ui;
}
