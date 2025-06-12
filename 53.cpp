#include <iostream>
using namespace std;

class A {
    public:
    virtual void fun() {
        cout << "Hello World" << endl;
    }
};
class B: public A {
    public:
    void fun() {
        cout << "Hello World!" << endl;
    }
};

int main() {

    /* B obj;
    obj.A::fun(); */

    A*ptr; B obj;
    ptr =& obj;
    ptr -> fun();

    return 0;
}