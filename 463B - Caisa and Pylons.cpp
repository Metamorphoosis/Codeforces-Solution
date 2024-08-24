#include <iostream>
using namespace std;

int main () {
    int n; 
    cin >> n;
    int temp = 0;
    int cost = 0;
    int energy = 0;

    while (n--) {
        int height;
        cin >> height;
        if (height >= temp && energy == 0) {
            cost += (height - temp);
        }
        else if (height >= temp && energy != 0) {
            int diff = 0;
            diff = height - temp;
            if (diff <= energy) {
                energy = energy - diff;
            }
            else {
                cost += diff - energy;
                energy = 0;
            }
        }
        else if (temp > height) {
            energy += (temp - height);
        }
        temp = height;       
    }
    cout << cost << endl;
}
