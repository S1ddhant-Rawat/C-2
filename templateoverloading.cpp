#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    cout << "Sum of two integers: " << add(1, 2) << endl;
    cout << "Sum of three integers: " << add(1, 2, 3) << endl;

    cout << "Sum of two doubles: " << add(1.5, 2.5) << endl;
    cout << "Sum of three doubles: " << add(1.5, 2.5, 3.5) << endl;

    return 0;
}
