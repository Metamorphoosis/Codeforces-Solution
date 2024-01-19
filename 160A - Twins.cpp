#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sum = sum/2;
    int ans = 0;
    int c = 0;

    sort(arr, arr+n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
        c++;
        if (ans > sum)
        break;
    }

    cout << c << endl;
    return 0;
}
