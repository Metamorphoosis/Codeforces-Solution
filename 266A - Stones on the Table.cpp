#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    string s;
    cin >> n;
    char ch;
    for (int i = 0; i < n; i++){
        cin >> ch;
        s = s + ch;
    }
    for (int i = 0; i < s.size(); i ++){
            if (s[i] == s[i+1]){
                c++;
            }
        }    
    cout << c << endl;
    return 0;
}
