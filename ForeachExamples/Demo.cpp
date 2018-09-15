#include "Demo.h"
#include "ui_Demo.h"
#include <QDebug>

Demo::Demo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Demo)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(pressed()),this,SLOT(nextButtonClicked()));
    list << 10 << 20 <<30 << 40;

    foreach(int var, list)
    {
        display(var);
        qDebug()<<"I am executing";
        ui->label->setText(QString::number(var));
    }
    qDebug()<<"Executed after completion of foreach loop";
}

Demo::~Demo()
{
    delete ui;
}

void Demo::display(int var)
{
    qDebug()<<"Var:"<<var;
}

void Demo::nextButtonClicked()
{
    ui->label_2->setText(QString::number(list.at(index)));
    index++;
}
