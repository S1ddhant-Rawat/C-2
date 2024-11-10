#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int val = 0) : a(val) {}

    Number& operator++() {
        a += 5;
        return *this;
    }

    Number& operator--() {
        a -= 1;
        return *this;
    }

    Number operator-() {
        a = -a;
        return *this;
    }

    void display() const {
        cout << "Value of a: " << a << endl;
    }

    friend void showValue(Number& num);
};

void showValue(Number& num) {
    cout << "Friend function - Value of a: " << num.a << endl;
}

int main() {
    Number num(10);
    
    ++num;
    num.display();

    --num;
    num.display();

    -num;
    num.display();

    showValue(num);

    return 0;
}
