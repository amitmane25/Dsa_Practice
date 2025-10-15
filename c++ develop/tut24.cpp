// creating constructor in cpp.
// Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created.


#include <iostream>
#include <iomanip> 

using namespace std; 

    class complex{
        int a,b;
        public:
            complex();//{
                // a=0;
                // b=9;
            // }
            void complexw(int k){
                a=k;
                int f;
                cout<<a<<"+"<<f<<"i"<<endl;
            }
        void display();
    };
    void complex :: display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }

    complex :: complex(){

    }

int main(){

    complex c1,c2;
    c1.display();

    c2.complexw(7);

return 0;
}