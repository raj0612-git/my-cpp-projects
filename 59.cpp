#include <iostream>
using namespace std;

template <class T>  // function template
void show(T a, T b) {
    cout << "a: " << a << "b: " << b << endl;
}

int main(){

    int p = 10, q = 20;
    show(p, q);

    float s = 10.45, f =12.45;
    show(s, f);

    char m = 'a', n = 'b';
    show(m, n);

    return 0;
}

#include <iostream>
using namespace std;
template <class T>  // class template
class Show {
    T a, b;
    public:
    show(T p, T q) {
        a = p; b = q;
    }
    void show() {
        cout << "a: " << a << "b: " << b << endl;
    }

};

int main(){

    show<int> ob(10, 20);
    // show<float> ob(10.1, 20.2);
    // show<char> ob('a', 'b');
    ob.show();

    return 0;
}