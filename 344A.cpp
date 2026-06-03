#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int mag , prevMag , countOfGroups = 1;
    cin >> prevMag;
    for(int i = 2; i <= n ; i++)
    {
        cin >> mag;
        if(prevMag != mag)
            countOfGroups++;
        prevMag = mag;
    }
    cout << countOfGroups;
    return 0;
}