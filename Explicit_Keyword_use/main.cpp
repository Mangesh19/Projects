#include <iostream>

using namespace std;

class Complexs
{
private:
    double real;
    double imag;

public:
    // Default constructor
    explicit Complexs(double r = 0.0, double i = 0.0) : real(r), imag(i)
    {

    }

    // A method to compare two Complex numbers
    bool operator == (Complexs rhs)
    {
       return (real == rhs.real && imag == rhs.imag)? true : false;
    }
};

int main()
{
    // a Complex object
    Complexs com1(3.0, 0.0);

    if (com1 == 3.0)
       cout << "Same"<<endl;
    else
       cout << "Not Same"<<endl;
     return 0;
}

