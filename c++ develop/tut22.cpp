#include <iostream>
#include <iomanip> 

using namespace std;

class y;

class x{
    int obj1;
    public:
        void set(int val){
            obj1=val;
        }
        friend int add(x,y);
};

class y{
    int obj2;
    public:
        void set(int val){
            obj2=val;
        }
        friend int add(x,y);
};

int add(x v1,y v2){
    cout<<"value is"<<v1.obj1 + v2.obj2<<endl;
    return 0;
}

int main(){

    x x1;
    x1.set(20);

    y y1;
    y1.set(67);

    add(x1,y1);

return 0;
}