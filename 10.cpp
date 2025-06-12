#include <iostream>
using namespace std;

int main() {

    int pwd=4171;
    int myPwd;
    cout << "Enter Password: ";
    cin >> myPwd;
    while(myPwd > 0) {
        if(pwd!=myPwd) {
            cout << "Enter Password: ";
            cin >> myPwd;
        } else{
            cout << "Unlocked!!";
            break;
        }
    }

    return 0;
}