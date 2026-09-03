#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Job {
    string name;
    int priority;

    bool operator<(const Job& other) const {
        return priority < other.priority;
    }
};

int main() {
    priority_queue<Job> jobs;

    int n;

    cout << "Enter number of jobs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Job j;

        cout << "\nEnter job name: ";
        cin >> j.name;

        cout << "Enter priority: ";
        cin >> j.priority;

        jobs.push(j);
    }

    cout << "\n===== EXECUTION ORDER =====\n";

    while (!jobs.empty()) {
        Job current = jobs.top();
        jobs.pop();

        cout << "Executing: "
             << current.name
             << " | Priority: "
             << current.priority << endl;
    }

    return 0;
}
