#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    string s1 = "I hate ";
    string s2 = "I love ";
    for(int i = 1 ; i <= n ; i++)
    {
        if(i % 2 != 0)
            cout << s1;
        if(i % 2 == 0)
            cout << s2;
        if(i == n)
            cout << "it";
        else
            cout << "that ";
    }
    return 0;
}