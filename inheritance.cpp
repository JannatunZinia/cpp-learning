#include <iostream>
using namespace std;

// PARENT class
class Animal {
public:
    string name;
    int age;

    Animal(string n, int a) {
        name = n;
        age = a;
    }

    void eat() {
        cout << name << " is eating" << endl;
    }

    void sleep() {
        cout << name << " is sleeping" << endl;
    }
};

// CHILD class — inherits from Animal
class Dog : public Animal {
public:
    string breed;

    Dog(string n, int a, string b) : Animal(n, a) {
        breed = b;
    }

    void bark() {
        cout << name << " says: Woof!" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Breed: " << breed << endl;
    }
};

// Another CHILD class
class Cat : public Animal {
public:
    bool isIndoor;

    Cat(string n, int a, bool indoor) : Animal(n, a) {
        isIndoor = indoor;
    }

    void meow() {
        cout << name << " says: Meow!" << endl;
    }
};

int main() {
    Dog dog("Rex", 3, "German Shepherd");
    dog.display();
    dog.eat();      // inherited from Animal
    dog.sleep();    // inherited from Animal
    dog.bark();     // Dog's own method

    cout << endl;

    Cat cat("Luna", 2, true);
    cat.eat();      // inherited from Animal
    cat.meow();     // Cat's own method

    return 0;
}