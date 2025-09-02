#include <iostream>
using namespace std;
 
int main() {
    int num;
    cin >> num;
 
    int arr1[100], arr2[100];  
 
    for (int i = 0; i < num; ++i) {
        cin >> arr1[i] >> arr2[i];
    }
 
    int count = 0;
    for (int i = 0; i < num; ++i) {
        if (arr2[i] - arr1[i] >= 2) {
            count++;
        }
    }
 
    cout << count;
    return 0;
}
