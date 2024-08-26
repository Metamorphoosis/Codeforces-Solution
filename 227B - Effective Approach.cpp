#include <iostream>
#include <unordered_map>
using namespace std;

pair <long long, long long> effective_approach(unordered_map <int, int> mpp, int size, int t) {
    long long vasya = 0;
    long long petya = 0;
    while (t--) {
        int n;
        cin >> n;
        if (mpp.find(n) != mpp.end()) {
            vasya += mpp[n];
            petya += size - mpp[n] + 1;
        }
    }
    return {vasya, petya};
}

int main () {
    int n;
    cin >> n;
    unordered_map <int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mpp [num] = i + 1;
    }

    int t;
    cin >> t;
    pair <long long, long long> result = effective_approach (mpp, n, t);
    cout << result.first << " " << result.second << endl;
}
