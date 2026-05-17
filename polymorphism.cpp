#include <iostream>
using namespace std;

class Shape {
public:
    string color;

    Shape(string c) {
        color = c;
    }

    // Virtual function — can be overridden by child classes
    virtual double getArea() {
        return 0;
    }

    virtual void display() {
        cout << "Shape color: " << color << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Circle : public Shape {
public:
    double radius;

    Circle(string c, double r) : Shape(c) {
        radius = r;
    }

    double getArea() override {
        return 3.14159 * radius * radius;
    }

    void display() override {
        cout << "Circle — color: " << color << " radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape {
public:
    double width, height;

    Rectangle(string c, double w, double h) : Shape(c) {
        width = w;
        height = h;
    }

    double getArea() override {
        return width * height;
    }

    void display() override {
        cout << "Rectangle — color: " << color << " width: " << width << " height: " << height << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {
    Circle c("red", 5.0);
    Rectangle r("blue", 4.0, 6.0);

    c.display();
    cout << endl;
    r.display();

    // Polymorphism — same pointer type, different behavior
    cout << "\n--- Polymorphism in action ---" << endl;
    Shape* shapes[2];
    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++) {
        shapes[i]->display();
        cout << endl;
    }

    return 0;
}