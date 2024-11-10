#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name;
    int age;
    string course;
    string department;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> s = {"John Doe", 20, "Computer Science", "Data Structures"};
    s.display();
    return 0;
}
