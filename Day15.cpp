#include <iostream>
#include <set>
using namespace std;

int main() {
    string name;
    cin >> name;

    set<char> distinct_letters;

    for (char ch : name) {
        distinct_letters.insert(ch); // stores only unique letters
    }

    if (distinct_letters.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
