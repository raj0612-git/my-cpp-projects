#include <iostream>
using namespace std;

class base1 {
    private:
    int a, b, c;
    public:
    void input() {
        cout << "Enter value: ";
        cin >> a >> b;
    }
    void show() {
        c = a + b;
        cout << "sum: " << c << endl;
    }
};
class base2 {
    private:
    int a, b, c;
    public:
    void input2() {
        cout << "Enter value: ";
        cin >> a >> b;
    }
    void show2() {
        c = a - b;
        cout << "sum: " << c << endl;
    }
};
class derive:public base1, public base2 {
    private:
    int a, b, c;
    public:
    void input3() {
        cout << "Enter value: ";
        cin >> a >> b;
    }
    void show3() {
        c = a * b;
        cout << "sum: " << c << endl;
    }
}

int main() {

    base1 ob;
    ob.input2();
    ob.show2();

    base2 ob2;
    ob2.input2();
    ob2.show2();

    derive ob3;
    ob3.input3();
    ob3.show3();

    return 0;
}