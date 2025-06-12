#include <iostream>
using namespace std;

int main() {

    /* int a[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    } */

    int a[5];
    cout << "Enter Array Element: ";
    for(int i = 0; i < 5; i++) {
        cin >>  a[i];
    }
    // Ascending order
    for(int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    // Descending order
    for(int i = 0; i > 4; --i) {
        cout << a[i] << endl;
    }

    //only one element
    cout << a[2] << endl;

    return 0;
}