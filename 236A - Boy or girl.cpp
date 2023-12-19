#include <iostream>
using namespace std;
void removeDuplicate(string &s, int n);

int main() {
    string s;
    cin >> s;
    removeDuplicate(s, s.size());
    if (s.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
}

void removeDuplicate(string &s, int n){
    string ans = "";
        int i, j;
        for (i=0; i<n; i++){
            for(j=0; j<i; j++){
                if(s[i]==s[j]){
                    break;
                }
            }
            if (j==i){
                ans+=s[i];
            }
        }
    s = ans;
}
