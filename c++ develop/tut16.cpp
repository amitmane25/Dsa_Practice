#include <iostream>
#include <iomanip> 

using namespace std; 

class employee{
        private:
        int a,b,c;
        public:
        int d,e;

        void setdata(int a1,int b1,int c1);
        void getdata(){
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
            cout<<"value of c : "<<c<<endl;
            cout<<"value of d : "<<d<<endl;
            cout<<"value of e : "<<e<<endl;
            
        }
    };
void employee :: setdata(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;
    }

int main(){
    employee amit;
    amit.d=3;
    amit.e=4;
    amit.setdata(7,8,9);
    amit.getdata();
        
    

return 0;
}       