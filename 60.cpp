#include <iostream>
using namespace std;

class A {
    private:
    int a;
    static int b;
    
    public:
    A (int x, int y) {
        a = x, b = y;
    }
    void show() {
        cout << a << " " << b;
    }
    static void disp() {
        cout << b; // a is not accessible
    }
};
int A :: b = 0;

int main(){

    A obj(10, 20), obj(100, 200);
    obj.show(); // 10, 20
    obj.show(); // 100, 200
    obj.disp(); // 200
    obj.show(); // 10, 200

    return 0;
}