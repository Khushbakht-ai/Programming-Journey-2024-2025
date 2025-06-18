#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};

int main() {
    Dog d;
    d.speak();
    d.bark();
    return 0;
}
