// Define a struct in C for bank account information details
// struct members
// 	name,
// 	acountnumber,
// 	acounttype,  [saving/loan/ppf/nps]
// 	balance  [minimun balance = 1000]
// functions
// 	AcceptData()
// 	Deposit()
// 	Withdraw()
// 	Display()
// in main function test the functionality by using menu driven code

#include <stdio.h>
#include <string.h>

// Define a struct for bank account details
struct members {
    char name[20];
    long accountnumber;
    char accountype[20];
    int balance;


// Function to accept user data
void acceptdata(struct members* m) {
    printf("Enter Name: ");
    scanf("%19s", m->name);

    printf("Enter Account Number: ");
    scanf("%ld", &m->accountnumber);

    printf("Enter Account Type (saving/loan/ppf/nps): ");
    scanf("%19s", m->accountype);

    printf("Enter Initial Balance (Minimum ₹1000): ");
    scanf("%d", &m->balance);

    if (m->balance < 1000) {
        printf("Minimum balance ₹1000 required! Setting balance to ₹1000.\n");
        m->balance = 1000;
    }
}

// Function to display account details
void display(const struct members* m) {
    printf("\nAccount Details:\n");
    printf("Name: %s\nAccount Number: %ld\nAccount Type: %s\nBalance: ₹%d\n", 
           m->name, m->accountnumber, m->accountype, m->balance);
}

// Function to deposit money
void deposit(struct members* m) {
    int amt;
    printf("Enter amount to deposit: ");
    scanf("%d", &amt);

    if (amt <= 0) {
        printf("Invalid deposit amount!\n");
        return;
    }

    m->balance += amt;
    printf("Deposit successful! New Balance: ₹%d\n", m->balance);
}

// Function to withdraw money
void withdraw(struct members* m) {
    int amt;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amt);

    if(amt <= 0) {
        printf("Invalid withdrawal amount!\n");
        return;
    }
    
    if (m->balance - amt < 1000) {
        printf("Insufficient funds! Minimum balance of ₹1000 must be maintained.\n");
    } else {
        m->balance -= amt;
        printf("Withdrawal successful! New Balance: ₹%d\n", m->balance);
    }
}

};

// Menu-driven program
int main() {
    struct members m;
    int choice;

    // Accept data initially
    m.acceptdata(&m);

    // Menu loop
    while (1) {
        printf("\n***** Bank Menu *****\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                m.deposit(&m);
                break;
            case 2:
                m.withdraw(&m);
                break;
            case 3:
                m.display(&m);
                break;
            case 4:
                printf("Exiting... Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
