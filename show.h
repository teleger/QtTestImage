#ifndef SHOW_H
#define SHOW_H
#include <QImage>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
class showImage:public QWidget
{
    Q_OBJECT
public:
    explicit showImage(QWidget *parent = 0);
    ~showImage();
    QImage show1;
    void paintEvent(QPaintEvent *e);
};
#endif // SHOW_H
