#include <iostream>
#include <iomanip> 

using namespace std; 

class office{
    int id;
    static int count;

    public:
    // int id;
    void setdata(void);
    void getdata(void);

};

void office :: setdata(void){
    cout<<"enter the id"<<endl;
    cin>>id>>endl;
    count++;
}

void office :: getdata(void){
    cout<<"the id is"<<id<<count<<endl;

}

int office::count;

int main(){

    office amit;
    amit.setdata();
    amit.getdata();

    // sahil.setdata();
    // sahil.getdata();

    // ramesh.setdata();
    // ramesh.getdata();

    // jaya.setdata();
    // jaya.getdata();


return 0;
}