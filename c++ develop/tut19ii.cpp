#include <iostream>
#include <iomanip> 

using namespace std; 

class complex{
    int a;
    int b;

    public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;    
        }

        void getdata(complex o1,complex o2){
            a=o1.a + o2.a;
            b=o1.b + o2.b;
        }

        void printf(void){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){

    complex c1,c2,c3;

    c1.setdata(2,3);
    c1.printf();

    c2.setdata(4,5);
    c2.printf();

    c3.getdata(c1,c2);
    c3.printf();

return 0;
}