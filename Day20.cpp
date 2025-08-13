#include <iostream>
using namespace std;

int main(){
    string ber, bir;
    cin>>ber>>bir;
    
    if (ber.length() != bir.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    
    int i = 0, j = bir.length() - 1;
    while (i < ber.length()) {
        if (ber[i] != bir[j]) {
            cout << "NO";
            return 0;
        }
        i++;
        j--;
    }
    
    cout<<"YES"<<endl;
    return 0;
}
