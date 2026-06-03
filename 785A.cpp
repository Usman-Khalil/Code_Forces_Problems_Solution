#include <iostream>
using namespace std;

int main()
{
    int n , noOfFaces = 0;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        string s1 ;
        cin >> s1;
        if(s1 == "Tetrahedron")
            noOfFaces += 4;
        else if(s1 == "Cube")
            noOfFaces += 6;
        else if(s1 == "Octahedron")
            noOfFaces += 8;
        else if(s1 == "Dodecahedron")
            noOfFaces += 12;
        else if(s1 == "Icosahedron")
            noOfFaces += 20;
    }
    cout << noOfFaces;
    return 0;
}