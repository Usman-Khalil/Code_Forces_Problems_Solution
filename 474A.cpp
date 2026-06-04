#include <iostream>
using namespace std;

int getIdx(char ch , char arr[])
{
    for(int i = 0 ; i < 30 ; i++)
    {
        if(arr[i] == ch)
            return i; 
    }
    return -1;
}

int main()
{
    char ch ;
    char arr[30] = {'q' , 'w' , 'e' , 'r' , 't' , 'y' , 'u' , 'i' , 'o' , 'p' , 'a' , 's' , 'd' , 'f' , 'g' , 'h' , 'j' , 'k' , 'l' , ';' , 'z' , 'x' , 'c' , 'v' , 'b' , 'n' , 'm' , ',' , '.' , '/'};
    cin >> ch;
    string s;
    cin >> s;
    int i = 0;
    while(s[i] != '\0')
    {
        int idx = getIdx(s[i] , arr);
        if(ch == 'R')
            idx = idx - 1;
        else
            idx = idx + 1;
        
        s[i] = arr[idx];
        i++;
    }
    cout << s << endl;
    return 0;
}