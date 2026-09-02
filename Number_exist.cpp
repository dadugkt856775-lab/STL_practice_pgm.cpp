#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    int x = 30;

    if (s.find(x) != s.end())
        cout << x << " exists in the set";
    else
        cout << x << " does not exist";

    return 0;
}
