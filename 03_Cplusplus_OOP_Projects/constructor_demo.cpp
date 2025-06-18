#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }
};

int main() {
    Person p("Khushi");
    return 0;
}
