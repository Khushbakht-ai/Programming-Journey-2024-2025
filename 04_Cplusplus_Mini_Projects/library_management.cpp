#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    string title;
    string author;
};

int main() {
    vector<Book> library;
    int choice;
    do {
        cout << "\n1. Add Book\n2. View Books\n3. Exit\nChoose: ";
        cin >> choice;

        if (choice == 1) {
            Book b;
            cout << "Enter title: ";
            cin >> ws; getline(cin, b.title);
            cout << "Enter author: ";
            getline(cin, b.author);
            library.push_back(b);
        } else if (choice == 2) {
            for (auto b : library) {
                cout << "Title: " << b.title << ", Author: " << b.author << endl;
            }
        }
    } while (choice != 3);
    return 0;
}
