#include <iostream>
#include <string>
using namespace std;

class Student;

class StudentDetails {
public:
    static void displayDetails(Student &s);
};

class Student {
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}
    friend class StudentDetails;
};

void StudentDetails::displayDetails(Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student s("John Doe", 20, "Computer Science", "Data Structures");
    StudentDetails::displayDetails(s);
    return 0;
}
