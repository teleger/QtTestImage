#include "show.h"
showImage::showImage(QWidget *parent):QWidget(parent){
    show1.load("/home/work/tensorflow.jpg");//文件路径
}
showImage::~showImage(){
}
void showImage::paintEvent(QPaintEvent *e)
{
    QPainter pp(this);
    QRect Temp(0,0,this->width(),this->height());
    pp.drawImage(Temp,show1);
}
