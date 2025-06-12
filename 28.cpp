#include <iostream>
using namespace std;

union Emp{
    int Eid;
    double salary;
    char ch;
};

int main() {
    
    union Emp E;
    E.Eid = 12345;
    cout <<E.Eid <<endl;
    E.salary = 56789;
    cout <<E.salary <<endl;
    E.ch = 'A';
    cout <<E.ch <<endl;
    
    return 0;
}