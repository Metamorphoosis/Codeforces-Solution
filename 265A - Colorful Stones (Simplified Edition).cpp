#include <iostream>
using namespace std;

int main(){
    int n = 0;
    string s, t;
    cin >> s >> t;
    
    for (int i = 0; i < t.size(); i++){
        if (s[n] == t[i]){
            n++;
        }
    }
    cout << n + 1 << endl;
    return 0;
    
}
