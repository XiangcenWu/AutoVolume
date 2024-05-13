//
// Created by wxian on 2024/5/9.
//


#include "SimpleWidget.h"

SimpleWidget::SimpleWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SimpleWidget)
{
    ui->setupUi(this);
}

SimpleWidget::~SimpleWidget()
{
    delete ui;
}
