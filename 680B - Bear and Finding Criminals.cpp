#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int criminalCount (vector <int> &arr, int n, int a) {
    int b = a - 1;
    int count = 0;
    vector <int> criminalCounter (n, 0);
    vector <int> distanceCounter (n, 0);
    
    for (int i = 0; i < n; i++) {
        int distance = abs(i - b);
        criminalCounter[distance] += arr[i];
        distanceCounter[distance]++;
    }

    for (int i = 0; i < n; i++) {
        int distance = abs(i - b);
        if (criminalCounter[distance] == distanceCounter[distance]) {
            count ++;
        }
    }
    return count;
}

int main () {
    int n , a;
    cin >> n >> a;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << criminalCount (arr, n, a);
    return 0;
}
