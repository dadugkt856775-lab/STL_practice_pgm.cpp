#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> contacts;
    int choice;

    while (true) {
        cout << "\n===== CONTACT MANAGER =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Update Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Display All Contacts\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, phone;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter phone: ";
            cin >> phone;

            contacts[name] = phone;
            cout << "Contact added successfully.\n";
        }

        else if (choice == 2) {
            string name;
            cout << "Enter name: ";
            cin >> name;

            auto it = contacts.find(name);

            if (it != contacts.end())
                cout << "Phone: " << it->second << endl;
            else
                cout << "Contact not found.\n";
        }

        else if (choice == 3) {
            string name, phone;
            cout << "Enter name: ";
            cin >> name;

            auto it = contacts.find(name);

            if (it != contacts.end()) {
                cout << "Enter new phone: ";
                cin >> phone;
                it->second = phone;
                cout << "Contact updated.\n";
            }
            else {
                cout << "Contact not found.\n";
            }
        }

        else if (choice == 4) {
            string name;
            cout << "Enter name: ";
            cin >> name;

            if (contacts.erase(name))
                cout << "Contact deleted.\n";
            else
                cout << "Contact not found.\n";
        }

        else if (choice == 5) {
            if (contacts.empty()) {
                cout << "No contacts available.\n";
            }
            else {
                for (auto &p : contacts)
                    cout << p.first << " : " << p.second << endl;
            }
        }

        else
