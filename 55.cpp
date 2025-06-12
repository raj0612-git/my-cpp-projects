#include <iostream>
using namespace std;

class A {
    public:
    virtual void show() = 0;
    void diply() {
        cout << "base class";
    }
};
class B: public A {
    public: 
    void show() {
        cout << "derive class";
    }
};

int main() {

    A *p; B ob;
    p =& ob;
    p -> show();

    return 0;
}