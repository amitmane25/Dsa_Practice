#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int marks[4]={23,45,67,89};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // marks[2]=455;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


    // int mathmarks[5];
    // mathmarks[0]=243;
    // mathmarks[1]=23;
    // mathmarks[2]=2543;
    // mathmarks[3]=2466;
    // mathmarks[4]=476;

    // // the math marks is given  below in the is_table
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<mathmarks[4]<<endl;


    // for(int i=0;i<4;i++){
    //     cout<<i<<" is "<<marks[i]<<endl;
    // }


    // int i=0;
    // while (i<4)
    // {
    //     /* code */
    //     cout<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }


    // // int i=0;
    // do
    // {
    //     /* code */
    //     cout<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<4);
    
    int* p=marks;
    // cout<<"it's an above code"<<p++<<endl;
    // cout<<"it's an above code"<<++p<<endl;
    cout<<"it's an above code"<<*(p)<<endl;
    cout<<"it's an above code"<<*(++p)<<endl;
    
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p+5)<<endl;

    return 0;
}