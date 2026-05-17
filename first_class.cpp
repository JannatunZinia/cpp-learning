#include<iostream>
#include<string>
using namespace std;

// class definition - the buleprint 
class student {
    public:
    // Attributes - what a student has 
    string name ;
    int age;
    double gpa;
    //Methods-what a student can do 
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
    //create an object from the student class
   student student1;
   student1.name ="Jannatun" ;
   student1.age = 20;
   student1.gpa = 3.8;

   // create another object from the student class
    student student2;
    student2.name = "Sadia";
    student2.age = 22;
    student2.gpa = 3.9;
    // call the method of the student class using the objects
    student1.introduce ();
    cout << endl;
    student2.introduce ();
    cout << endl;

    student2.study();
    student1.study();

    return 0;

}