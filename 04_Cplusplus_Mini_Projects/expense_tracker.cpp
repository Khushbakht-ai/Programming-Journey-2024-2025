#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> expenses;
    float amount;
    char choice;

    do {
        cout << "Enter expense amount: ";
        cin >> amount;
        expenses.push_back(amount);

        cout << "Add another? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    float total = 0;
    for (float e : expenses) total += e;

    cout << "Total Expenses: " << total << endl;
    return 0;
}
