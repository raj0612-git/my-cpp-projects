#include <iostream>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }else {
        return num*fact(num-1);
    }
}

int main() {
    
    int num;
    cout <<"Enter the value of num: ";
    cin >>num;
    int r=fact(num);
    cout <<"Factorial of " <<num <<" of " <<r;
    
    return 0;
}