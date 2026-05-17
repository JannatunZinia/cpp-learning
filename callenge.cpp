#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;
    bool isAvailable;

public:
    // Constructor
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
        isAvailable = true; // starts as available
    }

    // Borrow book
    void borrowBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << title << " has been borrowed successfully." << endl;
        } else {
            cout << title << " is already borrowed!" << endl;
        }
    }

    // Return book
    void returnBook() {
        if (!isAvailable) {
            isAvailable = true;
            cout << title << " has been returned." << endl;
        } else {
            cout << title << " was not borrowed." << endl;
        }
    }

    // Display book info
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Availability: " 
             << (isAvailable ? "Available" : "Borrowed") << endl;
        cout << "------------------------" << endl;
    }

    // Getters
    string getTitle() { return title; }
    string getAuthor() { return author; }
    int getPages() { return pages; }
    bool getAvailability() { return isAvailable; }
};

int main() {

    // Create 3 books
    Book b1("C++ Basics", "Bjarne Stroustrup", 300);
    Book b2("Data Structures", "Mark Allen", 450);
    Book b3("OOP Concepts", "James Smith", 250);

    cout << "=== Library System ===\n" << endl;

    // Display all books
    b1.display();
    b2.display();
    b3.display();

    cout << "\n--- Borrowing Operations ---\n" << endl;

    // Borrow a book twice
    b1.borrowBook(); // first time success
    b1.borrowBook(); // second time fails

    cout << "\n--- Returning Book ---\n" << endl;

    b1.returnBook();

    cout << "\n--- Borrow Again ---\n" << endl;

    b1.borrowBook(); // works again

    return 0;
}