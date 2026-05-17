#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;
    double grades[3];

public:
    Student(string n, int i, double g1, double g2, double g3) {
        name = n;
        id = i;
        grades[0] = g1;
        grades[1] = g2;
        grades[2] = g3;
    }

    double getAverage() {
        return (grades[0] + grades[1] + grades[2]) / 3;
    }

    string getGrade() {
        double avg = getAverage();
        if (avg >= 90) return "A";
        else if (avg >= 80) return "B";
        else if (avg >= 70) return "C";
        else if (avg >= 60) return "D";
        else return "F";
    }

    void display() {
        cout << "ID: " << id << " | Name: " << name << endl;
        cout << "Grades: " << grades[0] << ", " << grades[1] << ", " << grades[2] << endl;
        cout << "Average: " << getAverage() << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "-------------------" << endl;
    }

    string getName() { return name; }
    double getAvg() { return getAverage(); }
};

int main() {
    Student students[3] = {
        Student("Jannatun", 1001, 88, 92, 85),
        Student("Sara", 1002, 75, 80, 78),
        Student("Ali", 1003, 60, 65, 70)
    };

    cout << "=== Student Management System ===" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    // Find best student
    int bestIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].getAvg() > students[bestIndex].getAvg()) {
            bestIndex = i;
        }
    }

    cout << "Best student: " << students[bestIndex].getName() << endl;

    return 0;
}