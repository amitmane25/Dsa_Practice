//freind function to class 
//this is the real one made by me 
// I created 2 classes:
        //one for declaration and one for function
        //but that was wrong declare class one time and use 
        // scope resolution to write function of that class.....

#include<iostream>

using namespace std;

class complex;

class calculator{

    public:
    int complexrealsum(complex, complex);
    int compleximagsum(complex, complex);
    // void add(int f,int g){
    //     int d=f+g;
    //     cout<<d;
    // }
};

    class complex
    {
        int a;
        int b;
        friend int calculator :: complexrealsum(complex, complex);
        friend int calculator :: compleximagsum(complex, complex);

        public:
            void set(int v1,int v2){
                a=v1;
                b=v2;
            }

            void print(){
                cout<<a<<"+"<<b<<"i"<<endl;
            }
    };


            int calculator :: complexrealsum(complex o1, complex o2) {
                return (o1.a + o2.a);
            }

            int calculator :: compleximagsum(complex k1, complex k2) {
                
                return (k1.b + k2.b);
            }
    

int main(){

    complex c1,c2;
    c1.set(9,21);
    c1.print();

    c2.set(7,9);
    c2.print();

    calculator ca1;
    int realSum = ca1.complexrealsum(c1, c2);
    int imagSum = ca1.compleximagsum(c1, c2);

    cout << realSum << "+" << imagSum << "i" << endl;

    // calculator ca1;

    // int car = ca1.complexrealsum(c1,c2);

    // // // int impk = ca1.compleximagsum(c1,c2);

    // // cout<<main;
    // // //<<"+"<<impk<<"i"<<endl;

    return 0;
}