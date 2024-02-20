#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n; // Number of entries in the phone book

    // Phone book as an unordered_map
    unordered_map<string, string> phoneBook;

    // Populate the phone book
    for (int i = 0; i < n; i++) {
        string name, phoneNumber;
        cin >> name >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }

    // Query the phone book
    string query;
    while (cin >> query) {
        // Check if the name exists in the phone book
        auto it = phoneBook.find(query);

        if (it != phoneBook.end()) {
            // Name found, print name=phoneNumber
            cout << it->first << "=" << it->second << endl;
        } else {
            // Name not found, print Not found
            cout << "Not found" << endl;
        }
    }

    return 0;
}
