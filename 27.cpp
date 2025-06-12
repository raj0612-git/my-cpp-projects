#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define square(r) ((r)*(r))

int main() {
    
    int r;
    cout <<"Enter a Radius: ";
    cin >>r;
    double area = PI*square(r);
    cout <<"Area of Circle: " <<area;
    
    return 0;
}