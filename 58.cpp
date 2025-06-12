#include <iostream>
using namespace std;

class A {
    private:
    int a = 10, b =20;
    public:
    void show() {
        cout << a << " " << b << endl;
    }
    friend class B;
};
class B {
    public:
    void diply(A r) {
        int add = r.a + r.b;
        cout << add;
    }
};

int main(){

    A obj; B obj2;
    obj.show();
    obj2.diply(obj);

    return 0;
}