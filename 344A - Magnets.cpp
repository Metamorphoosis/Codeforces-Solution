#include <iostream>
using namespace std;

int main () {
    int n, m[100000];
    cin >> n;
    int c = 0;

    for (int i = 0; i < n; i++){
        cin >> m[i];
    }

    for (int i = 0; i < n; i++){
        if (m[i] != m[i+1]){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
