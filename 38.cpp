#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A{
    private:
    int a, b;
    
    public:
    A(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout << a << " " << b;
    }
};

int main(){
    
    A obj(20, 30);
    obj.show();
    
    return 0;
}