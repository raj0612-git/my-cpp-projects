#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A{
    
    protected:
    int a, b;
    
    public:
    void input(){
        cout <<"Enter the value of a and b: ";
        cin >>a >>b;
    }
    void show(){
        cout <<"The value of a and b is: " <<a <<" " <<b <<endl;
    }
};
class B:public A{

    public:
    void disp(){
        cout <<"The value of a and b is: " << a << " " <<b <<endl;
    }
};

int main(){
    
    B obj;
    obj.input();
    obj.show();
    obj.disp();
    
    return 0;
}
