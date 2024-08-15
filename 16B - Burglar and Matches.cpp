#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    multimap <int, int> mpp;
    for (int i = 0; i < m; i++) {
        int key;
        int value;
 
        cin >> value >> key;
        mpp.insert({key,value});
    }
 
    int sum = 0;
    for (auto it = mpp.rbegin(); it != mpp.rend(); it++) {
        int times = min (n, it->second);
        sum += it->first * times;
        n = n - times;
        if (n <= 0) {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
