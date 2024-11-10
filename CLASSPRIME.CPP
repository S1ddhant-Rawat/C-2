#include <iostream>
using namespace std;

class Student {
    int number;

public:
    Student(int n) : number(n) {}
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(Student &s) {
        int n = s.number;
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Student s(11);
    PrimeChecker checker;
    cout << "Is the number prime? " << (checker.isPrime(s) ? "Yes" : "No") << endl;
    return 0;
}
