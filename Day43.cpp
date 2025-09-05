#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool wholeWordBig = true;
    for(int pos = 0; pos < word.size(); pos++){
        if(!isupper(word[pos])){
            wholeWordBig = false;
            break;
        }
    }

    bool afterFirstBig = true;
    for(int pos = 1; pos < word.size(); pos++){
        if(!isupper(word[pos])){
            afterFirstBig = false;
            break;
        }
    }

    if(wholeWordBig || afterFirstBig){
        for(int pos = 0; pos < word.size(); pos++){
            char letter = word[pos];
            if(isupper(letter)){
                word[pos] = tolower(letter);
            } else {
                word[pos] = toupper(letter);
            }
        }
    }

    cout << word;
    return 0;
}
