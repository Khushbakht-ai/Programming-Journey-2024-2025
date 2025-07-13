#include <iostream>
using namespace std;

float divide(int a, int b) {
    if (b == 0)
        throw "Division by zero not allowed!";
    return (float)a / b;
}

int main() {
    int num1, num2;
    cout << "Enter numerator: ";
    cin >> num1;
    cout << "Enter denominator: ";
    cin >> num2;

    try {
        float result = divide(num1, num2);
        cout << "Result = " << result << endl;
    } catch (const char* e) {
        cout << "Error: " << e << endl;
    }

    return 0;
}
