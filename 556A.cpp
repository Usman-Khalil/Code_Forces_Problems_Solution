#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int noOf1s = 0 , noOf0s = 0;
    while(n--)
    {
        if(s[n] == '0')
            noOf0s++;
        else
            noOf1s++;
    }
    if(noOf0s > noOf1s)
        cout << (noOf0s - noOf1s) << endl;
    else
        cout << (noOf1s - noOf0s) << endl;
    return 0;
}