#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int c = 1;
    int best = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] >= arr[j-1])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        for (int k = i; k < n-1; k++)
        {
            if (arr[k] >= arr[k+1])
            {
                c++;
            }
            else{
                break;
            }
        }
        if (c > best)
        {
            best = c;
        }
        c = 1;
    }
    cout << best << "\n";
    return 0;    
}
