#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> magnum(n);
    
    for (int i = 0; i < n; i++) {
        cin >> magnum[i];
    }

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (magnum[i] != magnum[i - 1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}
