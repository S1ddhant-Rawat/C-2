#include <iostream>
using namespace std;

class Student {
public:
    inline int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Student s;
    cout << "Sum of 5 and 3 is: " << s.sum(5, 3) << endl;
    return 0;
}
