#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a = 10;
    int *p = &a;
    int **q = &p; // double star it means pointer to pointer
    
    cout <<a <<endl;
    cout <<&a <<endl;
    cout <<p <<endl;
    cout <<*p <<endl;
    
    cout <<q <<endl;
    cout <<*q <<endl;
    cout <<**q <<endl;
    cout <<&q <<endl;
    
    return 0;
}