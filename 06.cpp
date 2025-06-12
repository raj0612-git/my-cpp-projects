#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    //type casting
    int a = 10;
    double b = 9.23456789;

    // char c = 'A';
    // cout << typeid(a).name() <<endl;
    // cout << typeid(b).name() <<endl;
    // cout << typeid(c).name() <<endl;

    //implicit type casing
    double a2 = a;
    cout << a2 <<endl;
    int b2 = b;
    cout << b2 <<endl;

    //explicit type casing
    double a3 = (double)a;
    cout << a3 <<endl;
    int b3 = (int)b;
    cout << b3 <<endl;

    return 0;
}