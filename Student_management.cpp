#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int roll;
    vector<int> marks;
    int total;
    double percentage;
};

int main() {
    map<int, Student> students;
    int choice;

    while (true) {
        cout << "\n===== STUDENT RESULT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Results\n";
        cout << "3. Search Student\n";
        cout << "4. Find Topper\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;

            cout << "Enter roll number: ";
            cin >> s.roll;

            cout << "Enter name: ";
            cin >> s.name;

            s.total = 0;
            s.marks.resize(5);

            for (int i = 0; i < 5; i++) {
                cout << "Enter mark " << i + 1 << ": ";
                cin >> s.marks[i];
                s.total += s.marks[i];
            }

            s.percentage = s.total / 5.0;
            students[s.roll] = s;

            cout << "Student added successfully.\n";
        }

        else if (choice == 2) {
            for (auto &p : students) {
                Student s = p.second;

                cout << "\nRoll: " << s.roll;
                cout << "\nName: " << s.name;
                cout << "\nTotal: " << s.total;
                cout << "\nPercentage: " << s.percentage << "%\n";
            }
        }

        else if (choice == 3) {
            int roll;
            cout << "Enter roll number: ";
            cin >> roll;

            auto it = students.find(roll);

            if (it != students.end()) {
                Student s = it->second;

                cout << "Name: " << s.name << endl;
                cout << "Total: " << s.total << endl;
                cout << "Percentage: " << s.percentage << "%\n";
            }
            else {
                cout << "Student not found.\n";
            }
        }

        else if (choice == 4) {
            if (students.empty()) {
                cout << "No students available.\n";
                continue;
            }

            auto topper = students.begin();

            for (auto it = students.begin(); it != students.end(); ++it) {
                if (it->second.total > topper->second.total)
                    topper = it;
            }

            cout << "Topper: " << topper->second.name << endl;
            cout << "Total: " << topper->second.total << endl;
        }

        else if (choice == 5) {
            int roll;
            cout << "Enter roll number: ";
            cin >> roll;

            students.erase(roll);
            cout << "Student removed.\n";
        }

        else if (choice == 6) {
            break;
        }
    }

    return 0;
}
