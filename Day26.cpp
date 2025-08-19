#include <iostream>
using namespace std;
 
int main(){
    string fb;
    cin>>fb;
    
    int count=1;
    for(int i=1; i<fb.size(); i++){
        if (fb[i] == fb[i-1]){
            count++;
            if(count>=7){
                cout<<"YES"<<endl;
                return 0;
            }
        } else{
            count=1;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
