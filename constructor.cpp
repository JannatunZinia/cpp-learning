#include<iostream>
#include <string>
using namespace std;
class student {
    public:
    string name ;
    int age;
    double gpa;
    //default constructor-no parameters
    student() {
        name = "unknown";
        age = 0;
        gpa = 0.0;
        cout << "A new student was created ! " << endl;

    }
//parameterized constructor - with parameters
    student(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
        cout << "A new student was created ! " << endl;

    }
    void introduce () {
        cout << "Hi! I am " << name << endl;
        cout << "I am " << age  << endl;
        cout << "my gpa is " <<gpa << endl;
    }

    void study () {
        cout << name << " is studying hard!" << endl;
  
}
};
int main () {
    // uses default constructor 
    student student1("Jannatun",20,3.8);
    student1.introduce();
    cout << endl;
    //uses parameterized constructor
    student student2("Sadia", 22, 3.9);
    student2.introduce();
    cout << endl;
    student2.study();
    student1.study();
    return 0;
}

