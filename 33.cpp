#include <iostream>
using namespace std;

void fun(){

    class A{
        private:
        int a, b;
        
        public:
        void show(){
            cout <<"Enter the value a and b: ";
            cin >>a >>b;
            cout <<"value of a and b: " <<a <<" " <<b <<endl;
        }
    };
    A obj;
    obj.show();
}

int main() {
    
    fun();
    
   return 0;
}