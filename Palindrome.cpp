#include <iostream>
#include <deque>
using namespace std;

int main() {
    string s = "madam";

    deque<char> dq;

    for (char ch : s)
        dq.push_back(ch);

    bool palindrome = true;

    while (dq.size() > 1) {

        if (dq.front() != dq.back()) {
            palindrome = false;
            break;
        }

        dq.pop_front();
        dq.pop_back();
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
