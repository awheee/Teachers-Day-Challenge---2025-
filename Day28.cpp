#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l > 0 && h[l - 1] <= h[l]) l--;
        while (r < n - 1 && h[r + 1] <= h[r]) r++;
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
    return 0;
}
