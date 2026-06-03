#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int i = 0;
    int count1 = 0, count2 = 0;
    while(n[i] != '\0')
    {
        if(n[i] == '0')
        {
            count1++;
            count2 = 0;
            if(count1 == 7)
            {
                cout << "YES";
                break;
            }
        }
        else
        {
            count2++;
            count1 = 0;
            if(count2 == 7)
            {
                cout << "YES";
                break;
            }
        }
        i++;
    }
    if(n[i] == '\0')
        cout << "NO";
    return 0;
}