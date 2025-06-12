#include <iostream>
using namespace std;

class base {

    private:
    int a, b;
    public:
    void input() {
        cout << "Enter value: ";
        cin >> a >> b;
    }
    void show() {
        cout << "a: " << a << " " << "b: " << b << endl;
    }
};
class derive:public base {
    private:
    int m, n;
    public:
    void getdata() {
        cout << "Enter value: ";
        cin >> m >> n;
    }
    void display() {
        cout << "a: " << a << " " << "b: " << b << endl;
        cout << "m: " << m << " " << "n: " << n << endl;
    }
};

int main() {

    base ob;
    derive ob1;
    ob.input();
    ob.show();

    ob1.input();
    ob1.show();
    ob1.getdata();
    ob1.display();

    return 0;
}