#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> inventory;
    int choice;

    while (true) {
        cout << "\n===== INVENTORY SYSTEM =====\n";
        cout << "1. Add Product ID\n";
        cout << "2. Remove One Product\n";
        cout << "3. Count Product\n";
        cout << "4. Display Inventory\n";
        cout << "5. Find Product\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            cout << "Enter product ID: ";
            cin >> id;

            inventory.insert(id);
            cout << "Product added.\n";
        }

        else if (choice == 2) {
            int id;
            cout << "Enter product ID: ";
            cin >> id;

            auto it = inventory.find(id);

            if (it != inventory.end()) {
                inventory.erase(it);
                cout << "One product removed.\n";
            }
            else {
                cout << "Product not found.\n";
            }
        }

        else if (choice == 3) {
            int id;
            cout << "Enter product ID: ";
            cin >> id;

            cout << "Quantity: "
                 << inventory.count(id) << endl;
        }

        else if (choice == 4) {
            cout << "Inventory: ";

            for (int id : inventory)
                cout << id << " ";

            cout << endl;
        }

        else if (choice == 5) {
            int id;
            cout << "Enter product ID: ";
            cin >> id;

            if (inventory.find(id) != inventory.end())
                cout << "Product available.\n";
            else
                cout << "Product unavailable.\n";
        }

        else if (choice == 6) {
            break;
        }
    }

    return 0;
}
