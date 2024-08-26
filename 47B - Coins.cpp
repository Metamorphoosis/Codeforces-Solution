#include <iostream>
#include <string>
#include <map>
using namespace std;

int main ()  {
    int A = 0, B = 0, C = 0;
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        if (s[1] == '>'){
            if (s[0] == 'A'){
                A++;
            }
            else if (s[0] == 'B'){
                B++;
            }
            else if(s[0] == 'C'){
                C++;
            }

            if (s[2] == 'A'){
                A--;
            }
            else if (s[2] == 'B'){
                B--;
            }
            else if(s[2] == 'C') {
                C--;
            }
        }
        else {
            if (s[0] == 'A'){
                A--;
            }
            else if (s[0] == 'B'){
                B--;
            }
            else if (s[0] == 'C'){
                C--;
            }

            if (s[2] == 'A'){
                A++;
            }
            else if (s[2] == 'B'){
                B++;
            }
            else if (s[2] == 'C') {
                C++;
            }
        }
    }

    map <int, char> mpp;
    mpp[A] = 'A';
    mpp[B] = 'B';
    mpp[C] = 'C';

    if (mpp.find(-2) != mpp.end() && mpp.find(0) != mpp.end() && mpp.find(2) != mpp.end()) {
        cout << mpp[-2] << mpp[0] << mpp[2] << endl;
    }
    else {
        cout << "Impossible" << endl;
    }

    return 0;   
}
