#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void changeValue(int *p){
    *p= *p + 10;
    cout <<"Pointer value: " << *p <<endl;
}

int main() {
    
    int num;
    cout << "Enter the value of num: ";
    cin >> num;
    cout << "Original value: " <<num <<endl;
    changeValue(&num);
    
    return 0;
}