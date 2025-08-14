
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
 
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += nums[j];
    }
 
    sort(nums.begin(), nums.end(), greater<int>());
 
    int half_sum = sum / 2;
    int k_sum = 0;
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        k_sum += nums[i];
        count++;
        if (k_sum > half_sum) break;
    }
 
    cout << count << endl;
    return 0;
}
