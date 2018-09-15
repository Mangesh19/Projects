#include <iostream>

using namespace std;

class Demo
{
public:
    char *s;
    Demo()
    {
        s = new char[10];
        std::cout<<"1st s"<< *s;
        s = new char[20];
        std::cout<<"2nd s"<< *s;
    }
};


int main(int argc, char *argv[])
{
    Demo demoobj;
    return 0;
}
