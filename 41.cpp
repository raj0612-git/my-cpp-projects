#include <iostream>
using namespace std;

class A{
    private:
    int age;
    void show(){
        cout << "Hello_World!" << endl;
    }
    
    public:
    string name;
    void setValue(int a){
        age=a;
        show();
        cout << age <<endl;
    }
};

int main(){
    
    A obj;
    obj.name="raj";
    obj.setValue(19);
    cout << obj.name;
    
    return 0;
}