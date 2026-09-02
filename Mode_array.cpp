#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> v = {
        4, 2, 4, 3, 2, 4, 5, 2, 4
    };

    map<int, int> freq;

    for (int x : v)
        freq[x]++;

    int mode = v[0];
    int highest = 0;

    for (auto x : freq) {
        if (x.second > highest) {
            highest = x.second;
            mode = x.first;
        }
    }

    cout << "Mode = " << mode << endl;
    cout << "Frequency = " << highest;

    return 0;
}
