#ifndef DEMO_H
#define DEMO_H

#include <QWidget>

namespace Ui {
class Demo;
}

class Demo : public QWidget
{
    Q_OBJECT

public:
    explicit Demo(QWidget *parent = 0);
    ~Demo();

    void display(int var);
public slots:
    void nextButtonClicked();
private:
    Ui::Demo *ui;
    QList<int> list;
    int index = 0;
};

#endif // DEMO_H
