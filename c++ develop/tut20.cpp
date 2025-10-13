#include <iostream>
#include <iomanip> 

using namespace std; 

class complex{
    int a,b;

    public:
        void setdata(int n1,int n2){
            a=n1;
            b=n2;
        }
        void sum(complex o1,complex o2);

        // friend complex sum(complex o1,complex o2);
        // without the help offreind we used this to add thus we are genius yooo
        void print(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

void complex :: sum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }

int main(){

    complex c1,c2,c3;
    c1.setdata(2,3);
    c1.print();

    c2.setdata(5,5);
    c2.print();

    c3.sum(c1,c2);
    c3.print();

return 0;
}