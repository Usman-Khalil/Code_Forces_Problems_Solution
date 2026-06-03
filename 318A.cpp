#include <iostream>
using namespace std;

int main()
{
    long long n , k;
    cin >> n >> k;
    if(n % 2 != 0)
        k = k - 1;
    if(k <= (n + 1) / 2)
    {
        if(n % 2 != 0)
            k = k + 1;
        long long number = 1;
        for(int i = 2 ; i <= k ; i++)
        {
            number+=2;
        }
        cout << number;
        
    }
    else
    {
        long long number = 2;
        for(int i = 2 ; i <= (k - (n / 2)) ; i++)
        {
            number+=2;
        }
        cout << number;
    }
    return 0;
}