#include <iostream>
#include <iomanip> 

using namespace std; 

    class complex{
        // private:
        int a;
        int b;
        public:
            
        void print(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        complex (int ,int);// constructor
        void printf();
    };

    complex :: complex(int v1,int v2){
        a=v1;
        b=v2;
    }

    void complex :: printf(){
                cout<<a<<"+"<<b<<"i"<<endl;
            }

    class points{
        int a1;
        int b1;

        public:
            points(int x,int y){
                a1=x;
                b1=y;
            }
            void printf(){
                cout<<"point is ("<<a1<<","<<b1<<")"<<endl;
            }
    };

int main(){

    complex k(10,20);
    k.print();
    k.printf();

    complex a = complex(5,10);
    a.print();
    // a.complex(9,10); cant run this as we can't do this only;
    a.printf();

    points p(10,15);
    p.printf();


return 0;
}