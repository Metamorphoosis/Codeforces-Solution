#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    string Tetrahedron =  "Tetrahedron", Cube = "Cube", Octahedron = "Octahedron", Dodecahedron = "Dodecahedron" , Icosahedron = "Icosahedron";
    string figurs;

    for (int i = 0; i < n; i++)
    {
        cin >> figurs;
        if (figurs == Tetrahedron)
        {
            sum += 4;
        }
        else if (figurs == Cube)
        {
            sum += 6;  
        }
        else if (figurs == Octahedron)
        {
            sum += 8;
        }
        else if (figurs == Dodecahedron)
        {
            sum += 12;
        }
        else if (figurs == Icosahedron)
        {
            sum += 20;
        }      
    }
    cout << sum;
    return 0;
}
