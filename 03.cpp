#include <iostream>
using namespace std;

namespace first {
    void show() {
        cout << "Hello ";
    }
}
namespace second {
    void show() {
        cout << "World";
    }
}

int main() {

    first::show();
    second::show();
    
    return 0;
}