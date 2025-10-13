// it's code of code with harry and not my offical code.

#include <iostream>
#include <iomanip> 

using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    // int add(int a, int b)
    // {
    //     return (a + b);
    // }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
     friend int Calculator ::sumRealComplex(Complex, Complex);
     friend int Calculator ::sumCompComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main(){

    Complex c1,c2;
    
    c1.setNumber(2,3);
    c1.printNumber();

    c2.setNumber(4,5);
    c2.printNumber();

    Calculator ca1;

    int real=ca1.sumRealComplex(c1,c2);
    // ca1.add(a,b);
    
    int imag=ca1.sumCompComplex(c1,c2);

    cout<<real<<"+"<<imag<<"i"<<endl;


return 0;
}