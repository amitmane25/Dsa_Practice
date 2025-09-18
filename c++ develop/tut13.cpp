#include <iostream>
#include <iomanip> 

using namespace std; 

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swappointer(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void swapreference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}


int main(){

    int x;
    int y;
    cin>>x;
    cin>>y;
    cout<<x<<"and"<<y<<endl;
    
    swap(x,y);
    // this swap cannot change swap as the x and y are actual parameter
    // the formal parameter cannot change the actual
    cout<<x<<"and"<<y<<endl;

    swappointer(&x,&y);
    // it swap as it changes the address and gives the address to each other 
    //it was swap by pointer..
    cout<<x<<"and"<<y<<endl;

    swapreference(x,y);
    // ths metod also swap by reference method.
    cout<<x<<"and"<<y<<endl;


return 0;
}