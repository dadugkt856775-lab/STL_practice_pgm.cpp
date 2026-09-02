#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> a = {1, 2, 3, 4, 5};
    set<int> b = {3, 4, 5, 6, 7};

    cout << "Elements only in A: ";

    for (int x : a) {
        if (b.find(x) == b.end())
            cout << x << " ";
    }

    cout << "\nElements only in B: ";

    for (int x : b) {
        if (a.find(x) == a.end())
            cout << x << " ";
    }

    return 0;
}
