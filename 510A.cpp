#include <iostream>
using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m;
    for(int i = 1 ; i  <= n ; i++)
    {
        if(i % 2 == 1)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                cout << '#';
            }
            cout << '\n';
        }
        else
        {
            if(i % 4 == 0)
            {
                for(int j = m ; j >= 1 ; j--)
                {
                    if(j < m)
                        cout << '.';
                    else 
                        cout << '#';
                }
            }
            else
            {
                for(int j = 1 ; j <= m ; j++)
                {
                    if(j < m)
                        cout << '.';
                    else 
                        cout << '#';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}