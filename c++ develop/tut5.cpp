#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int age;
    // cout<"enter age\n";2
    cin>>age;

    switch (age)
    {
    case 11:
        cout<<"age is 18";
        break;
    case 17:
        cout<<"age is 17";
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