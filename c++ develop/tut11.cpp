#include <iostream>
#include <iomanip> 

// we use union to save memory as it use only one of the all.

// we use enum for more redable type of data..

using namespace std;
// struct employee
// {
//     /* data */
//     int eId; 
//     char favChar; 
//     float salary; 
// };

union money
{
    /* data */
    int rupees;
    char gold;
    double dollar;
};


int main(){

//     struct employee harry;
//      harry.eId = 1;
//      harry.favChar = 'c';
//      harry.salary = 120000000;
//      cout<<"The value is "<<harry.eId<<endl; 
//      cout<<"The value is "<<harry.favChar<<endl; 
//      cout<<"The value is "<<harry.salary<<endl;

    union money india;
    union money usa;
    india.rupees=87;
    usa.gold='g';
    usa.dollar=12.23;
    cout<<india.rupees<<endl;
    cout<<usa.gold<<endl; //uses only one at a time so prefernce to usa...
    cout<<usa.dollar<<endl;

    enum food{breakfast,lunch,dinner,noo_food};
    cout<<breakfast;
    cout<<breakfast+lunch+dinner<<endl;
    cout<<noo_food<<endl;

return 0;
}