#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a=64;
    int b=234;
    int c=3992;
    int d=239242;

    cout<<"the value of a"<<a<<endl;
    cout<<"the value of b"<<b<<endl;
    cout<<"the value of c"<<c<<endl;

    cout<<"the value of a"<<setw(4)<<a<<endl;
    cout<<"the value of b"<<setw(4)<<b<<endl;
    cout<<"the value of c"<<setw(4)<<c<<endl;


    cout<<"the value of d"<<setw(4)<<d<<endl;



    // setw(n) provides the n digit of number to any number less than n.
    // to use setw we need to include iomanip.

    return 0;
}