#include<iostream>
#include<string>
using namespace std;
class BankAccount {
    private:
    double balance; // Encapsulated data member
    string owner;

    public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        owner = "Unknown";
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }

    // constructor 
    BankAccount(string name , double initialBalance) {
        owner = name;

        if (initialBalance >= 0) {
            balance = initialBalance;


        } else {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
        cout << "Account created for " << name << " with initial balance: $" << balance << endl;
    }
     // Getter — reads private data safely
    double getBalance() {
        return balance;
    }

    string getOwner() {
        return owner;
    }

    // Methods that control HOW balance changes
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
            return;
        }
        balance += amount;
        cout << "Deposited " << amount << ". New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount!" << endl;
            return;
        }
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrew " << amount << ". New balance: " << balance << endl;
    }

    void displayInfo() {
        cout << "Account owner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Jannatun", 1000);
    account.displayInfo();

    cout << endl;
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(2000);  // Should fail!
    account.deposit(-100);   // Should fail!

    cout << "\nFinal balance: " << account.getBalance() << endl;

    return 0;
}