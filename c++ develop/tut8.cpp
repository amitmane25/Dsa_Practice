#include <iostream>
#include <iomanip> 

using namespace std; 

int main(){

    // pointer--> data typewhich store address of other data type.
    
    int a=9;
    int* b;
    b=&a;


// reference of address
    cout<<"the adress of a is " << &a <<endl;
    cout<<"the adress of a is " << b <<endl;

// derefence of address
    cout<<"value at b is "<<*b;

// pointer to pointer address reference

    int** c=&b;
    cout<<"the address of the pointer  "<<c<<endl;
    cout<<"the addres of the pointer  "<<&b<<endl;
    cout<<"the addres of the pointer  "<<&c<<endl;
    cout<<"the value of the pointer  "<<*c<<endl;
    cout<<"the value(value) of the pointer  "<<**c<<endl;

    return 0;
}