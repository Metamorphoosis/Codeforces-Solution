#include <iostream>
#include <string>
using namespace std;

int main() {
    string colors = "ROYGBIV";
    string extra = "GBIV";
    int n;
    cin >> n;
    int temp = n - 7;

    cout << colors;

    for (int i = 0; i < temp; i++) {
        cout << extra[i % 4];
    }
    
    return 0;
}
