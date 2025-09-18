#include <iostream>
#include <iomanip> 

using namespace std; 
struct Employee{
    /* data */
    int eid;
    char favchar;
    double salary;
};

int main()
{
    
    struct Employee amit;
    struct Employee sahil;
    struct Employee ramesh;
    struct Employee jaya;

    amit.eid = 1;
    sahil.eid = 2;
    ramesh.eid = 3;
    jaya.eid = 4;

    amit.favchar ='a';
    sahil.favchar = 's';
    ramesh.favchar = 'r';
    jaya.favchar = 'j';

    amit.salary=199.99;
    sahil.salary=121.23;
    ramesh.salary=10.000;
    jaya.salary=1213.1;

    cout<<amit.eid<<endl;
    cout<<jaya.favchar<<endl;
    cout<<sahil.salary<<endl;
    


return 0;
};