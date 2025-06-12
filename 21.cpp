#include <iostream>
using namespace std;

/*
void msg(){
    cout <<"HelloWorld!"; // puts("Hello World!");
} */

void msg(string msg, int num){
    cout << "Hello world! " << msg <<num << endl;
}

int main() {
    
    // msg();
    
    msg("how are u?? ", 100);
    
    return 0;
}