#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin>>num;
    
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int i=0; i<14; i++){
        if(num % lucky[i] == 0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
