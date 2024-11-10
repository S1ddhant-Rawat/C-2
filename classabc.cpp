#include <iostream>
using namespace std;

class B; // Forward declaration
class C;

class A {
private:
    int a1;
protected:
    int a2;
public:
    A(int x, int y) : a1(x), a2(y) {}
    friend class FriendClass;
};

class B {
private:
    int b1;
protected:
    int b2;
public:
    B(int x, int y) : b1(x), b2(y) {}
    friend class FriendClass;
};

class C {
private:
    int c1;
protected:
    int c2;
public:
    C(int x, int y) : c1(x), c2(y) {}
    friend class FriendClass;
};

class FriendClass {
public:
    void accessData(A &a, B &b, C &c) {
        cout << "A's private: " << a.a1 << ", protected: " << a.a2 << endl;
        cout << "B's private: " << b.b1 << ", protected: " << b.b2 << endl;
        cout << "C's private: " << c.c1 << ", protected: " << c.c2 << endl;
    }
};

int main() {
    A a(10, 20);
    B b(30, 40);
    C c(50, 60);

    FriendClass friendObj;
    friendObj.accessData(a, b, c);

    return 0;
}
