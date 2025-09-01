#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> a(num);
    for (int i = 0; i < num; i++) cin >> a[i];

    int maxH = a[0], minH = a[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < num; i++) {
        if (a[i] > maxH) {
            maxH = a[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < num; i++) {
        if (a[i] <= minH) {
            minH = a[i];
            minIndex = i;
        }
    }

    int swapcount = maxIndex + (num - 1 - minIndex);
    if (maxIndex > minIndex) swapcount--;
    cout << swapcount;
    return 0;
}
