#include <iostream>
using namespace std;

void rever(char org[] , char reverse[])
{
    int len = 0;
    while(org[len] != '\0')
    {
        len++;
    }
    int i = 0;
    while(org[i] != '\0')
    {
        reverse[i] = org[len - 1 - i];
        i++;
    }
    reverse[i] = '\0';
}

int compareString(char arr1[], char arr2[])
{
    int i = 0;
    while (arr1[i] != '\0' || arr2[i] != '\0')
    {
        if (arr1[i] < arr2[i])
            return -1;
        if (arr1[i] > arr2[i])
            return 1;
        i++;
    }
    return 0;
}

int main()
{
    char word[101] , reverWord[101] , dupWord[101];
    cin >> word;
    cin >> reverWord;
    rever(word , dupWord);
    if(compareString(reverWord, dupWord) == 0)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}