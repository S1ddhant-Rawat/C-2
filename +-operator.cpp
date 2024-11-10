#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int val = 0) : a(val) {}

    Number operator+(const Number& other) {
        return Number(a + other.a);
    }

    Number operator-(const Number& other) {
        return Number(a - other.a);
    }

    void display() const {
        cout << "Value of a: " << a << endl;
    }

    friend Number addNumbers(const Number& num1, const Number& num2);
    friend Number subtractNumbers(const Number& num1, const Number& num2);
};

Number addNumbers(const Number& num1, const Number& num2) {
    return Number(num1.a + num2.a);
}

Number subtractNumbers(const Number& num1, const Number& num2) {
    return Number(num1.a - num2.a);
}

int main() {
    Number num1(10), num2(5);

    Number sum = num1 + num2;
    sum.display();

    Number difference = num1 - num2;
    difference.display();

    Number sumFriend = addNumbers(num1, num2);
    sumFriend.display();

    Number diffFriend = subtractNumbers(num1, num2);
    diffFriend.display();

    return 0;
}
