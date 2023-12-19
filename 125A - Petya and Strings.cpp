#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    
    for(int i = 0; i < t.size(); i++){
        t[i] = towlower(t[i]);
    }
    
    if(s > t){
        cout << "1" << endl;
    }
    else if(s < t){
        cout << "-1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    
    return 0;
   
}
