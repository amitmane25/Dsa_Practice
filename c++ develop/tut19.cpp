#include <iostream>
#include <iomanip> 

using namespace std;

class employee{
    int salary;
    int id;

    public:
    void setid(void){
        salary=150;
        cout<<"enter id"<<endl;
        cin>>id;
    }

    void getid(void){
        cout<<id<<"the salary"<<salary<<endl;
    }
};

int main(){

    employee bajaj[4];

    for(int i=0;i<4;i++){
        bajaj[i].setid();
        bajaj[i].getid();
    }

return 0;
}