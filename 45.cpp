#include <iostream>
using namespace std;

class A{
    private:
    
    public:
    int a;
    void show();
    /*void show(){
        a=10;
        scout << "inSide the classes " << a << endl;
    }*/
};
void A::show(){
    a=10;
    cout << "outSide the class " << a <<endl;
}

int main(){
    
    A obj;
    obj.show();
    obj.a=20;
    
    cout << "outside2 the class " << obj.a <<endl;
    
    return 0;
}