#include <iostream>
using namespace std;

class person{
    private:
        int age;
        string name;
        string address;
    
    public:
    void input(){
        cout <<"Enter age: ";
        cin >>age;
        cout <<"Enter name: ";
        cin >>name;
        cout <<"Enter address: ";
        cin >>address;
    }
    void show(){
        cout <<"Age: " <<age <<endl;
        cout <<"Name: " <<name <<endl;
        cout <<"Address: " <<address <<endl;
    }
};

int main() {
    
    person raj;
    
    raj.input();
    raj.show();
    
   return 0;
}