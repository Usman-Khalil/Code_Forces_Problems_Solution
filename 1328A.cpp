#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
    {
        int a , b , minMoves = 0;
        cin >> a >> b;
        if(a < b)
            minMoves = b - a;
        else
        {
            if(a % b == 0)
                minMoves = a % b;
            else
                minMoves = b - (a % b);  
        }
        cout << minMoves <<endl;
    }
    return 0;
}