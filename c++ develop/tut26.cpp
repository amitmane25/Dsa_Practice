// constructor overloading...

#include <iostream>
#include <iomanip> 

using namespace std; 

    class complex{
        int a;
        int b;
        public:
            complex(){
                a=0;
                b=0;
            }
            complex(int x,int y){
                a=x;
                b=y;
            }
            complex(int k){
                a=k;
                b=0;
            }

            void print(){
                cout<<a<<","<<b<<endl;           }
    };

int main(){

    complex l; //don't write like complex l(); it give an error..
    complex n(2);
    complex j(5,6);

    l.print();
    n.print();
    j.print();
return 0;
}