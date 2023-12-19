#include <iostream>
using namespace std;

void countUpLow (string s);

int main(){
    string s;
    cin >> s;
    countUpLow(s);
    return 0;
}

void countUpLow (string s) {
    int upper=0, lower=0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            upper ++;
        }
        else{
            lower++;
        }
    }

    if (upper > lower){
        char ch;
        for (int i = 0; i < s.size(); i++){
            ch = toupper(s[i]);
            cout << ch;
        }
        
    }

    else if (lower > upper){
        char ch;
        for (int i = 0; i < s.size(); i++){
            ch = tolower(s[i]);
            cout << ch;
        }
    }
    else {
        char ch;
        for (int i = 0; i < s.size(); i++){
            ch = tolower(s[i]);
            cout << ch;
        }
    }
}
