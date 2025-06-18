#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n1. Say Hello\n2. Say Bye\nEnter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Hello!"; break;
        case 2: cout << "Bye!"; break;
        default: cout << "Invalid Choice.";
    }

    return 0;
}
