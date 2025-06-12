#include <iostream>
using namespace std;

class A{
    private:
    int a, b;
    
    public:
    void show(){
        a=10;
        b=20;
        cout << a << endl << b << endl;
    }
    friend class B;
};
class B{
    public:
    void disp(A ref){
        ref.a=30;
        ref.b=40;
        cout << ref.a <<endl << ref.b << endl;
    }

};

int main(){
    
    A obj;
    obj.show();
    B obj2;
    obj2.disp(obj);
    
    return 0;
}