#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0, x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    cout << fixed << setprecision(12) << sum / n << endl;
    return 0;
}
