#include <iostream>
using namespace std;

class A{
    private:
    int a;
    
    public:
    A(){
        a=100;
        cout << a;
    }
};

int main(){
    
    A obj;
    
    return 0;
}