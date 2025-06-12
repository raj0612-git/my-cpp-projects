#include <iostream>
using namespace std;
int b = 20; //global value

int main() {

    int a = 10; //local value
    static int c = 30; //static value
    cout << a <<endl;
    cout << b <<endl;
    cout << c;

    return 0;
}