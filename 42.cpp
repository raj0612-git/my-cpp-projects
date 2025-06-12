#include <iostream>
using namespace std;

// compile-time polymorphism

void showInfo( int age ) {
    cout << age << endl;
}
void showInfo( string name) {
    cout << name << endl;
}
void showInfo(double salary) {
    cout << salary << endl;
}

// run-time polymorphism

class A{
    public:
    void disp(){
        cout << "It's class A" <<endl;
    }
};
class B:public A{
    public:
    void disp(){
        cout << "It's class B" <<endl;
    }
};

int main(){

    // compile-time polymorphism

    showInfo(20);
    showInfo("raj");
    showInfo(1.00);

    // run-time polymorphism

    A obj;
    obj.disp();
    B obj2;
    obj2.disp();
    
    return 0;
}