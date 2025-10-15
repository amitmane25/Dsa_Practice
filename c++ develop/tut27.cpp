#include <iostream>
#include <iomanip> 

using namespace std; 

    class simple{
        int a1;
        int b1;
        int c1;

        public:
            simple(int a,int b=97,int c=67){
                a1=a;
                b1=b;
                c1=c;
            }
            void print();
    };

    void simple :: print(){
        cout<<a1<<","<<b1<<"and"<<c1<<endl;
    }

int main(){

    simple s1(2); // constructor default argument;
    s1.print(); // default argument will run of both

    simple s2(3,4); 
    s2.print(); //default argument will run of only c.

    simple s3(3,4,5);
    s3.print(); // overwrite hogaya..


return 0;
}