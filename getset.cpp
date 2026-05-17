#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:
    Student(string n, int a, double g) {
        name = n;
        setAge(a);
        setGpa(g);
    }

    // Getters — read private data
    string getName() { return name; }
    int getAge() { return age; }
    double getGpa() { return gpa; }

    // Setters — write private data with validation
    void setAge(int a) {
        if (a < 0 || a > 150) {
            cout << "Invalid age!" << endl;
            age = 0;
        } else {
            age = a;
        }
    }

    void setGpa(double g) {
        if (g < 0.0 || g > 4.0) {
            cout << "Invalid GPA! Must be 0.0 to 4.0" << endl;
            gpa = 0.0;
        } else {
            gpa = g;
        }
    }

    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "GPA: " << getGpa() << endl;
    }
};

int main() {
    Student s1("Jannatun", 20, 3.8);
    s1.display();

    cout << "\nTrying invalid values:" << endl;
    s1.setAge(-5);
    s1.setGpa(9.9);

    cout << "\nUpdating with valid values:" << endl;
    s1.setAge(21);
    s1.setGpa(3.9);
    s1.display();

    return 0;
}