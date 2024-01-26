#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;

    long long int stone_in_lenth = ceil (n / a);
    long long int stone_in_width = ceil (m / a);

    long long result = stone_in_lenth * stone_in_width;

    cout << result;
    return 0;   
}

    
