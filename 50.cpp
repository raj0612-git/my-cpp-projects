#include <iostream>
using namespace std;

class bace {
    private:
    int a, b, ;
    public:
    void input() {
        cout << "Enter value: ";
        cin >> a >> b;
    }
    void show() {
        cout << "sum: " << a+b << endl;
    }
};
class derive1:public base {
    private:
    int n1;
    public:
    void input2() {
        cout << "Enter value: ";
        cin >> b;
    }
    void show2() {
        cout << "n1: " << n1 << endl;
    }
};
class derive2:public base {
    private:
    int n2;
    public:
    void input3() {
        cout << "Enter value: ";
        cin >> b;
    }
    void show3() {
        cout << "n2: " << n2 << endl;
    }
};

int main() {

    derive1 ob1;
    derive2 ob2;

    ob1.input();
    ob1.show();
    ob1.input2();
    ob1.show2();

    ob2.input();
    ob2.show();
    ob2.input3();
    ob2.show3();

    return 0;
}