#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i = 0;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;


for (int i=0;i<10;i++){
    cout<<i<<endl;
    // i++; if we used this then alternatively numbers will occur
}
// for (intiallization;condtion; updation)
// {
//     c++ code
// }
// syntax for for loop.

// int i=0;
// while (i<=11)
//  {
//     cout<<i<<endl;
//     i++;
//  }

    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=12);
    // if the condition is true then it will go to infinity.
    do
    {
        cout<<i<<endl;
        i++;
    } while (true); 
    // statement like true,35<40 and so on will make thi swork

    return 0;
}