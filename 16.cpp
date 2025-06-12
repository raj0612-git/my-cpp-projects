#include <iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age >= 18){
        if(age >= 18 && age <= 59){
            cout << "Eligible for Organizational work.";
        }else {
            cout << "Age is not satisfactory as per the organizational word.";
        }
    }else {
        cout << "Consisdered as minor: u can't forcetowork.";
    }

    return 0;
}