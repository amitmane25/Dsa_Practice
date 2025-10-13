#include <iostream>
#include <iomanip> 

using namespace std;

    class complex
    {
        int a,b;
        friend complex sum(complex o1,complex o2);

        public:
            void set(int v1,int v2){
                a=v1;
                b=v2;
            }

            void print(void)
            {
                cout<<a<<"+"<<b<<"i"<<endl;
            }

    };

complex sum(complex o1,complex o2)
    {
        complex o3;

        // int k;
        // int y;
        // k=(o1.a + o2.a);
        // y=(o1.b + o2.b);
        // o3.set(k,y);

        o3.set((o1.a + o2.a),(o1.b + o2.b));
        return o3;
    }

int main(){

    complex c1,c2,c3;
    c1.set(2,3);
    c1.print();

    c2.set(4,5);
    c2.print();

    c3 = sum(c1,c2);
    c3.print();

return 0;
}