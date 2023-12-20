#include <iostream>
using namespace std;

int main(){
    int n, e, p=0, c=0;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> e;
        if (e == -1){
            if(p > 0){
                p--;
            }
            else{
                c++;
            }
        }
        else{
            p = p+e;
        }        
    }
    cout << c << endl;
    return 0;
}
