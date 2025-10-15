//swapping of class with the help of friend function.
//we use here "&"... deepknowledge test

#include <iostream>
#include <iomanip> 

using namespace std; 

    class y;

    class x{
        int a;
        friend void exchange(x &,y &);

        public:
            void set(int data){
                a=data;

            }
            void display(void){
                cout<<a<<endl;
            }
    };

    class y{
        int b;
        friend void exchange(x &,y &);

        public:
            void set(int data){
                b=data;
            }
            void display(void){
                cout<<b<<endl;
            }
    };

    void exchange(x &v1, y &v2){
        int temp;

        temp = v1.a;
        v1.a = v2.b;
        v2.b = temp;

        // cout<<x.data1<<"&"<<y.data2<<endl;
    }

int main(){

    x fir;
    fir.set(9);

    y sec;
    sec.set(6);

    exchange(fir,sec);

    cout<<"the first class"<<endl;
    fir.display();

    cout<<"the second class"<<endl;
    sec.display();

return 0;
}