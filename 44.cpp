#include <iostream>
using namespace std;

class A{
    protected:
    int a, b;
    public:
    void show(){
        a=10;
        b=20;
        cout << a << endl << b << endl;
    }
};
class derive:public A{
    public:
    void disp(){
        a=30;
        b=40;
        cout << a << endl<< b << endl;
    }
};

int main(){
    
    derive obj;
    obj.show();
    obj.disp();
    
    
    return 0;
}