#include <iostream>
#include <iomanip> 

using namespace std; 

class shop{
    int itemID[5];
    int itemprice[5];
    int counter=0;
    // static int count;
    
    public:
    void setprice(void);
    void inticounter(void);
    void display(void);
    
    
};

void shop :: inticounter(void){
    counter=0;
    
}

void shop :: setprice(void){
    cout<<"enter id of your item"<<counter + 1 <<endl;
    cin>>itemID[counter];
    cout<<"enter item price"<<endl;
    cin>>itemprice[counter];
    counter++;
} 

void shop :: display(void){
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout<<"the id  "<<itemID[i]<<" the price "<<itemprice[i]<<endl;
        
    }
}

int main(){

    shop dukkan;
    dukkan.inticounter();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.setprice();
    
    
    dukkan.display();
    

return 0;
}