#include "easy.h"
#include "ui_easy.h"

Easy::Easy(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Easy)
{
    ui->setupUi(this);
}

Easy::~Easy()
{
    delete ui;
}

