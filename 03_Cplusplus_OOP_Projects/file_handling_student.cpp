#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("student.txt");
    file << "Name: Khushi\n";
    file << "Age: 19\n";
    file.close();

    ifstream infile("student.txt");
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}
