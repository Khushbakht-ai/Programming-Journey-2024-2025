#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void display() {
        cout << "Account Holder: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Khushi", 5000);
    acc.deposit(1500);
    acc.display();
    return 0;
}
