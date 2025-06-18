#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float marks[3];

    void input() {
        cout << "Enter student name: ";
        cin >> ws; getline(cin, name);
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display() {
        float total = marks[0] + marks[1] + marks[2];
        cout << "Name: " << name << ", Total Marks: " << total << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
