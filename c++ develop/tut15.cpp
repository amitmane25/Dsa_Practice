#include <iostream>
#include <iomanip> 

using namespace std; 

int factorial(int a){
    if(a<=1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}

int fibonacci(int n){
    if (n<=1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int sum(float a,double b){
    return a+b;
}

float volume(int r,int h){
    cout<<"volume of cylinder";
    return 3.14*r*r*h;

}

float volume(int a){
    cout<<"volume of cube";
    return a*a*a;
}

float volume(int r,int h,int l){
    cout<<"volume of cuboid";
    return l*r*h;
}

int main(){

    // int a;
    // cin>>a;
    // cout<<"factorial "<<factorial(a);

    // int f;
    // cin>>f;
    // cout<<fibonacci(f);

    cout<<"sum "<<sum(12.44,2.345);
    cout<<"volume"<<volume(2,3,4)<<endl;;
    cout<<"volume"<<volume(2,3)<<endl;;
    cout<<"volume"<<volume(4)<<endl;;

return 0;
}