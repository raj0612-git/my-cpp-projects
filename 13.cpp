#include <iostream>
using namespace std;

int main() {

    string singal;
    cout << "Enter the value of singal: ";
    cin >> singal;
    
    if(singal == "red"){
        cout << "Don't Go! plz stop, ";
    }
    cout << "Once the singal turns Green than u can go";

    return 0;
}