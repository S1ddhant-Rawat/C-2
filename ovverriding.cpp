#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10;  // Adding 10 for derived class
    }
};

int main() {
    Base *b = new Derived();
    cout << "Sum from Derived Class: " << b->sum(1, 2, 3) << endl;

    Derived d;
    cout << "Sum from Base Class using Derived object: " << d.Base::sum(1, 2, 3) << endl;

    delete b;
    return 0;
}
