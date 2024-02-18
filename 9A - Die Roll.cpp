#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b);

int main()
{
    short int y, w;
    cin >> y >> w;
    int chance;
    int side = 6;
    
    chance = 6 - max(y, w) + 1;
    int divisor = gcd(side, chance);

    side /= divisor;
    chance /= divisor;

    cout << chance << "/" << side;

    
}

int gcd(int a,int b) {
  int R;
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
  }
  return b;
}
