#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; 

protected:
    int accountNumber; 

public:
    void initialize() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: $";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter deposit amount: $";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << ". New Balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw() {
        double amount;
        cout << "Enter withdrawal amount: $";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ". Remaining Balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.initialize();
    acc.deposit();
    acc.withdraw();
    acc.displayBalance();

    return 0;
}
[17-02-2025 11:47] Supriya Sahoo: #include<iostream>
using namespace std;
class student{
    private:
    int regdno;
    char name[20];
    public:
    void readDetails()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the registration number:";
        cin>>regdno;
    }
    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regdno << endl;
    }
};

int main() {
    student s1;
    s1.readDetails();
    s1.displayDetails();
    return 0;
}