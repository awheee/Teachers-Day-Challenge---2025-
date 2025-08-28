#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int nextp = n + 1;
    while (!isPrime(nextp)) nextp++;
    cout << (nextp == m ? "YES" : "NO");
}
