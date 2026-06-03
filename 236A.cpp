#include <iostream>
using namespace std;

void dupArrayWithConstChar(char des[] , char src[] , int len)
{
    int j = 0;
    for(int i = 0 ; i < len ; i++)
    {
        int k;
        for(k = 0; k < j ; k++)
        {
            if(des[k] == src[i])
                break;
        }
        if(k == j)
        {
            des[j] = src[i];
            j++;
        }
    }
    des[j] = '\0';
}

int lengthStr(char array[])
{
    int i = 0;
    while(array[i] != '\0')
        i++;
    return i;
}

int main()
{
    char ch[101];
    cin >> ch;
    char dup[101];
    int len = lengthStr(ch);
    dupArrayWithConstChar(dup , ch , len);
    if(lengthStr(dup) % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}