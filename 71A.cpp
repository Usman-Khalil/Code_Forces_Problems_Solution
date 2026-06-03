#include <iostream>
using namespace std;

int checkLength(char inputArray[])
{
    int i = 0;
    while(inputArray[i] != '\0')
        i++;
    return i;
}

int main()
{
    int n ; 
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        char input[101];
        cin >> input;
        if(checkLength(input) < 10)
        {
            cout << input << endl;
        }
        else
            cout <<  input[0] << checkLength(input) - 2 << input[checkLength(input) - 1] << endl;
    }
    return 0;
}