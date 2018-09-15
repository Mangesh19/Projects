#include "Demo.h"
#include "ui_Demo.h"

struct student
{
    int studno;
    QString stuname;
    QString subject;
    int marks;
};

typedef struct student stu;

Demo::Demo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Demo)
{
    ui->setupUi(this);
    stu stuobj;
    stuobj.studno = 1;
    stuobj.stuname = "Mangesh";
    stuobj.subject = "Maths";
    stuobj.marks = 98;
    stulist.push_back(stuobj);
    stuobj.studno = 2;
    stuobj.stuname = "Rahul";
    stuobj.subject = "Maths";
    stuobj.marks = 50;
    stulist.push_back(stuobj);
    QList<stu> newstulist = listOfStudents();
}

QList<student> Demo::listOfStudents()
{
   return stulist;
}




Demo::~Demo()
{
    delete ui;
}
