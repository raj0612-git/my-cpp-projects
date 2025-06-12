#include <iostream>
using namespace std;

int main() {
    char value;
    int num1, num2;

    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "What operation do you want to perform: ";
    cin >> value;
    cout << "Enter the value of num2: ";
    cin >> num2;

    switch (value) {
        case '+':
            cout << "Addition: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtraction: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Multiplication: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Division: " << num1 / num2 << endl;
            break;
        case '%':
            cout << "Modular: " << num1 % num2 << endl;
            break;
            
        default:
            cout << "Unidentified operation!" << endl;
            break;
    }

    return 0;
}