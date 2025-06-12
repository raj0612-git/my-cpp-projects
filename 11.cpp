#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "Entre your name: ";
    cin >> name;
    do{
        cout << name;
        break;
    }while(name!="Hello_World");

    return 0;
}