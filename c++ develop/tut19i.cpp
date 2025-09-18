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
        // void getdata(complex o1,complex o2){
        //     a = o1.a + o2.a;
        //     b = o1.b + o2.b;

        // }
        void print(void){
            cout<<"the number  "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){

    complex o1;
    complex o2;
    int v1,v2;
    k =o1.v1 +o2.v1;
    y= o2.v2 +o2.v2;


    complex c1,c2;

    c1.setdata(2,3);
    c1.print();

    c2.setdata(4,5);
    c2.print();

    // c3.setdata(k,y);
    // c3.print();


return 0;
}