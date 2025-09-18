#include <iostream>
using namespace std;

int main(){
    int a=34;
    const int b=64;
    cout<<"the value of a & b is"<<a<<"&"<<b<<endl;
    a=5;
    // b=55;  can't change the constant value in c++
    cout<<"the value of a & b was"<<a<<"&"<<b;

    return 0;
}
