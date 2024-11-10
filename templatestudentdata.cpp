#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Student {
    T name;
    int age;
    string course;
    string department;

public:
    Student(T n, int a, string c, string d) : name(n), age(a), course(c), department(d) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> s("John Doe", 20, "Computer Science", "Data Structures");
    s.display();
    return 0;
}
