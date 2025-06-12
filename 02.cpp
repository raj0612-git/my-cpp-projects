#include <iostream>
using namespace std;
int num2 = 100; //global value 

int main() {

    int num1;
    cout << "Enter number: ";
    cin >> num1;
    cout << num1 <<endl;
    cout << :: num2; //global value declare

    return 0;
}