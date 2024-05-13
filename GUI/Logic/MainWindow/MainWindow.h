#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "ui_MainWindow.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


#endif //MINWINDOW_H
