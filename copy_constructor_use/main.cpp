#include <iostream>

using namespace std;

class Demo
{
public:
    Demo(const char* stringvar= nullptr)
    {
        names = stringvar;
    }
private:
 string names;
};

int main(int argc, char *argv[])
{
   Demo demoobj1("mangesh");
   Demo demoobj2 = demoobj1;
}
