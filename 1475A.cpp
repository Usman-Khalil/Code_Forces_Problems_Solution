#include <iostream>
using namespace std;

bool isOddDivisor(long long int n )
{
    while(n > 1)
    {
        if(n % 2 != 0)
        {
            return true;
        }
        n = n / 2;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        long long int n ;
        cin >> n;
        if(n % 2 != 0)
            cout << "YES\n";
        else
        {
            if(isOddDivisor(n))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}