#include <iostream>
#include <iomanip> 

using namespace std; 

inline int product(int a,int b){
    // use incline fnction when the operation is small and is going to
    // to be used by multiple lines for example sum product sub and etc.
    return a*b;
}

// never use inline and static together as it will occupy ore storage
int staticproduct(int a,int b){
    static int c=0; // this execute only one
    c=c+1;
    return a*b+c;
}

float moneytook(int principal,float rate=1.04){
    return principal*rate;
}

int main(){

    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;
    // cout<<"product of 4&5 is"<<product(4,5)<<endl;

    // cout<<staticproduct(5,5)<<endl;
    // cout<<staticproduct(5,5)<<endl;
    // cout<<staticproduct(5,5)<<endl;
    // cout<<staticproduct(5,5)<<endl;
    // cout<<staticproduct(5,5)<<endl;
    // cout<<staticproduct(5,5)<<endl;

    cout<<"the principal amt 100000"<<moneytook(100000)<<"after one year will get\n";
    cout<<moneytook(100000,1.1);



return 0;
}