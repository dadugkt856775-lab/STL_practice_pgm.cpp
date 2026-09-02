#include <iostream>
#include <list>
using namespace std;

int main() {
    int n = 7;
    int k = 3;

    list<int> people;

    for (int i = 1; i <= n; i++)
        people.push_back(i);

    auto it = people.begin();

    while (people.size() > 1) {

        for (int count = 1; count < k; count++) {

            it++;

            if (it == people.end())
                it = people.begin();
        }

        it = people.erase(it);

        if (it == people.end())
            it = people.begin();
    }

    cout << "Survivor = " << people.front();

    return 0;
}
