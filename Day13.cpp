#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    char a[100];
    int avi = 0;
 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            a[avi++] = s[i];
        }
    }
 
    sort(a, a + avi);
 
    for (int i = 0; i < avi; i++) {
        cout << a[i];
        if (i != avi - 1) {
            cout << "+";
        }
    }
 
    cout << endl;
    return 0;
}
