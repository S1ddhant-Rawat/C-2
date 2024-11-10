#include <iostream>
using namespace std;

class Sum {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    int add(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    Sum s;
    cout << "Sum of two numbers: " << s.add(2, 3) << endl;
    cout << "Sum of three numbers: " << s.add(2, 3, 4) << endl;
    cout << "Sum of four numbers: " << s.add(2, 3, 4, 5) << endl;
    return 0;
}

