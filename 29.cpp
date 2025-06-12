#include <iostream>
using namespace std;

struct Emp{
    string name; // 8 bytes
    int Eid; //4 bytes
    double salary; // 8 bytes 
    char ch; // 1 bytes 
};

int main() {
    
    struct Emp E;
    /*
    cout <<sizeof(E.name) <<" bytes" <<endl;
    cout <<sizeof(E.Eid) <<" bytes" <<endl;
    cout <<sizeof(E.salary) <<" bytes" <<endl;
    */
    
    /*
    E.name = "Raj";
    E.Eid = 123456;
    E.salary = 17000;
    cout <<E.name <<endl;
    cout <<E.Eid <<endl;
    cout <<E.salary <<endl;
    */
    
    cout <<sizeof(Emp);
    
    return 0;
}