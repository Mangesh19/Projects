#include <iostream>
#include <cstring>

using namespace std;

class Demo
{
private:
   char *s;
   int size;
public:
   Demo(const char* = NULL);
   ~Demo()
   {
       std::cout<<"Destructor called"<<endl;
   }
   Demo(const Demo&);
};

Demo::Demo(const char* str)
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
    delete s;
}

Demo::Demo(const Demo& old_str)
{
    size = old_str.size;
    s = new char[size+1];
    strcpy(s, old_str.s);
}

int main(int argc, char *argv[])
{
    Demo demo1("mangesh");
    Demo demo2 = demo1;
    Demo *demoptr = new Demo("Seema");
    delete demoptr;
//    demoptr = nullptr;
    delete demoptr;
//    demoptr = nullptr;
    delete demoptr;
//    demoptr = nullptr;
}
