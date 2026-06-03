#include <iostream>
using namespace std;

int main()
{
    int n ;
    double sum = 0; 
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        int volume ;
        cin >> volume;
        sum = sum + volume;
    }
    cout << sum / n;
    return 0;
}