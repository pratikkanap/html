#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string course;
    virtual void display() = 0;  // Changed return type to void for display
};

class Student : public Person {
private:
    int rollno;
    int marks[4];

public:
    Student(string n, string c, int r, int m1, int m2, int m3, int m4) {
        name = n;       // Assign string directly, not to array indexes
        course = c;
        rollno = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
    }

    void display() override {
        cout << "The roll number is: " << rollno << endl;
        cout << "The marks are: ";
        for (int i = 0; i < 4; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "The name of the student is: " << name << endl;
        cout << "The course is: " << course << endl;
    }
};

class Faculty : public Person {
private:
    int empid;

public:
    Faculty(string n, string c, int id) {
        name = n;
        course = c;
        empid = id;
    }

    void display() override {
        cout << "The employee number is: " << empid << endl;
        cout << "The name of the faculty is: " << name << endl;
        cout << "The course is: " << course << endl;
    }
};

int main() {
    // Input for Student
    string s_name, s_course;
    int s_rollno, m1, m2, m3, m4;

    cout << "Enter Student Name: ";
    getline(cin, s_name);

    cout << "Enter Student Course: ";
    getline(cin, s_course);

    cout << "Enter Roll Number: ";
    cin >> s_rollno;

    cout << "Enter 4 marks separated by space: ";
    cin >> m1 >> m2 >> m3 >> m4;
    cin.ignore();  // Clear newline from input buffer

    Student s(s_name, s_course, s_rollno, m1, m2, m3, m4);

    // Input for Faculty
    string f_name, f_course;
    int f_empid;

    cout << "\nEnter Faculty Name: ";
    getline(cin, f_name);

    cout << "Enter Faculty Course: ";
    getline(cin, f_course);

    cout << "Enter Employee ID: ";
    cin >> f_empid;

    Faculty f(f_name, f_course, f_empid);

    // Display info
    cout << "\nDisplaying Student Info:\n";
    s.display();

    cout << "\nDisplaying Faculty Info:\n";
    f.display();

    return 0;
}
