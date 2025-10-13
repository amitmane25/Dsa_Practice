// "Making the entire class a friend is easier because 
// there is no need to forward declare individual functions.
//below is the exapmle of that only..


#include <iostream>
using namespace std;

class complex {
    int a;
    int b;

    friend class calculator;

public:
    void set(int v1, int v2) {
        a = v1;
        b = v2;
    }
    void print() {
        cout << a << "+" << b << "i" << endl;
    }
};

class calculator {
public:
    int complexrealsum(complex o1, complex o2) {
        return o1.a + o2.a;
    }
    int compleximagsum(complex o1, complex o2) {
        return o1.b + o2.b;
    }
};

int main() {
    complex c1, c2;
    c1.set(9, 21);
    c1.print();

    c2.set(7, 9);
    c2.print();

    calculator ca1;
    int realSum = ca1.complexrealsum(c1, c2);
    int imagSum = ca1.compleximagsum(c1, c2);

    cout << realSum << "+" << imagSum << "i" << endl;

    return 0;
}
