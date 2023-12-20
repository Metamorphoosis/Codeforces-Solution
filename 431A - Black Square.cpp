#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    string s;
    cin >> s;
    int cal = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            cal += a;
        }
        else if(s[i] == '2'){
            cal += b;
        }
        else if(s[i] == '3'){
            cal += c;
        }
        else if(s[i] == '4'){
            cal += d;
        }

    }
  
    cout << cal << endl;
    return 0;

}
