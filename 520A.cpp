#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n + 1];
    cin >> s;
    if(n < 26)
        cout << "NO" << endl;
    else
    {
        int i;
        for(i = 0 ; i < 26 ; i++)
        {
            int j ;
            for(j = 0 ; j < n ; j++)
            {
                if(s[j] == (char)('A' + i) || s[j] == (char)('a' + i))
                    break;
            }
            if(j == n)
            {
                cout << "NO"<< endl;
                break;
            }
        }
        
        if(i == 26)
            cout << "YES" << endl;
    }
    return 0;
}