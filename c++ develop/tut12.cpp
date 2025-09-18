#include <iostream>
#include <iomanip> 

using namespace std; 

// sum function is direct fuction whoch is used by program so its a proper fuction

int sum(int a,int b){

    // a and b are formal parameter but program use actual parameter

    int c=a+b;
    return c;
}

// product fuction is not diretly understand by the computer as it's a the last so for assurance we made this
// such type of fucyion is called prototype function.
int product(int,int);

// void g(void) of void g() is the is_same
void g();

int main(){

    // num1 and num2 are actual parameter used by program

    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    cout<<"the sum of 2 no."<<sum(num1,num2)<<endl;
    cout<<"the product of 2 no."<<product(num1,num2)<<endl;
    g();

return 0;
}
int product(int a,int b){
    int c=a*b;
    return c;
}

void g(){
    cout<<"print hello world";
}