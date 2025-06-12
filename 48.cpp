#include <iostream>
using namespace std;

class base {

    private:
    int a;
    public:
    void input() {
        cout << "Enter value: ";
        cin >> a;
    }
    void show() {
        cout << "a: " << a << endl;
    }
};
class derive1:public base {

    private:
    int b;
    public:
    void input2() {
        cout << "Enter value: ";
        cin >> b;
    }
    void show2() {
        cout << "b: " << b << endl;
    }
};
class derive2:public derive1 {

    private:
    int c;
    public:
    void input3() {
        cout << "Enter value: ";
        cin >> c;
    }
    void show3() {
        cout << "c: " << c << endl;
    }
};

int main() {

    base ob;
    ob.input();
    ob.show();

    derive1 ob2;
    ob2.input2();
    ob2.show2();

    derive2 ob3;
    ob3.inpu3t();
    ob3.show3();

    return 0;
}