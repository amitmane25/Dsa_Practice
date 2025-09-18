#include <iostream>
#include <iomanip> 

using namespace std; 

// 10b is for use of typedef in c++
// as with short code we can assign the name with salary eid and favchar


typedef struct Employee{
    /* data */
    int eid;
    char favchar;
    double salary;
}ep;

int main(){
    
    ep amit;
    ep sahil;
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
}