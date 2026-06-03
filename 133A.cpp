#include <iostream>
using namespace std;

bool isInstruction(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            return true;
        i++;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    if(isInstruction(s))
        cout << "YES" ;
    else 
        cout << "NO";
    return 0;
}