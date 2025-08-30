#include <iostream>
using namespace std;
 
int main() {
    string joke;
    cin >> joke;
 
    for(char c : joke){
        if(c == 'H' || c == 'Q' || c == '9'){
            cout << "YES";
            return 0;
        }
    }
 
    cout << "NO";
    return 0;
}
