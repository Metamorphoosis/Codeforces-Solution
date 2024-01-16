#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char LR;
    cin >> LR;

    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        int index = s.find(input[i]);
        if (LR == 'L')
        {
            cout << s[index + 1];
        }

        else
        {
            cout << s[index - 1];
        }

    }

    return 0;

}
