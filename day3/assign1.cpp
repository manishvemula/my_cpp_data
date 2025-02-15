#include <iostream>
#include <string>
using namespace std;

class members {
    string name;
    long accountnumber;
    string accountype;
    int balance;

public:
    members() {
        cout << "-----------------members()---------------------" << endl;
    }
    ~members() {
        cout << "-----------------~members()---------------------" << endl;
    }

    // Function to accept user data
    void acceptdata() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountnumber;

        cout << "Enter Account Type (saving/loan/ppf/nps): ";
        cin >> accountype;

        cout << "Enter Initial Balance (Minimum ₹1000): ";
        cin >> balance;

        if (balance < 1000) {
            cout << "Minimum balance ₹1000 required! Setting balance to ₹1000.\n";
            balance = 1000;
        }
    }

    // Function to display account details
    void display() {
        cout << "\nAccount Details:\n";
        cout << "Name: " << name << "\nAccount Number: " << accountnumber 
             << "\nAccount Type: " << accountype << "\nBalance: ₹" << balance << endl;
    }

    // Function to deposit money
    void deposit() {
        int amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;

        if (amt <= 0) {
            cout << "Invalid deposit amount!\n";
            return;
        }

        balance += amt;
        cout << "Deposit successful! New Balance: ₹" << balance << endl;
    }

    // Function to withdraw money
    void withdraw() {
        int amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;

        if (amt <= 0) {
            cout << "Invalid withdrawal amount!\n";
            return;
        }

        if (balance - amt < 1000) {
            cout << "Insufficient funds! Minimum balance of ₹1000 must be maintained.\n";
        } else {
            balance -= amt;
            cout << "Withdrawal successful! New Balance: ₹" << balance << endl;
        }
    }
};

// Menu-driven program
int main() {
    members m;
    int choice;

    // Accept data initially
    m.acceptdata();

    // Menu loop
    while (1) {
        cout << "\n***** Bank Menu *****\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            m.deposit();
            break;
        case 2:
            m.withdraw();
            break;
        case 3:
            m.display();
            break;
        case 4:
            cout << "Exiting... Thank you!\n";
            return 0;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
