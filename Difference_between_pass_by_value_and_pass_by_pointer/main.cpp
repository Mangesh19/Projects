#include <iostream>

using namespace std;

class Demo
{
public:
    Demo():a(10)
    {

    }
public:
    int a;
    void displayPassByPointer(Demo *demoptr);
    void displayPassByValue(Demo demoobj);
};

void Demo::displayPassByPointer(Demo *demoptr)
{
    demoptr->a = 20;
    std::cout<<"demoptr->a"<<demoptr->a<<endl;
}

void Demo::displayPassByValue(Demo demoobj)
{
    demoobj.a = 30;
}
int main(int argc, char *argv[])
{
    Demo obj;
    obj.displayPassByPointer(&obj);
    std::cout<<"After pass by pointer";
    std::cout<<"obj.a"<<obj.a<<endl;
    std::cout<<"After pass by value";
    obj.displayPassByValue(obj);
    std::cout<<"obj.a"<<obj.a<<endl;


    return 0;
}

/*notes:
pass by pointer-changes in formal arguments gets reflected in actual arguments
pass by value- changes in formal arguments doesnot reflect in actual arguments
*/
