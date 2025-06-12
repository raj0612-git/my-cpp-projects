#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class father{
    protected:
    string surname="karmakar";
 
};
class son1:father{
    private:
    string name="raj1";
    
    public:
    void show(){
         cout << name <<" " << surname << endl;
    }
};
class son2:father{
    private:
    string name="raj2";
    
    public:
    void disp(){
        cout << name <<" " << surname <<endl;
    }
};

int main(){

    son1 s1;
    s1.show();
    
    son2 s2;
    s2.disp();
    
    
    return 0;
}