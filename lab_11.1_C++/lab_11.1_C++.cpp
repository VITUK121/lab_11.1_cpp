#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool parseFile(string t) {
    ifstream file(t);

    if (!file) {
        cout << "Error while opening file!";
        return false;
    }

    char word[] = { 'w', 'h', 'i', 'l', 'e' };
    bool found[5] = { false, false, false, false, false };
    char ch;
    bool all_found = true;

    while (file.get(ch)) {
        for (int i = 0; i < 5; i++) {
            if (ch == word[i]) {
                found[i] = true;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        if (!found[i]) {
            return false;
        }
    }

    file.close();
    return true;
}

int main() {
    string t;
    cout << "Enter filename: "; cin >> t;

    if (parseFile(t)) {
        cout << "There are all letters!" << endl;
    }
    else {
        cout << "There are missing letters." << endl;
    }
}