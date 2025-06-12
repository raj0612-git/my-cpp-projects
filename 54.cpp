#include <iostream>
using namespace std;

class Car {
    private:
    bool startEngine;
    public:
    void start() {
        startEngine = true;
        cout << "Engine Started" << endl;
    }
    void drive() {
        if(startEngine) {
            cout << "you r rady to drive";
        } else{
            cout << "Can't drive the car"
        }
    }
};

int main() {

    Car c;
    c.start();
    c.drive();

    return 0;
}