#include <iostream>
using namespace std;

inline int  fun(int a, int b, int c) {
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}

int main() {

    int value = fun(34, 67, 23);
    cout << value;

    return 0;
}