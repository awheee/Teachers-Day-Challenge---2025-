#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string inp;
    cin >> inp;

    // Capitalize the first character if it's lowercase
    if (islower(inp[0])) {
        inp[0] = toupper(inp[0]);
    }

    cout << inp << endl;
    return 0;
}
