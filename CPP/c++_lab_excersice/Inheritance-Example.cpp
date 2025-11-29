#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class - Student
class Student : public Person {
private:
    string course;
    float marks;

public:
    void inputStudentData() {
        inputPersonData();
        cout << "Enter course: ";
        cin >> course;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudentData() {
        cout << "\n--- Student Details ---" << endl;
        displayPersonData(); 
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Derived class - Teacher
class Teacher : public Person {
private:
    string subject;
    float salary;

public:
    void inputTeacherData() {
        inputPersonData(); 
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() {
        cout << "\n--- Teacher Details ---" << endl;
        displayPersonData(); 
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s1;
    Teacher t1;

    cout << "Enter Student Details:\n";
    s1.inputStudentData();

    cout << "\nEnter Teacher Details:\n";
    t1.inputTeacherData();

    // Display details
    s1.displayStudentData();
    t1.displayTeacherData();

    return 0;
}

