#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    
    double bal=1000.00;
    try{
        double amt;
        
        // Deposit
        cout <<"Enter Deposit Amount: ";
        cin >>amt;
        if(amt<=0){
            throw invalid_argument("Invalid Deposit Amount: ");
            //cout <<"InvalidDepositAmount: " <<endl;
        }    
        bal=bal+amt;
        cout <<"Available Amount: " <<bal <<endl;
        
        // Withdrawn
        cout <<"Enter Withdrawn Amount: ";
        cin >>amt;
        if(amt<=0){
            throw invalid_argument("Invalid Deposit Amount: ");
            //cout <<"InvalidDepositAmount: " <<endl;    
        }
        if(amt>bal){
            throw runtime_error("Insufficient fund");
            //cout <<"insufficient fund." <<endl;
        }
        bal=bal-amt;
        cout <<"Available Amount: " << bal << endl;
    }
    catch(exception e) {
        cout << e.what();
    }

    /* int a =10, b = 0;
    int c = a /b; // runtime-error
    cout << c << endl;
    cout << "LearnCoding"; */

    return 0;
}