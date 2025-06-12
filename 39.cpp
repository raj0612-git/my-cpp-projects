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
    A(A &ref){
        a=ref.a;
        b=ref.b;
    }
    void show(){
        cout << a << " " << b << endl;
    }
};

int main(){
    
    A obj(20, 30);
    A obj2=obj;
    obj.show();
    obj2.show();
    
    return 0;
}