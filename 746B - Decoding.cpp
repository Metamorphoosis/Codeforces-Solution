#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<char> encode;
    for (int i = 0; i < n; i++) {
        char input;
        cin >> input;
        encode.push(input);
    }

    vector<char> decode(n);
        
    if (n % 2 == 0) {
        int left = (n - 1) / 2;
        int right = (n - 1) / 2 + 1;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                decode[left--] = encode.front();
            } 
            else {
                decode[right++] = encode.front();
            }
            encode.pop();
        }
    }
    else {
        int left = (n - 1) / 2 - 1;
        int right = (n - 1) / 2;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                decode[right++] = encode.front();
            }
            else {
                decode[left--] = encode.front();
            }
            encode.pop();
        }
    }    

    for (auto it : decode) {
        cout << it;
    }
    return 0;
}
