#ifndef DEMO_H
#define DEMO_H

#include <QWidget>

namespace Ui {
class Demo;
}
struct student;
class Demo : public QWidget
{
    Q_OBJECT

public:
    explicit Demo(QWidget *parent = 0);
    ~Demo();
    QList<student> listOfStudents();

private:
    Ui::Demo *ui;
    QList<student> stulist;
};

#endif // DEMO_H
