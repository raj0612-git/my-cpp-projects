#include <iostream>
using namespace std;

int main() {

    string weather;
    cout << "Enter the weather condition: ";
    cin >> weather;
    
    if(weather == "raining"){
        cout << "U need umbrella to go out";
    }else {
        cout << "No need! u may go";
    }

    return 0;
}