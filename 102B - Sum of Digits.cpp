#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int steps = 0;
    while (s.length() > 1) {
        int sum = 0;
        for (char digit : s) {
            sum += digit -'0';
        }
        steps ++;
        s = to_string(sum);
    }
    cout << steps << endl;
    return 0;
}
