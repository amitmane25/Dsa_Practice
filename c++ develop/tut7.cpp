#include <iostream>
#include <iomanip> 

using namespace std; 

int main(){

    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<i<<endl;//this will print until 7 as after this cmd 7 brake
        if(i==7){
            break;
        }
        cout<<i<<endl;//this will print until 6 as before this cmd 7 brake
    }

    for(int i=0;i<10;i++){
        
        if((i>4) && (i<7)){
            continue;
        }
        cout<<i<<endl;
    }
    

return 0;
}