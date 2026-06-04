#include <iostream>
using namespace std;

int main()
{
    int prevPairs  , days;
    cin >> prevPairs >> days;
    int totalDays = prevPairs + (prevPairs / days);
    int temp = prevPairs ;
    while((totalDays / days) > (temp / days))
    {
        temp = totalDays;
        totalDays = prevPairs + (totalDays / days);
    }
    cout << totalDays ;
    return 0;
}