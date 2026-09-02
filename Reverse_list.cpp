#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {
        10, 20, 30, 40, 50
    };

    cout << "Original list: ";

    for (int x : numbers)
        cout << x << " ";

    numbers.reverse();

    cout << "\nReversed list: ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}
