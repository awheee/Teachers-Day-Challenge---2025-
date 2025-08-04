#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string shabd;
    cin >> shabd;
    
    string vowels = "aoyeui";
    string ans = "";
    
    for (char c : shabd){
        char lower_c = tolower(c);
        if (vowels.find(lower_c) == string::npos){
            ans += '.';
            ans += lower_c;
        }
    }
    cout << ans << endl;
    return 0;
}
