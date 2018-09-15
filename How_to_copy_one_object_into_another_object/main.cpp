#include <iostream>
#include <vector>
using namespace std;

class Demo
{
public:
     Demo():a(10)
    {

    }
     int *ptr;
private:
    int a;
};

//class Temp
//{
//public:
//    Temp():b(20)
//    {

//    }
//private:
//    int b;
//};

int main(int argc, char *argv[])
{
    Demo demoobj1; //call to constructor
//    Demo demoobj2 (demoobj1); //Ok: we can copy objects like this,not calling to constructor
//    Demo demoobj3 = demoobj1; //Ok: we can copy objects like this,not calling to constructor
//    Demo demoobj4;//calling to constructor
//    demoobj4 = demoobj1;//not calling to constructor
    int *c = new int(30);
    demoobj1.ptr = c;
    Demo demoobj5(demoobj1);
}
