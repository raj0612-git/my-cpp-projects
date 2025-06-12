#include <iostream>
using namespace std;

class A{
    private:
    
    public:
    class B{
        private:
        int a, b;
        
        public:
        void input(){
        cout << "Enter two number: ";
        cin >> a >> b;
        }
        
        void show(){
            cout << "The entered value is: " << a <<" " << b <<endl;
        }
    };
};

int main(){

    A::B obj;
    
    obj.input();
    obj.show();

    return 0;
}