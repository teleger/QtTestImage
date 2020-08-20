#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "show.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    showImage* bb;
    showImage* bb1;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
