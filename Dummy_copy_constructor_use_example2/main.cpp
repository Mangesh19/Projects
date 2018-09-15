#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *s;
    int size;
public:
    String(const char* str = NULL);
};

String::String(const char *str)
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}


int main()
{
    String str1("GeeksQuiz");
    String str2 = str1;
}
