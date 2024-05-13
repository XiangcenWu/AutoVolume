//
// Created by wxian on 2024/5/9.
//

#ifndef SIMPLEWIDGET_H
#define SIMPLEWIDGET_H


#include "ui_SimpleWidget.h"
#include <QWidget>

class SimpleWidget : public QWidget
{
    Q_OBJECT

public:
    SimpleWidget(QWidget *parent = nullptr);
    ~SimpleWidget();

private:
    Ui::SimpleWidget *ui;
};


#endif //SIMPLEWIDGET_H
