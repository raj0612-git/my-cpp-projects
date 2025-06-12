#include <iostream>
using namespace std;
int add() {
    int a=10, b=20; //return
    return a+b;
}

int main(){

    int num;
    for(num=1; num<=10; num++){
        if(num == 5){
            // break;
            // continue;
            goto out;
        }
        cout << num << endl;
    }
    cout << "Hi viewer...!" << endl;
    out:cout << "Hello leaner...!" << endl;
    
    cout << add();
    
    return 0;
}