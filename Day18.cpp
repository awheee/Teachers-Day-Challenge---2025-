#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    string statement;
    
    for (int i = 0; i < n; i++) {
        cin >> statement;
        if (statement == "++x" || statement == "x++") {
            x++;
        } else if (statement == "--x" || statement == "x--") {
            x--;
        }
    }
    
    cout << x << "\n";
    return 0;
}
