#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bb = new showImage(parent);
    bb1 = new showImage(parent);
    bb->setGeometry(0,0,500,500);//相对于主窗口坐标及大小
    bb1->setGeometry(500,0,500,500);
    bb->show();//显示
    bb1->show();
}

MainWindow::~MainWindow()
{
    delete ui;

    delete bb;
    delete bb1;
}
