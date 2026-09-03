#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice;

    while (true) {
        cout << "\n===== QUEUE SYSTEM =====\n";
        cout << "1. Add Person\n";
        cout << "2. Serve Person\n";
        cout << "3. Display Queue\n";
        cout << "4. Queue Size\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            cout << "Enter person ID: ";
            cin >> id;

            q.push(id);
            cout << "Person added.\n";
        }

        else if (choice == 2) {
            if (q.empty()) {
                cout << "Queue is empty.\n";
            }
            else {
                cout << "Serving person: " << q.front() << endl;
                q.pop();
            }
        }

        else if (choice == 3) {
            if (q.empty()) {
                cout << "Queue is empty.\n";
            }
            else {
                queue<int> temp = q;

                cout << "Queue: ";

                while (!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }

                cout << endl;
            }
        }

        else if (choice == 4) {
            cout << "People waiting: " << q.size() << endl;
        }

        else if (choice == 5) {
            break;
        }

        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
