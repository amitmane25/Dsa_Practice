#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int age;
    cout<<"what is my age"<<endl;
    cin>>age;

    if ((age<14) && (age>1))
    {
        cout<<"you are toddler";
    }
    else if(age==14){
        cout<<"u r teen";
    }

    else if(age<=1){
        cout<<"not yet born in this world";
    }

    else{
        cout<<"u r mature";
    }
    
    
    switch (age)
    {
    case 11:
        cout<<"age is 18";
        break;
    case 14:
        cout<<"age is 14";
        break;
    case 18:
        cout<<"age is 18";
        break;
    case 21:
        cout<<"age is 21";
        break;
    
    default:
    cout<<"no default case";
        break;
    }

    return 0;
}