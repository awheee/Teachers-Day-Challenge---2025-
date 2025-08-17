#include <iostream>
using namespace std;

int main() {
    int k, w;
    long long n;
    cin >> k >> n >> w;
    
    long long total = 1LL * k * w * (w + 1) / 2;  // total cost
    long long borrow = total - n;
    
    if (borrow < 0) borrow = 0;
    cout << borrow << endl;
    
    return 0;
}
