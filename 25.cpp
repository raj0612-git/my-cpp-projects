#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a=100;
    cout <<a <<endl;
    int &ref=a;
    cout <<ref <<endl;
    cout <<ref++ <<endl;
    cout <<a <<endl;
    
    return 0;
}