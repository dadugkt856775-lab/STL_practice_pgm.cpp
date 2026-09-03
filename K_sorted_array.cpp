#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    int value;
    int arrayIndex;
    int elementIndex;

    bool operator>(const Node& other) const {
        return value > other.value;
    }
};

int main() {
    vector<vector<int>> arrays = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    priority_queue<Node, vector<Node>, greater<Node>> pq;

    for (int i = 0; i < arrays.size(); i++) {
        if (!arrays[i].empty()) {
            pq.push({
                arrays[i][0],
                i,
                0
            });
        }
    }

    vector<int> result;

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        result.push_back(current.value);

        int nextIndex = current.elementIndex + 1;

        if (nextIndex < arrays[current.arrayIndex].size()) {
            pq.push({
                arrays[current.arrayIndex][nextIndex],
                current.arrayIndex,
                nextIndex
            });
        }
    }

    cout << "Merged Array: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}
