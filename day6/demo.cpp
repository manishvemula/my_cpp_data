#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int x) { this->x = x; }
    friend void show(A obj);  // Friend function (No `this` pointer)
};

void show(A obj) {  // Friend function definition
    cout << "Value of x: " << obj.x << endl;
    cout<<this;
}

int main() {
    A obj(10);  // Create an object of A
    show(obj);  // Pass the object to the friend function
    return 0;
}
