#include <iostream>
using namespace std;

class Account {
private:
    string name;
    float balance;

public:
    Account(string n, float b) {
        name = n;
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void show_balance() {
        cout << "Account Holder: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    Account a("Khushi", 10000);
    int option;
    float amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n4. Exit\nChoose: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter amount: ";
                cin >> amount;
                a.deposit(amount);
                break;
            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                a.withdraw(amount);
                break;
            case 3:
                a.show_balance();
                break;
        }
    } while (option != 4);

    return 0;
}
