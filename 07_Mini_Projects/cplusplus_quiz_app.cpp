#include <iostream>
using namespace std;

int main() {
    int score = 0;
    string ans;

    cout << "Q1. What is the output of 2 + 3 * 4?\n";
    cout << "a) 20  b) 14  c) 24\nAnswer: ";
    cin >> ans;
    if(ans == "b") score++;

    cout << "Q2. C++ is a...\n";
    cout << "a) Scripting Language  b) Markup Language  c) Programming Language\nAnswer: ";
    cin >> ans;
    if(ans == "c") score++;

    cout << "\nYour score: " << score << "/2\n";
    return 0;
}
